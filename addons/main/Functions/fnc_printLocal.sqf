#include "../script_component.hpp"
params ["_proj"];

if (local _proj) then {
    if (isServer) then {
        format ["%1 is local Server", getObjectID _proj] remoteExec ["systemChat", 0];
    } else {
        format ["%1 is local %2", getObjectID _proj, player] remoteExec ["systemChat", 0];
    };
    _proj addEventHandler [
        "HitPart",
        {
            params ["_proj"];
            if (isServer) then {
                format ["%1 hit object on Server", getObjectID _proj] remoteExec ["systemChat", 0];
            } else {
                format ["%1 hit object on %2", getObjectID _proj, player] remoteExec ["systemChat", 0];
            };
        }
    ];
    _proj addEventHandler [
        "Explode",
        {
            params ["_proj"];
            if (isServer) then {
                format ["%1 exploded on Server", getObjectID _proj] remoteExec ["systemChat", 0];
            } else {
                format ["%1 exploded on %2", getObjectID _proj, player] remoteExec ["systemChat", 0];
            };
        }
    ];
};
