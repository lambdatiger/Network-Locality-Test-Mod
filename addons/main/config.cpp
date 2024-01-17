#include "script_component.hpp"
#define ADD_EH_BASE class EventHandlers {\
    class ADDON {\
        init = QUOTE(_this call FUNC(printLocal););\
    };\
}

class CfgPatches
{
  class TEST_main
  {
    name = "Test modset";
  	units[] = {};
  	weapons[] = {};
  	requiredVersion = 2.14;
  	requiredAddons[] = {};
    author = "Lambda.Tiger";
  };
};

#include "cfgEventHandlers.hpp"
#include "cfgAmmo.hpp"
