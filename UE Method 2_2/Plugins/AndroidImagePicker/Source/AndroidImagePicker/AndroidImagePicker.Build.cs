using UnrealBuildTool;
using System.IO;

public class AndroidImagePicker : ModuleRules
{
    public AndroidImagePicker(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicIncludePaths.AddRange(new string[] {
            "AndroidImagePicker/Public"
        });

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "Projects", "RenderCore"
        });

        if (Target.Platform == UnrealTargetPlatform.Android)
        {
        PrivateDependencyModuleNames.Add("Launch");
    
        string PluginPath = Utils.MakePathRelativeTo(ModuleDirectory, Target.RelativeEnginePath);
        AdditionalPropertiesForReceipt.Add("AndroidPlugin", System.IO.Path.Combine(PluginPath, "Android", "AndroidImagePicker_UPL.xml"));
        }

    }
}
