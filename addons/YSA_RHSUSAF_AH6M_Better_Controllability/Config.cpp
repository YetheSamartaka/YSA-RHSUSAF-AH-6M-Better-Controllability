class CfgPatches {
	class YSA_RHSUSAF_AH6M_Better_Controllability {
		name="YSA RHSUSAF AH-6M Better Controllability";
		author="YetheSamartaka & AdamAb44";
		units[]= {
			"RHS_MELB_base",
			"RHS_MELB_H6M",
			"RHS_MELB_AH6M",
			"RHS_MELB_AH6M_L",
			"RHS_MELB_AH6M_M",
			"RHS_MELB_AH6M_H",
			"RHS_MELB_MH6M"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"rhsusf_c_melb"};
		magazines[]={};
	};
};
class CfgVehicles {
	class Helicopter_Base_H;
	class RHS_MELB_base: Helicopter_Base_H {
		maxSpeed=250;
		liftForceCoef=1.7;
		cyclicAsideForceCoef=2;
		cyclicForwardForceCoef=0.43;
		bodyFrictionCoef=0.2;
	};
	class RHS_MELB_H6M: RHS_MELB_base{};
	class RHS_MELB_AH6M: RHS_MELB_base{};
	class RHS_MELB_AH6M_L: RHS_MELB_base{};
	class RHS_MELB_AH6M_M: RHS_MELB_base{};
	class RHS_MELB_AH6M_H: RHS_MELB_base{};
	class RHS_MELB_MH6M: RHS_MELB_base{};
};