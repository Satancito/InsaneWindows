Write-Host "███ Debug - Build"
msbuild InsaneWindows.sln /t:Insane:Rebuild /p:Platform=x64 /p:Configuration=Debug /p:BuildProjectReferences=true /m
msbuild InsaneWindows.sln /t:Insane_Console_Import:Rebuild /p:Platform=x64 /p:Configuration=Debug /p:BuildProjectReferences=true /m
msbuild InsaneWindows.sln /t:Insane_Console_Play:Rebuild /p:Platform=x64 /p:Configuration=Debug /p:BuildProjectReferences=true /m
Write-Host "███ Release - Build"
msbuild InsaneWindows.sln /t:Insane:Rebuild /p:Platform=x64 /p:Configuration=Release /p:BuildProjectReferences=true /m
msbuild InsaneWindows.sln /t:Insane_Console_Import:Rebuild /p:Platform=x64 /p:Configuration=Release /p:BuildProjectReferences=true /m
msbuild InsaneWindows.sln /t:Insane_Console_Play:Rebuild /p:Platform=x64 /p:Configuration=Release /p:BuildProjectReferences=true /m
