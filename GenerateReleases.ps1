
function Copy-Files {
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
        $folder = "Releases"
        xcopy "$($PSScriptRoot)\$Platform\$Configuration\*.dll" "$($PSScriptRoot)\$folder\$Platform\$Configuration\bin\" /Y
        xcopy "$($PSScriptRoot)\$Platform\$Configuration\Insane.pdb" "$($PSScriptRoot)\$folder\$Platform\$Configuration\bin\" /Y
        xcopy "$($PSScriptRoot)\$Platform\$Configuration\Insane.exp" "$($PSScriptRoot)\$folder\$Platform\$Configuration\bin\" /Y
        xcopy "$($PSScriptRoot)\$Platform\$Configuration\Insane.lib" "$($PSScriptRoot)\$folder\$Platform\$Configuration\lib\" /Y
        xcopy "$($PSScriptRoot)\modules\InsaneCpp\Include\Insane\Insane*.h" "$($PSScriptRoot)\$folder\$Platform\$Configuration\Include\Insane\" /Y
    }
$ErrorActionPreference = 'Stop' 
& "$PSScriptRoot/RebuildAll.ps1"
Copy-Files -Configuration Debug -Platform x64
Copy-Files -Configuration Release -Platform x64
