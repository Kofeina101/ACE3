#include "script_component.hpp"
/*
 * Author: KoffeinFlummi
 * Checks if a unit is in a medical vehicle.
 *
 * Arguments:
 * 0: unit to be checked <OBJECT>
 *
 * Return Value:
 * Is unit in medical vehicle? <BOOL>
 *
 * Example:
 * [player] call ace_medical_treatment_fnc_isInMedicalVehicle
 *
 * Public: No
 */

params ["_unit"];

private _vehicle = vehicle _unit;

if (_unit == _vehicle) exitWith {false};
if (_unit in [driver _vehicle, gunner _vehicle, commander _vehicle]) exitWith {false};

[_vehicle] call FUNC(isMedicalVehicle);
