class ACE_Settings {
    class GVAR(enabled) {
        displayName = "Advanced Ballistics";
        description = "Enables advanced ballistics";
        typeName = "BOOL";
        defaultValue = 1;
    };
    class GVAR(alwaysSimulateForSnipers) {
        displayName = "Always Enabled For Snipers";
        description = "Always enables advanced ballistics when high power optics are used";
        typeName = "BOOL";
        defaultValue = 1;
    };
    class GVAR(disabledInFullAutoMode) {
        displayName = "Disabled In FullAuto Mode";
        description = "Disables the advanced ballistics during full auto fire";
        typeName = "BOOL";
        defaultValue = 0;
    };
    class GVAR(onlyActiveForLocalPlayers) {
        displayName = "Disabled For Non Local Players";
        description = "Disables the advanced ballistics for bullets coming from other players (enable this if you encounter frame drops during heavy firefights in multiplayer)";
        typeName = "BOOL";
        defaultValue = 1;
    };
    /* // TODO: We currently do not have firedEHs on vehicles
    class GVAR(vehicleGunnerEnabled) {
        displayName = "Enabled For Vehicle Gunners";
        description = "Enables advanced ballistics for vehicle gunners";
        typeName = "BOOL";
        defaultValue = 0;
    };
    */
    class GVAR(ammoTemperatureEnabled) {
        displayName = "Enable Ammo Temperature Simulation";
        description = "Muzzle velocity varies with ammo temperature";
        typeName = "BOOL";
        defaultValue = 1;
    };
    class GVAR(barrelLengthInfluenceEnabled) {
        displayName = "Enable Barrel Length Simulation";
        description = "Muzzle velocity varies with barrel length";
        typeName = "BOOL";
        defaultValue = 1;
    };
    class GVAR(bulletTraceEnabled) {
        displayName = "Enable Bullet Trace Effect";
        description = "Enables a bullet trace effect to high caliber bullets (only visible when looking through high power optics)";
        typeName = "BOOL";
        defaultValue = 1;
    };
    class GVAR(simulationRadius) {
        displayName = "Simulation Radius";
        description = "Defines the radius (in meters) in which advanced ballistics are applied";
        typeName = "NUMBER";
        defaultValue = 3000;
    };
};
