private ["_size","_VanillaHUD","_d"];
_size = getResolution select 5;
if !(_size == 0.47) exitWith {};//currently only works with very small interface size
_VanillaHUD =
{
	if (!(ExileClientPlayerIsInfantry) && !(typeOf vehicle player == "Steerable_Parachute_F")) then
	{
		false call ExileClient_gui_hud_toggle;//Need to hide group members as position is defined in client config and can't easily be moved
		false call ExileClient_gui_toaster_toggle;//Need to hide toasts because when hud is disabled as above, the toasts stay on screen permanently 
		_d = uiNamespace getVariable "RscUnitInfo";
		{
			_pos = ctrlPosition _x;
			if (_pos select 1 == -1) then
			{
				_pos set [1, -0.5];
			};
			if (ctrlClassName _x == "CA_HitZones") then
			{
				_pos set [1, -0.49];
			};
			if (ctrlClassName _x == "CA_Vehicle") then
			{
				_pos set [1, -0.54];
			};
			if (ctrlClassName _x == "CA_BackgroundVehicle") then
			{
				_pos set [1, -0.5];
			};
			if (ctrlClassName _x == "CA_BackgroundVehicleTitleDark") then
			{
				_pos set [1, -0.54];
			};
			if (ctrlClassName _x == "CA_BackgroundVehicleTitle") then
			{
				_pos set [1, -0.54];
			};
			if (ctrlClassName _x == "CA_Speed") then
			{
				_pos set [1, -0.49];
			};
			if (ctrlClassName _x == "CA_SpeedUnits") then
			{
				_pos set [1, -0.49];
			};
			if (ctrlClassName _x == "CA_SpeedBackground") then
			{
				_pos set [1, -0.45];
			};
			if (ctrlClassName _x == "CA_Alt") then
			{
				_pos set [1, -0.45];
			};
			if (ctrlClassName _x == "CA_AltUnits") then
			{
				_pos set [1, -0.45];
			};
			if (ctrlClassName _x == "CA_AltBackground") then
			{
				_pos set [1, -0.45];
			};
			if (ctrlClassName _x == "CA_VehicleToggles") then
			{
				_pos set [1, -0.41];
			};
			if (ctrlClassName _x == "CA_VehicleTogglesBackground") then
			{
				_pos set [1, -0.41];
			};
			if (ctrlClassName _x == "CA_BackgroundFuel") then
			{
				_pos set [1, -0.5];
			};
			if (ctrlClassName _x == "WeaponInfoControlsGroupRight") then
			{
				_pos set [1, -0.54];
			};
			if (ctrlClassName _x == "CA_Zeroing") then
			{
				_pos set [1, -0.54];
			};
			_x ctrlSetPosition _pos;
			_x ctrlSetFade 0;
			_x ctrlShow true;
			_x ctrlCommit 0;
		} foreach allControls _d;
	}
	else
	{
		true call ExileClient_gui_hud_toggle;
		true call ExileClient_gui_toaster_toggle;
	};
};
[1,_VanillaHUD,[],true,false] call ExileClient_system_thread_addTask;