function Build-AllProjects {
    param (
        [Parameter()]
        [ValidateSet("Debug", "Release")]
        [string]
        $Configuration,
        
        [Parameter()]
        [ValidateSet("x64")]
        [string]
        $Platform
        )
        msbuild InsaneWindows.sln /t:Insane:Rebuild /p:Platform=$Platform /p:Configuration=$Configuration /p:BuildProjectReferences=true /m
        msbuild InsaneWindows.sln /t:Insane_Console_Import:Rebuild /p:Platform=$Platform /p:Configuration=$Configuration /p:BuildProjectReferences=true /m
        msbuild InsaneWindows.sln /t:Insane_Console_Play:Rebuild /p:Platform=$Platform /p:Configuration=$Configuration /p:BuildProjectReferences=true /m
    }
$ErrorActionPreference = 'Stop'
Build-AllProjects -Configuration Debug -Platform x64
Build-AllProjects -Configuration Release -Platform x64
