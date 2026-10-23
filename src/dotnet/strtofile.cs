using System;
using System.Diagnostics;
using System.IO;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Text;

[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints)]
[assembly: AssemblyTitle("strtofile")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("")]
[assembly: AssemblyProduct("strtofile")]
[assembly: AssemblyCopyright("Copyright ©  2024")]
[assembly: AssemblyTrademark("")]
[assembly: ComVisible(false)]
[assembly: Guid("97254cfc-ef13-4d73-adf2-b82e2c42f555")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: TargetFramework(".NETFramework,Version=v4.7.2", FrameworkDisplayName = ".NET Framework 4.7.2")]
[assembly: AssemblyVersion("1.0.0.0")]
namespace strtofile;

internal class Program
{
	private static int Main(string[] args)
	{
		if (args.Length == 0)
		{
			Console.WriteLine("错误：未提供文件路径。");
			return 1;
		}
		string fullPath = Path.GetFullPath(args[0]);
		try
		{
			Console.SetIn(new StreamReader(Console.OpenStandardInput(), Encoding.Default, detectEncodingFromByteOrderMarks: false, 15360));
			string value = Console.ReadLine();
			using FileStream stream = new FileStream(fullPath, FileMode.Create);
			using StreamWriter streamWriter = new StreamWriter(stream, Encoding.Default);
			streamWriter.Write(value);
			streamWriter.Flush();
		}
		catch (FileNotFoundException ex)
		{
			Console.WriteLine("文件未找到错误: " + ex.Message);
			return 1;
		}
		catch (UnauthorizedAccessException ex2)
		{
			Console.WriteLine("访问权限错误: " + ex2.Message);
			return 1;
		}
		catch (IOException ex3)
		{
			Console.WriteLine("IO错误: " + ex3.Message);
			return 1;
		}
		catch (Exception ex4)
		{
			Console.WriteLine("未知错误: " + ex4.Message);
			return 1;
		}
		return 0;
	}
}
