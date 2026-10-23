using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.IO.Compression;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using System.Text;
using System.Threading;
using System.Windows.Forms;
using Costura;
using Microsoft.WindowsAPICodePack.Dialogs;

[assembly: CompilationRelaxations(8)]
[assembly: RuntimeCompatibility(WrapNonExceptionThrows = true)]
[assembly: Debuggable(DebuggableAttribute.DebuggingModes.Default | DebuggableAttribute.DebuggingModes.DisableOptimizations | DebuggableAttribute.DebuggingModes.IgnoreSymbolStoreSequencePoints | DebuggableAttribute.DebuggingModes.EnableEditAndContinue)]
[assembly: AssemblyTitle("filedialog")]
[assembly: AssemblyDescription("")]
[assembly: AssemblyConfiguration("")]
[assembly: AssemblyCompany("")]
[assembly: AssemblyProduct("filedialog")]
[assembly: AssemblyCopyright("Copyright ©  2024")]
[assembly: AssemblyTrademark("")]
[assembly: ComVisible(false)]
[assembly: Guid("22d54516-5f32-4065-9c34-a04452ae524f")]
[assembly: AssemblyFileVersion("1.0.0.0")]
[assembly: TargetFramework(".NETFramework,Version=v4.7.2", FrameworkDisplayName = ".NET Framework 4.7.2")]
[assembly: AssemblyVersion("1.0.0.0")]
internal class <Module>
{
	static <Module>()
	{
		AssemblyLoader.Attach();
	}
}
namespace filedialog
{
	internal class Program
	{
		[STAThread]
		private static void Main(string[] args)
		{
			//IL_021a: Unknown result type (might be due to invalid IL or missing references)
			//IL_0221: Expected Obj, but got Unknown
			//IL_0484: Unknown result type (might be due to invalid IL or missing references)
			//IL_048b: Expected Obj, but got Unknown
			//IL_04fe: Unknown result type (might be due to invalid IL or missing references)
			//IL_0504: Invalid comparison between Unknown and I4
			//IL_0363: Unknown result type (might be due to invalid IL or missing references)
			//IL_0369: Invalid comparison between Unknown and I4
			string target = "";
			string quantity = "";
			bool multiselect = false;
			string text = "";
			string startfolder = "";
			string filter = "";
			bool flag = false;
			string outputtxt = "";
			string title = "";
			ParsArgs();
			if (target != "file" && target != "folder")
			{
				Usage();
			}
			if (quantity == "m")
			{
				multiselect = true;
				text = " (可多选) ";
			}
			if (ChkPath(startfolder))
			{
				startfolder = Path.GetFullPath(startfolder);
				if (!Directory.Exists(startfolder))
				{
					startfolder = Directory.GetCurrentDirectory();
				}
			}
			else
			{
				Console.WriteLine("[Warn]Startfolder_path_error");
				startfolder = Directory.GetCurrentDirectory();
			}
			if (ChkPath(outputtxt))
			{
				outputtxt = Path.GetFullPath(outputtxt);
				if (!Directory.Exists(Path.GetDirectoryName(outputtxt)))
				{
					Console.WriteLine("[Error]Output_file_path_error");
					Exit(1);
				}
			}
			else
			{
				Console.WriteLine("[Error]Output_file_path_error");
				Exit(1);
			}
			if (filter.Contains("[*]"))
			{
				filter = filter.Replace("[*]", "");
				flag = true;
			}
			if (filter == "")
			{
				flag = true;
			}
			else
			{
				filter = filter.Replace("[", "*.").Replace("]", ";");
			}
			if (target == "file")
			{
				OpenFileDialog val = new OpenFileDialog();
				if (title == "")
				{
					((FileDialog)val).Title = "请选择文件" + text + ": " + filter;
				}
				else
				{
					((FileDialog)val).Title = title;
				}
				val.Multiselect = multiselect;
				((FileDialog)val).InitialDirectory = startfolder;
				((FileDialog)val).RestoreDirectory = true;
				if (filter != "")
				{
					filter = "请选择: " + filter + "|" + filter + "|";
				}
				if (flag)
				{
					filter += "所有文件|*.*";
				}
				if (filter.Substring(filter.Length - 1, 1) == "|")
				{
					filter = filter.Substring(0, filter.Length - 1);
				}
				((FileDialog)val).Filter = filter;
				Console.WriteLine("[Info]Waiting_for_user_selection");
				if ((int)((CommonDialog)val).ShowDialog() == 1)
				{
					string text2 = "";
					for (int i = 0; i <= ((FileDialog)val).FileNames.Length - 1; i++)
					{
						text2 = text2 + ((FileDialog)val).FileNames[i] + "/";
					}
					if (text2.Substring(text2.Length - 1, 1) == "/")
					{
						text2 = text2.Substring(0, text2.Length - 1);
					}
					File.WriteAllText(outputtxt, text2 + "\r\n", Encoding.Default);
					if (!ChkSpecialChar(text2))
					{
						Console.WriteLine("[Warn]Special_character_found");
					}
					Console.WriteLine("[Number]" + ((FileDialog)val).FileNames.Length);
					Exit(0);
				}
				else
				{
					Console.WriteLine("[Error]Nothing_is_selected");
					Exit(1);
				}
			}
			if (target == "folder")
			{
				CommonOpenFileDialog val2 = new CommonOpenFileDialog();
				if (title == "")
				{
					((CommonFileDialog)val2).Title = "请选择文件夹" + text;
				}
				else
				{
					((CommonFileDialog)val2).Title = title;
				}
				val2.IsFolderPicker = true;
				val2.Multiselect = multiselect;
				((CommonFileDialog)val2).InitialDirectory = startfolder;
				((CommonFileDialog)val2).RestoreDirectory = true;
				Console.WriteLine("[Info]Waiting_for_user_selection");
				if ((int)((CommonFileDialog)val2).ShowDialog() == 1)
				{
					string text3 = "";
					int num = 0;
					foreach (string fileName in val2.FileNames)
					{
						text3 = text3 + fileName + "/";
						num++;
					}
					if (text3.Substring(text3.Length - 1, 1) == "/")
					{
						text3 = text3.Substring(0, text3.Length - 1);
					}
					File.WriteAllText(outputtxt, text3 + "\r\n", Encoding.Default);
					if (!ChkSpecialChar(text3))
					{
						Console.WriteLine("[Warn]Special_character_found");
					}
					Console.WriteLine("[Number]" + num);
					Exit(0);
				}
				else
				{
					Console.WriteLine("[Error]Nothing_is_selected");
					Exit(1);
				}
			}
			Usage();
			static bool ChkPath(string path)
			{
				if (path == "")
				{
					return false;
				}
				try
				{
					string fullPath = Path.GetFullPath(path);
				}
				catch (ArgumentException)
				{
					return false;
				}
				return true;
			}
			static bool ChkSpecialChar(string filepaths)
			{
				if (filepaths.Contains(" "))
				{
					return false;
				}
				if (filepaths.Contains(","))
				{
					return false;
				}
				if (filepaths.Contains("("))
				{
					return false;
				}
				if (filepaths.Contains(")"))
				{
					return false;
				}
				if (filepaths.Contains("^"))
				{
					return false;
				}
				return true;
			}
			static void Exit(int code)
			{
				Console.WriteLine("[Info]Exit");
				Environment.Exit(code);
			}
			void ParsArgs()
			{
				for (int j = 1; j <= args.Length; j++)
				{
					if (args[j - 1] == "-t")
					{
						target = args[j];
					}
					if (args[j - 1] == "-q")
					{
						quantity = args[j];
					}
					if (args[j - 1] == "-s")
					{
						startfolder = args[j];
					}
					if (args[j - 1] == "-f")
					{
						filter = args[j];
					}
					if (args[j - 1] == "-o")
					{
						outputtxt = args[j];
					}
					if (args[j - 1] == "-i")
					{
						title = args[j];
					}
				}
			}
			static void Usage()
			{
				Console.WriteLine("[Error]Invalid_argument");
				Console.WriteLine("filedialog by 酷安@某贼 2024.7.22-1");
				Console.WriteLine("简介:");
				Console.WriteLine("用于选择文件（夹）的命令行工具. 完全免费, 禁止倒卖.");
				Console.WriteLine("使用方法Usage:");
				Console.WriteLine("filedialog.exe -t [file folder]   //类型, 必填, 文件或文件夹");
				Console.WriteLine("               -q [s m]   //数目, 必填, 单选或多选");
				Console.WriteLine("               -o 输出文本文件路径   //必填");
				Console.WriteLine("               -s 起始文件夹路径   //可选, 默认为当前目录");
				Console.WriteLine("               -f [img][bin][*]...   //筛选器, 可选, 仅用于选择文件, 筛选指定扩展名的文件, 默认为选择任何文件, 设置筛选器为仅允许指定类型文件, 筛选器中加入[*]为筛选并同时允许选择任何文件");
				Console.WriteLine("               -i 标题   //可选, 不填将显示默认标题");
				Exit(1);
			}
		}
	}
}
namespace Costura
{
	[CompilerGenerated]
	internal static class AssemblyLoader
	{
		private static object nullCacheLock = new object();

