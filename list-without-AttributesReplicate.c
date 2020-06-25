/* game */

Class "DataModel"
	Behavior
		"ForceR15" <bool>
	Data
		"AvatarJointPositionType" <Enum.AvatarJointPositionType>
		"GameAvatarType" <Enum.GameAvatarType>
		"R15CollisionType" <Enum.R15CollisionType>


/* Services */

Service "Workspace"
	Behavior
		"CollisionGroups" <string> 
		"DataModelPlaceVersion"
		"ExpSolverEnabled_Replicate" <bool>
		"ExplicitAutoJoints" <bool>
		"PhysicsSimulationRate" <nil>
		"PhysicsSimulationRateReplicator" <Enum.PhysicsSimulationRate>
		"StreamingMinRadius" <int>
		"StreamingPauseMode" <Enum.StreamingPauseMode>
		"StreamingTargetRadius" <int>
		"TemporaryLegacyPhysicsSolverOverride" <bool>
		"TemporaryLegacyPhysicsSolverOverrideStreaming" <bool>
		"TerrainWeldsFixed" <bool>
	Data
		"ModelInPrimary" <CoordinateFrame>

Service "StudioData"
	Data
		"CommitInflightAuthorId" <int64>
		"CommitInflightGuid" <string>
		"CommitInflightPlaceVersion" <int>

Service "LocalizationService"
	Localization
		"LocaleManifest" <string>
		"ShouldUseCloudTable" <bool>

Service "InsertService"
	Behavior
		"AllowClientInsertModels" <bool>

Service "Lighting"
	Appearance
		"Technology"

/* Service-Specific Instances */

Class "Terrain" Workspace.Terrain
	Appearance
		"Decoration" <bool>
	Behavior
		"DraggingV1" <bool>
		"NetworkOwnershipRule" <Enum.NetworkOwnership>
	Data
		"NetworkIsSleeping" <bool>
		"NetworkOwnerV3" <SystemAddress>

Class "LocalizationTable" Chat.ChatLocalization, CoreGui.CoreScriptLocalization
	Behavior
		"Contents" <string>
	Localization
		"IsExemptFromUGCAnalytics" <bool>

Class "Player" Players.Player
	Data
		"AccountAgeReplicate" <int>
		"CharacterRegionId" <Vector3>
		"ChatPrivacyMode" <Enum.ChatPrivacyMode>
		"CloudEditCameraCoordinateFrame" <CoordinateFrame>
		"CloudEditPlayerActive" <bool>
		"CountryRegionCodeReplicate" <string>
		"FollowUserIdReplicated" <int64>
		"InternalCharacterAppearanceLoaded" <bool>
		"MaxSimulationRadius" <float>
		"SimulationRadius" <float>
		"MembershipTypeReplicate" <Enum.MembershipType>
		"ReplicatedLocaleId" <string>
		"ReplicatedLocaleIdInternal" <string>
		"ChararacterRegionId" <Vector3>
		"SuperSafeChatReplicate" <bool>

Class "CoreScript" ScriptContext.StarterScript
	Data
		"CachedRemoteSource" <string>
		"CachedRemoteSourceLoadState" <int>
		"CurrentEditor" <nil>
		"HasAssociatedDrafts" <bool>
		"IsDifferentFromFileSystem" <bool>
		"ScriptGuid" <string>

/* Character-Specific Instances */

Class "Motor6D" Player.Character[Multiple Descendants]
	Animatable
		"ChildName" <string>
		"ParentName" <string>
	Behavior
		"IsAutoJoint" <bool>

Class "Humanoid" Player.Character.Humanoid
	Control
		"FloorMaterialInternal" <Enum.Material>
		"JumpReplicate" <bool>
		"MoveDirectionInternal" <Vector3>
		"Strafe" <bool>
		"WalkAngleError" <float>
		"WalkDirection" <Vector3>
	Data
		"CameraMaxDistance" <float>
		"CameraMinDistance" <float>
		"CameraMode" <Enum.CameraMode>
		"InternalBodyScale" <Vector3>
		"InternalHeadScale" <float>
		"InternalOriginalHipHeight" <float>
		"NetworkHumanoidState" <Enum.HumanoidStateType>
	Game
		"Health_XML" <float>

Class "HumanoidDescription" Player.Character.Humanoid.HumanoidDescription
	Data
		"EmotesDataInternal" <string>
		"EquippedEmotesDataInternal" <string>

Class "Accessory" Player.Character[Variant Accesory Name]
	Appearance
		"BackendAccoutrementState" <int>

/* Other Instances (Soon) */
