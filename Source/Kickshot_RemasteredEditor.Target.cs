// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Kickshot_RemasteredEditorTarget : TargetRules
{
	public Kickshot_RemasteredEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Kickshot_Remastered" } );
	}
}