		private static Dictionary<string, bool> nullCache = new Dictionary<string, bool>();

		private static Dictionary<string, string> assemblyNames = new Dictionary<string, string>();

		private static Dictionary<string, string> symbolNames = new Dictionary<string, string>();

		private static int isAttached;

		private static string CultureToString(CultureInfo culture)
		{
			if (culture == null)
			{
				return "";
			}
			return culture.Name;
		}

		private static Assembly ReadExistingAssembly(AssemblyName name)
		{
			AppDomain currentDomain = AppDomain.CurrentDomain;
			Assembly[] assemblies = currentDomain.GetAssemblies();
			Assembly[] array = assemblies;
			foreach (Assembly assembly in array)
			{
				AssemblyName name2 = assembly.GetName();
				if (string.Equals(name2.Name, name.Name, StringComparison.InvariantCultureIgnoreCase) && string.Equals(CultureToString(name2.CultureInfo), CultureToString(name.CultureInfo), StringComparison.InvariantCultureIgnoreCase))
				{
					return assembly;
				}
			}
			return null;
		}

		private static void CopyTo(Stream source, Stream destination)
		{
			byte[] array = new byte[81920];
			int count;
			while ((count = source.Read(array, 0, array.Length)) != 0)
			{
				destination.Write(array, 0, count);
			}
		}

