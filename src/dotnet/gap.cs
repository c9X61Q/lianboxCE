using System;
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Security.Principal;

[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.Default | DebuggableAttribute.DebuggingModes.DisableOptimizations | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints | DebuggableAttribute.DebuggingModes.EnableEditAndContinue)]
[assembly: AssemblyTitle("申请管理员权限")]
[assembly: AssemblyDescription("为脚本申请管理员权限by酷安@某贼")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("为脚本申请管理员权限by酷安@某贼")]
[assembly: AssemblyProduct("gap")]
[assembly: AssemblyCopyright("Copyright ©  2023")]
[assembly: AssemblyTrademark("")]
[assembly: ComVisible(false)]
[assembly: Guid("61c3e66e-59c4-478d-ac33-1cf91c433c5d")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: TargetFramework(".NETFramework,Version=v4.7.2", FrameworkDisplayName = ".NET Framework 4.7.2")]
[assembly: AssemblyVersion("1.0.0.0")]
namespace gap;

internal class Program
{
	private static void Main(string[] args)
	{
		string text = "";
		bool flag = false;
		if (args.Length == 0)
		{
			Console.WriteLine("[Error]No_argument");
			Console.WriteLine("简介: 以管理员模式运行指定程序或脚本 作者: 酷安@某贼 2025.2.17-1");
			Console.WriteLine("用法: gap.exe 文件路径");
			Environment.Exit(1);
		}
		else if (args[0] == "<restart>")
		{
			flag = true;
			for (int i = 1; i < args.Length; i++)
			{
				text = text + args[i] + " ";
			}
		}
		else
		{
			flag = false;
			for (int j = 0; j < args.Length; j++)
			{
				text = text + args[j] + " ";
			}
		}
		if (!File.Exists(text))
		{
			Console.WriteLine("[Error]File_not_found");
			Environment.Exit(1);
		}
		if (!IsRunningAsAdmin())
		{
			if (!flag)
			{
				Console.WriteLine("简介: 以管理员模式运行指定程序或脚本 作者: 酷安@某贼");
				Console.WriteLine("[Error]No_administrator_privileges");
				Console.WriteLine("[Info]Waiting_for_user_authorization");
				RestartAsAdmin("<restart> " + text);
			}
			else
			{
				Console.WriteLine("[Error]Failed_to_get_administrator_privileges");
				Console.WriteLine("[Info]Press_any_key_to_exit");
				Console.ReadKey();
				Environment.Exit(1);
			}
		}
		else if (!flag)
		{
			Environment.Exit(0);
		}
		else
		{
			if (!RunProgram(text))
			{
				Console.WriteLine("[Info]Press_any_key_to_exit");
				Console.ReadKey();
			}
			Environment.Exit(1);
		}
	}

	private static bool IsRunningAsAdmin()
	{
		WindowsIdentity current = WindowsIdentity.GetCurrent();
		WindowsPrincipal windowsPrincipal = new WindowsPrincipal(current);
		return windowsPrincipal.IsInRole(WindowsBuiltInRole.Administrator);
	}

	private static void RestartAsAdmin(string programPath)
	{
		ProcessStartInfo processStartInfo = new ProcessStartInfo();
		processStartInfo.UseShellExecute = true;
		processStartInfo.WorkingDirectory = Environment.CurrentDirectory;
		processStartInfo.FileName = Assembly.GetEntryAssembly().CodeBase;
		processStartInfo.Verb = "runas";
		processStartInfo.Arguments = programPath;
		try
		{
			Process.Start(processStartInfo);
			Console.WriteLine("[Info]Please_wait_for_the_program_to_restart");
		}
		catch (Win32Exception)
		{
			Console.WriteLine("[Error]User_refuses_to_provide_administrator_privileges");
		}
		Environment.Exit(1);
	}

	private static bool RunProgram(string programPath)
	{
		try
		{
			Process.Start(programPath);
		}
		catch (Exception ex)
		{
			Console.WriteLine("[Error]Error_running_program: " + ex.Message);
			return false;
		}
		return true;
	}
}
