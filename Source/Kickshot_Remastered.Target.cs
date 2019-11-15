// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Kickshot_RemasteredTarget : TargetRules
{
	public Kickshot_RemasteredTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Kickshot_Remastered" } );
	}
}
