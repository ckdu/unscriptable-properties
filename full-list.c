/* game */

Class "DataModel"
	Behavior
		"ForceR15" <bool>
	Data
		"AttributesReplicate" <string>
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
		"SkinnedMeshEnabled" <Enum.SkinnedMeshAllowType>
		"StreamingMinRadius" <int>
		"StreamingPauseMode" <Enum.StreamingPauseMode>
		"StreamingTargetRadius" <int>
		"TemporaryLegacyPhysicsSolverOverride" <bool>
		"TemporaryLegacyPhysicsSolverOverrideStreaming" <bool>
		"TerrainWeldsFixed" <bool>
	Data
		"AttributesReplicate" <string>
		"ModelInPrimary" <CoordinateFrame>

Service "RunService"
	Data
		"AttributesReplicate" <string>

Service "GuiService"
	Data
		"AttributesReplicate" <string>

Service "Stats"
	Data
		"AttributesReplicate" <string>

Service "SoundService"
	Data
		"AttributesReplicate" <string>

Service "NonReplicatedCSGDictionaryService"
	Data
		"AttributesReplicate" <string>

Service "CSGDictionaryService"
	Data
		"AttributesReplicate" <string>

Service "LogService"
	Data
		"AttributesReplicate" <string>

Service "ContentProvider"
	Data
		"AttributesReplicate" <string>

Service "KeyframeSequenceProvider"
	Data
		"AttributesReplicate" <string>

Service "Chat"
	Data
		"AttributesReplicate" <string>

Service "MarketplaceService"
	Data
		"AttributesReplicate" <string>

Service "Players"
	Data
		"AttributesReplicate" <string>

Service "PointsService"
	Data
		"AttributesReplicate" <string>

Service "AdService"
	Data
		"AttributesReplicate" <string>

Service "NotificationService"
	Data
		"AttributesReplicate" <string>

Service "HttpRbxApiService"
	Data
		"AttributesReplicate" <string>

Service "TweenService"
	Data
		"AttributesReplicate" <string>

Service "TextService"
	Data
		"AttributesReplicate" <string>

Service "StudioData"
	Data
		"AttributesReplicate" <string>
		"CommitInflightAuthorId" <int64>
		"CommitInflightGuid" <string>
		"CommitInflightPlaceVersion" <int>

Service "StarterPlayer"
	Data
		"AttributesReplicate" <string>

Service "StarterPack"
	Data
		"AttributesReplicate" <string>

Service "StarterGui"
	Data
		"AttributesReplicate" <string>

Service "CoreGui"
	Data
		"AttributesReplicate" <string>

Service "LocalizationService"
	Data
		"AttributesReplicate" <string>
	Localization
		"LocaleManifest" <string>
		"ShouldUseCloudTable" <bool>

Service "TeleportService"
	Data
		"AttributesReplicate" <string>
		"CustomizedTeleportUI" <bool>

Service "JointsService"
	Data
		"AttributesReplicate" <string>

Service "CollectionService"
	Data
		"AttributesReplicate" <string>

Service "PhysicsService"
	Data
		"AttributesReplicate" <string>

Service "BadgeService"
	Data
		"AttributesReplicate" <string>

Service "Geometry"
	Data
		"AttributesReplicate" <string>

Service "FriendService"
	Data
		"AttributesReplicate" <string>

Service "InsertService"
	Behavior
		"AllowClientInsertModels" <bool>
	Data
		"AttributesReplicate" <string>

Service "GamepassService"
	Data
		"AttributesReplicate" <string>

Service "TimerService"
	Data
		"AttributesReplicate" <string>

Service "CookiesService"
	Data
		"AttributesReplicate" <string>

Service "TimerService"
	Data
		"AttributesReplicate" <string>

Service "UserInputService"
	Data
		"AttributesReplicate" <string>

Service "UserInputService"
	Data
		"AttributesReplicate" <string>

Service "KeyboardService"
	Data
		"AttributesReplicate" <string>

Service "VRService"
	Data
		"AttributesReplicate" <string>

Service "ContextActionService"
	Data
		"AttributesReplicate" <string>

Service "ScriptService"
	Data
		"AttributesReplicate" <string>

Service "AssetService"
	Data
		"AttributesReplicate" <string>

Service "TouchInputService"
	Data
		"AttributesReplicate" <string>

Service "BrowserService"
	Data
		"AttributesReplicate" <string>

Service "AppStorageService"
	Data
		"AttributesReplicate" <string>

Service "Selection"
	Data
		"AttributesReplicate" <string>

Service "MeshContentProvider"
	Data
		"AttributesReplicate" <string>

Service "Lighting"
	Appearance
		"Technology"
	Data
		"AttributesReplicate" <string>

Service "SolidModelContentProvider"
	Data
		"AttributesReplicate" <string>

Service "GamepadService"
	Data
		"AttributesReplicate" <string>

Service "ControllerService"
	Data
		"AttributesReplicate" <string>

Service "CorePackages"
	Data
		"AttributesReplicate" <string>

