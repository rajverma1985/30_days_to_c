##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=week1
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/Volumes/data/devtech/projects/c_projects
ProjectPath            :=/Volumes/data/devtech/projects/c_projects/30_days_to_c/week1
IntermediateDirectory  :=../../build-$(WorkspaceConfiguration)/30_days_to_c/week1
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Rupal Verma
Date                   :=16/03/2024
CodeLitePath           :=/Users/rupalverma/.codelite
MakeDirCommand         :=mkdir -p
LinkerName             :=/usr/bin/clang++
SharedObjectLinkerName :=/usr/bin/clang++ -dynamiclib -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=/Volumes/data/devtech/projects/c_projects/build-$(WorkspaceConfiguration)/bin
OutputFile             :=../../build-$(WorkspaceConfiguration)/bin/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/clang++
CC       := /usr/bin/clang
CXXFLAGS := -std=c++14 -Wall -gdwarf-2 -fstandalone-debug -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -fstandalone-debug -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/Applications/codelite.app/Contents/SharedSupport/
Objects0=$(IntermediateDirectory)/areaofRectangle.c$(ObjectSuffix) $(IntermediateDirectory)/cmd_line_arguments.c$(ObjectSuffix) $(IntermediateDirectory)/enums.c$(ObjectSuffix) $(IntermediateDirectory)/data_types.c$(ObjectSuffix) $(IntermediateDirectory)/myproject.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(IntermediateDirectory)"
	@$(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/areaofRectangle.c$(ObjectSuffix): areaofRectangle.c $(IntermediateDirectory)/areaofRectangle.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Volumes/data/devtech/projects/c_projects/30_days_to_c/week1/areaofRectangle.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/areaofRectangle.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/areaofRectangle.c$(DependSuffix): areaofRectangle.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/areaofRectangle.c$(ObjectSuffix) -MF$(IntermediateDirectory)/areaofRectangle.c$(DependSuffix) -MM areaofRectangle.c

$(IntermediateDirectory)/areaofRectangle.c$(PreprocessSuffix): areaofRectangle.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/areaofRectangle.c$(PreprocessSuffix) areaofRectangle.c

$(IntermediateDirectory)/cmd_line_arguments.c$(ObjectSuffix): cmd_line_arguments.c $(IntermediateDirectory)/cmd_line_arguments.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Volumes/data/devtech/projects/c_projects/30_days_to_c/week1/cmd_line_arguments.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/cmd_line_arguments.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/cmd_line_arguments.c$(DependSuffix): cmd_line_arguments.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/cmd_line_arguments.c$(ObjectSuffix) -MF$(IntermediateDirectory)/cmd_line_arguments.c$(DependSuffix) -MM cmd_line_arguments.c

$(IntermediateDirectory)/cmd_line_arguments.c$(PreprocessSuffix): cmd_line_arguments.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/cmd_line_arguments.c$(PreprocessSuffix) cmd_line_arguments.c

$(IntermediateDirectory)/enums.c$(ObjectSuffix): enums.c $(IntermediateDirectory)/enums.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Volumes/data/devtech/projects/c_projects/30_days_to_c/week1/enums.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/enums.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/enums.c$(DependSuffix): enums.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/enums.c$(ObjectSuffix) -MF$(IntermediateDirectory)/enums.c$(DependSuffix) -MM enums.c

$(IntermediateDirectory)/enums.c$(PreprocessSuffix): enums.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/enums.c$(PreprocessSuffix) enums.c

$(IntermediateDirectory)/data_types.c$(ObjectSuffix): data_types.c $(IntermediateDirectory)/data_types.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Volumes/data/devtech/projects/c_projects/30_days_to_c/week1/data_types.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/data_types.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/data_types.c$(DependSuffix): data_types.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/data_types.c$(ObjectSuffix) -MF$(IntermediateDirectory)/data_types.c$(DependSuffix) -MM data_types.c

$(IntermediateDirectory)/data_types.c$(PreprocessSuffix): data_types.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/data_types.c$(PreprocessSuffix) data_types.c

$(IntermediateDirectory)/myproject.c$(ObjectSuffix): myproject.c $(IntermediateDirectory)/myproject.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/Volumes/data/devtech/projects/c_projects/30_days_to_c/week1/myproject.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/myproject.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/myproject.c$(DependSuffix): myproject.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/myproject.c$(ObjectSuffix) -MF$(IntermediateDirectory)/myproject.c$(DependSuffix) -MM myproject.c

$(IntermediateDirectory)/myproject.c$(PreprocessSuffix): myproject.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/myproject.c$(PreprocessSuffix) myproject.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