		private static Stream LoadStream(string fullName)
		{
			Assembly executingAssembly = Assembly.GetExecutingAssembly();
			if (fullName.EndsWith(".compressed"))
			{
				using (Stream stream = executingAssembly.GetManifestResourceStream(fullName))
				{
					using DeflateStream source = new DeflateStream(stream, CompressionMode.Decompress);
					MemoryStream memoryStream = new MemoryStream();
					CopyTo(source, memoryStream);
					memoryStream.Position = 0L;
					return memoryStream;
				}
			}
			return executingAssembly.GetManifestResourceStream(fullName);
		}

		private static Stream LoadStream(Dictionary<string, string> resourceNames, string name)
		{
			if (resourceNames.TryGetValue(name, out var value))
			{
				return LoadStream(value);
			}
			return null;
		}

		private static byte[] ReadStream(Stream stream)
		{
			byte[] array = new byte[stream.Length];
			stream.Read(array, 0, array.Length);
			return array;
		}

		private static Assembly ReadFromEmbeddedResources(Dictionary<string, string> assemblyNames, Dictionary<string, string> symbolNames, AssemblyName requestedAssemblyName)
		{
			string text = requestedAssemblyName.Name.ToLowerInvariant();
			if (requestedAssemblyName.CultureInfo != null && !string.IsNullOrEmpty(requestedAssemblyName.CultureInfo.Name))
			{
				text = requestedAssemblyName.CultureInfo.Name + "." + text;
			}
			byte[] rawAssembly;
			using (Stream stream = LoadStream(assemblyNames, text))
			{
				if (stream == null)
				{
					return null;
				}
				rawAssembly = ReadStream(stream);
			}
			using (Stream stream2 = LoadStream(symbolNames, text))
			{
				if (stream2 != null)
				{
					byte[] rawSymbolStore = ReadStream(stream2);
					return Assembly.Load(rawAssembly, rawSymbolStore);
				}
			}
			return Assembly.Load(rawAssembly);
		}

		public static Assembly ResolveAssembly(object sender, ResolveEventArgs e)
		{
			lock (nullCacheLock)
			{
				if (nullCache.ContainsKey(e.Name))
				{
					return null;
				}
			}
			AssemblyName assemblyName = new AssemblyName(e.Name);
			Assembly assembly = ReadExistingAssembly(assemblyName);
			if ((object)assembly != null)
			{
				return assembly;
			}
			assembly = ReadFromEmbeddedResources(assemblyNames, symbolNames, assemblyName);
			if ((object)assembly == null)
			{
				lock (nullCacheLock)
				{
					nullCache[e.Name] = true;
				}
				if ((assemblyName.Flags & AssemblyNameFlags.Retargetable) != 0)
				{
					assembly = Assembly.Load(assemblyName);
				}
			}
			return assembly;
		}

		static AssemblyLoader()
		{
			assemblyNames.Add("costura", "costura.costura.dll.compressed");
			symbolNames.Add("costura", "costura.costura.pdb.compressed");
			assemblyNames.Add("microsoft.windowsapicodepack", "costura.microsoft.windowsapicodepack.dll.compressed");
			assemblyNames.Add("microsoft.windowsapicodepack.shell", "costura.microsoft.windowsapicodepack.shell.dll.compressed");
			assemblyNames.Add("system.diagnostics.diagnosticsource", "costura.system.diagnostics.diagnosticsource.dll.compressed");
		}

		public static void Attach()
		{
			if (Interlocked.Exchange(ref isAttached, 1) != 1)
			{
				AppDomain currentDomain = AppDomain.CurrentDomain;
				currentDomain.AssemblyResolve += ResolveAssembly;
			}
		}
	}
}
internal class filedialog_ProcessedByFody
{
	internal const string FodyVersion = "6.5.5.0";

	internal const string Costura = "5.7.0";
}
