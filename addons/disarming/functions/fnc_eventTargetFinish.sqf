/*
 * Author: PabstMirror
 * TODO
 *
 * Arguments:
 * 0: caller <OBJECT>
 * 1: target <OBJECT>
 * 2: errorMsg <STRING>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * eventTargetFinish
 *
 * Public: No
 */
#include "script_component.hpp"

PARAMS_3(_caller,_target,_errorMsg);


if (_errorMsg != "") then {
    systemChat _errorMsg;
    ["DisarmDebugCallback", [_caller], [_caller, _target, _errorMsg]] call EFUNC(common,targetEvent);
};
