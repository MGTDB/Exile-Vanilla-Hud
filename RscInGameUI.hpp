class RscListBox;
class RscControlsGroupNoScrollbars;
class RscMapControl;
class RscButton;
class RscStandardDisplay;
class RscVignette;
class RscText;
class RscControlsGroup;
class RscPicture;
class RscProgress;
class RscHitZones;
class RscVehicleToggles;
class RscIGUIText;
class RscIGUIValue;
class RscOpticsText;
class RscOpticsValue;
class RscPictureKeepAspect;
class RscInGameUI
{
	class RscUnitInfo
	{
		onLoad = "uiNamespace setVariable ['RscUnitInfo', _this select 0];";
		class WeaponInfoControlsGroupLeft: RscControlsGroup
		{
			show = 1;
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class WeaponInfoControlsGroupRight: RscControlsGroup
		{
			show = 1;
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_BackgroundVehicle: RscPicture
		{
			show = 1;
			y = "1.2 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_BackgroundVehicleTitle: RscText
		{
			show = 1;
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_BackgroundVehicleTitleDark: RscText
		{
			show = 1;
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_BackgroundFuel: RscPicture
		{
			show = 1;
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Vehicle: RscText
		{
			show = 1;
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_VehicleRole: RscPicture
		{
			show = 1;
			y = "0 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_ValueFuel: RscProgress
		{
			show = 1;
			y = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_SpeedBackground: RscText
		{
			show = 1;
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Speed: RscText
		{
			show = 1;
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_SpeedUnits: RscText
		{
			show = 1;
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_AltBackground: RscText
		{
			show = 1;
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Alt: RscText
		{
			show = 1;
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_AltUnits: RscText
		{
			show = 1;
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Depth: RscText
		{
			show = 1;
			y = "2.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_HitZones: RscHitZones
		{
			show = 1;
			y = "1.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_VehicleTogglesBackground: RscText
		{
			show = 1;
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 1;
			y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Zeroing: RscText
		{
			show = 1;
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_TextFlaresMode: RscIGUIText
		{
			show = 1;
			y = "0.012 + SafeZoneY";
		};
		class CA_TextFlares: RscIGUIValue
		{
			show = 1;
			y = "0.012 + SafeZoneY";
		};
		class CA_Throttle: RscText
		{
			show = 1;
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscStanceInfo
	{
		show = 1;
		class StanceIndicatorBackground: RscPicture
		{
			show = 1;
			y = "(profilenamespace getvariable [""IGUI_GRID_STANCE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class StanceIndicator: RscPictureKeepAspect
		{
			show = 1;
			y = "(profilenamespace getvariable [""IGUI_GRID_STANCE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscWeaponZeroing: RscUnitInfo
	{
		class CA_Zeroing: RscText
		{
			show = 1;
			y = "2.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_WEAPON_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscWeaponRangeZeroing: RscUnitInfo
	{
		class CA_DistanceText: RscOpticsText
		{
			show = 1;
			y = "(SafezoneY+SafezoneH) - 0.05";
		};
		class CA_Distance: RscOpticsValue
		{
			show = 1;
			y = "(SafezoneY+SafezoneH) - 0.195";
		};
	};
	class RscUnitInfoAirNoWeapon: RscUnitInfo
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 1;
			y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Throttle: RscText
		{
			show = 1;
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscUnitInfoAir: RscUnitInfoAirNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 1;
			y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Throttle: RscText
		{
			show = 1;
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscUnitInfoAirPlaneNoWeapon: RscUnitInfoAirNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 1;
			y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Throttle: RscText
		{
			show = 1;
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};
	class RscUnitInfoAirPlane: RscUnitInfoAirPlaneNoWeapon
	{
		class CA_VehicleToggles: RscVehicleToggles
		{
			show = 1;
			y = "3.4 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
		class CA_Throttle: RscText
		{
			show = 1;
			y = "3.3 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(profilenamespace getvariable [""IGUI_GRID_VEHICLE_Y"",		(safezoneY + 0.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
		};
	};

	class RscOptics_nightstalker: RscUnitInfo
	{
		class CA_IGUI_elements_group: RscControlsGroup
		{
			class controls
			{
				class CA_Bracket: RscText
				{
					idc=181;
					style="0x30 + 0x800";
					sizeEx="0.035*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					text="";
					// text="A3\weapons_f\acc\Data\reticle_nightstalker_bracket_ca.paa";
					x="16.5 * 		(0.01875 * SafezoneH)";
					y="9.75 * 		(0.025 * SafezoneH)";
					w="20.5 * 		(0.01875 * SafezoneH)";
					h="20.5 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
};