Service "RuntimeScriptService"
	Data
		"AttributesReplicate" <string>

Service "ABTestService"
	Data
		"AttributesReplicate" <string>

Service "HapticService"
	Data
		"AttributesReplicate" <string>

Service "RbxAnalyticsService"
	Data
		"AttributesReplicate" <string>

Service "HttpService"
	Data
		"AttributesReplicate" <string>

Service "NetworkClient"
	Data
		"AttributesReplicate" <string>

Service "ChangeHistoryService"
	Data
		"AttributesReplicate" <string>

Service "GuidRegistryService"
	Data
		"AttributesReplicate" <string>

Service "ReplicatedStorage"
	Data
		"AttributesReplicate" <string>

Service "RobloxReplicatedStorage"
	Data
		"AttributesReplicate" <string>

Service "TestService"
	Data
		"AttributesReplicate" <string>

Service "SocialService"
	Data
		"AttributesReplicate" <string>

Service "PolicyService"
	Data
		"AttributesReplicate" <string>

Service "GroupService"
	Data
		"AttributesReplicate" <string>

Service "SpawnerService"
	Data
		"AttributesReplicate" <string>

Service "PathfindingService"
	Data
		"AttributesReplicate" <string>


/* Service-Specific Instances */

Class "Camera" Workspace.CurrentCamera
	Data
		"AttributesReplicate" <string>

Class "Terrain" Workspace.Terrain
	Appearance
		"Decoration" <bool>
	Behavior
		"DraggingV1" <bool>
		"NetworkOwnershipRule" <Enum.NetworkOwnership>
	Data
		"AttributesReplicate" <string>
		"NetworkIsSleeping" <bool>
		"NetworkOwnerV3" <SystemAddress>

For "Any Descendant" In Service "Stats"
	Class "AnyDescendant"
		Data
			"AttributesReplicate" <string>

Class "LocalizationTable" Chat.ChatLocalization, CoreGui.CoreScriptLocalization
	Behavior
		"Contents" <string>
	Data
		"AttributesReplicate" <string>
	Localization
		"IsExemptFromUGCAnalytics" <bool>

Class "Player" Players.Player
	Data
		"AccountAgeReplicate" <int>
		"AttributesReplicate" <string>
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

Class "PlayerScripts" Player.PlayerScripts
	Data
		"AttributesReplicate" <string>

Class "PlayerGui" Player.PlayerGui
	Data
		"AttributesReplicate" <string>

Class "StarterGear" Player.StarterGear
	Data
		"AttributesReplicate" <string>

Class "Backpack" Player.Backpack
	Data
		"AttributesReplicate" <string>

Class "StarterPlayerScripts" StarterPlayer.StarterPlayerScripts
	Data
		"AttributesReplicate" <string>

Class "StarterCharacterScripts" StarterPlayer.StarterCharacterScripts
	Data
		"AttributesReplicate" <string>

Class "CoreScript" ScriptContext.StarterScript
	Data
		"AttributesReplicate" <string>
		"CachedRemoteSource" <string>
		"CachedRemoteSourceLoadState" <int>
		"CurrentEditor" <nil>
		"HasAssociatedDrafts" <bool>
		"IsDifferentFromFileSystem" <bool>
		"ScriptGuid" <string>

Class "HumanoidController" ControllerService.HumanoidController
	Data
		"AttributesReplicate" <string>

Class "ClientReplicator" NetworkClient.ClientReplicator
	Data
		"AttributesReplicate" <string>


/* Character-Specific Instances */

Class "Motor6D" Player.Character[Multiple Descendants]
	Animatable
		"ChildName" <string>
		"ParentName" <string>
	Behavior
		"IsAutoJoint" <bool>
	Data
		"AttributesReplicate" <string>

Class "Humanoid" Player.Character.Humanoid
	Control
		"FloorMaterialInternal" <Enum.Material>
		"JumpReplicate" <bool>
		"MoveDirectionInternal" <Vector3>
		"Strafe" <bool>
		"WalkAngleError" <float>
		"WalkDirection" <Vector3>
	Data
		"AttributesReplicate" <string>
		"CameraMaxDistance" <float>
		"CameraMinDistance" <float>
		"CameraMode" <Enum.CameraMode>
		"InternalBodyScale" <Vector3>
		"InternalHeadScale" <float>
		"InternalOriginalHipHeight" <float>
		"NetworkHumanoidState" <Enum.HumanoidStateType>
	Game
		"Health_XML" <float>

Class "Animator" Player.Character.Humanoid.Animator
	Data
		"AttributesReplicate" <string>

Class "HumanoidDescription" Player.Character.Humanoid.HumanoidDescription
	Data
		"AttributesReplicate" <string>
		"EmotesDataInternal" <string>
		"EquippedEmotesDataInternal" <string>

Class "BodyColors" Player.Character["Body Colors"]
	Data
		"AttributesReplicate" <string>

Class "Accessory" Player.Character[Variant Accesory Name]
	Appearance
		"BackendAccoutrementState" <int>
	Data
		"AttributesReplicate" <string>

/* Other Instances (Soon) */
