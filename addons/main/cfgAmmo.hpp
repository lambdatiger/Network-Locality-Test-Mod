class cfgAmmo {
    class BulletCore;
    class BulletBase: BulletCore {
        ADD_EH_BASE;
    };

    class GrenadeCore;
    class GrenadeBase: GrenadeCore {
        ADD_EH_BASE;
    };

    class LaserBombCore;
    class ammo_Bomb_LaserGuidedBase: LaserBombCore {
        ADD_EH_BASE;
    };

    class MissileCore;
    class MissileBase: MissileCore {
        ADD_EH_BASE;
    };

    class RocketCore;
    class RocketBase: RocketCore {
        ADD_EH_BASE;
        GVAR(skip) = 1;
    };

    class ArtilleryRocketCore: RocketCore {
        ADD_EH_BASE;
    };

    class ShellCore;
    class ShellBase: ShellCore {
        ADD_EH_BASE;
    };

    class ShotDeployCore;
    class ShotDeployBase: ShotDeployCore {
        GVAR(skip) = 1;
    };

    class ShotgunCore;
    class ShotgunBase: ShotgunCore {
        ADD_EH_BASE;
    };

    class SubmunitionCore;
    class SubmunitionBase: SubmunitionCore {
        ADD_EH_BASE;
    };

    class BoundingMineCore;
    class BoundingMineBase: BoundingMineCore {
        ADD_EH_BASE;
    };

    class PipeBombCore;
    class PipeBombBase: PipeBombCore {
        ADD_EH_BASE;
    };

    class DirectionalBombCore;
    class DirectionalBombBase: DirectionalBombCore {
        ADD_EH_BASE;
    };

    class MineCore;
    class MineBase: MineCore {
        ADD_EH_BASE;
    };

    class BombCore;
    class Bo_Mk82: BombCore {
        ADD_EH_BASE;
    };
    class Grenade;
    class GrenadeHand: Grenade {
        ADD_EH_BASE;
    };
};