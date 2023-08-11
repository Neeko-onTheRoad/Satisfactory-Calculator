//goto include

#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

//goto define

#define S(name) #name

//goto typedef

using std::wcin;
using std::wcout;
using std::endl;

using std::map;
using std::string;
using std::wstring;
using std::vector;
using std::make_unique;

typedef unsigned __int16              un16;
typedef unsigned int                  unInt;
typedef unsigned short                unShort;
typedef long double                   lDouble;

//goto function def

lDouble perMin2sec            (lDouble perMin);
lDouble getPowerUseByOverclock(lDouble normalPowerUse, lDouble overclock);

//goto enum

enum class ioType {
	null    = 0,
	beltIn  = 1,
	beltOut = 2,
	pipeIn  = 3,
	pipeOut = 4
};

enum class mods {
	null         = 0,
	satisfactory = 1
};

enum mapItem {
		limestone,
		ironOre,
		copperOre,
		cateriumOre,
		coal,
		rawQuartz,
		sulfur,
		bauxite,
		SAMOre,
		uranium,

		ironIngot,
		copperIngot,
		cateriumIngot,
		steelIngot,
		aluminumIngot,

		concrete,
		quartzCrystal,
		silica,
		copperPowder,
		polymerResin,
		petroleumCoke,
		aluminumScrap,

		alienProtein,
		alienDNACapsule,

		water,
		crudeOil,
		heavyOilResidue,
		fuel,
		liquidBiofuel,
		turbofuel,
		aluminaSolution,
		sulfuricAcid,
		nitricAcid,
		nitrogenGas,

		ironRod,
		screw,
		ironPlate,
		reinforcedIronPlate,
		copperSheet,
		alcladAluminumSheet,
		aluminumCasing,
		steelPipe,
		steelBeam,
		encasedIndustrialBeam,
		modularFrame,
		heavyModularFrame,
		fusedModularFrame,
		fabric,
		plastic,
		rubber,

		rotor,
		stator,
		battery,
		motor,
		heatSink,
		coolingSystem,
		turboMotor,

		wire,
		cable,
		quickwire,
		circuitBoard,
		AILimitor,
		hightSpeedConnector,

		computer,
		supercomputer,
		quantumComputer,
		radioControlUnit,
		crystalOscillator,
		superpositionOscillator,

		emptyCanister,
		emptyFluidTank,
		pressureConversionCube,
		packagedWater,
		packagedAluminaSolution,
		packagedSulfuricAcid,
		packagedNitricAcid,
		packagedNitrogenGas,

		leaves,
		mycelia,
		flowerPetals,
		wood,
		biomass,
		compactedCoal,
		packagedOil,
		packagedHeavyOilResidue,
		solidBiofuel,
		packagedFuel,
		packagedLiquidBiofuel,
		packagedTurbofuel,
		uraniumFuelRod,
		plutoniumFuelRod,

		blackPowder,
		smokelessPower,
		gasFilter,
		colorCartridge,
		beacon,
		iodineInfusedFilter,

		ironRebar,
		stunRebar,
		shatterReber,
		explosiveRebar,
		rifleAmmo,
		homingRifleAmmo,
		turboRifleAmmo,
		nobelisk,
		gasNobelisk,
		pulseNobelisk,
		clusterNobelisk,
		nukeNobelisk,

		electromagneticControlRod,
		encasedUraniumCell,
		nonFissileUranium,
		plutoniumPellet,
		encasedPlutoniumCell,

		uraniumWaste,
		plutoniumWaste,

		bluePowerSlug,
		yellowPowerSlug,
		purplePowerSlug,
		powerShard,
		FICSITCoupon,
		smartPlating,
		versatileFramework,
		automatedWiring,
		modularEngine,
		adaptiveControlUnit,
		assemblyDirectorSystem,
		magneticFieldGenerator,
		thermalPropulsionRocket,
		nuclearPasta,

		portableMiner
};

enum mapRecipe {
	limestone_1_low_r,
	limestone_1_mid_r,
	limestone_1_hig_r,
	ironOre_1_low_r,
	ironOre_1_mid_r,
	ironOre_1_hig_r,
	copperOre_1_low_r,
	copperOre_1_mid_r,
	copperOre_1_hig_r,
	cateriumOre_1_low_r,
	cateriumOre_1_mid_r,
	cateriumOre_1_hig_r,
	coal_1_low_r,
	coal_1_mid_r,
	coal_1_hig_r,
	rawQuartz_1_low_r,
	rawQuartz_1_mid_r,
	rawQuartz_1_hig_r,
	sulfur_1_low_r,
	sulfur_1_mid_r,
	sulfur_1_hig_r,
	bauxite_1_low_r,
	bauxite_1_mid_r,
	bauxite_1_hig_r,
	SAMOre_1_low_r,
	SAMOre_1_mid_r,
	SAMOre_1_hig_r,
	uranium_1_low_r,
	uranium_1_mid_r,
	uranium_1_hig_r,
	limestone_2_low_r,
	limestone_2_mid_r,
	limestone_2_hig_r,
	ironOre_2_low_r,
	ironOre_2_mid_r,
	ironOre_2_hig_r,
	copperOre_2_low_r,
	copperOre_2_mid_r,
	copperOre_2_hig_r,
	cateriumOre_2_low_r,
	cateriumOre_2_mid_r,
	cateriumOre_2_hig_r,
	coal_2_low_r,
	coal_2_mid_r,
	coal_2_hig_r,
	rawQuartz_2_low_r,
	rawQuartz_2_mid_r,
	rawQuartz_2_hig_r,
	sulfur_2_low_r,
	sulfur_2_mid_r,
	sulfur_2_hig_r,
	bauxite_2_low_r,
	bauxite_2_mid_r,
	bauxite_2_hig_r,
	SAMOre_2_low_r,
	SAMOre_2_mid_r,
	SAMOre_2_hig_r,
	uranium_2_low_r,
	uranium_2_mid_r,
	uranium_2_hig_r,
	limestone_3_low_r,
	limestone_3_mid_r,
	limestone_3_hig_r,
	ironOre_3_low_r,
	ironOre_3_mid_r,
	ironOre_3_hig_r,
	copperOre_3_low_r,
	copperOre_3_mid_r,
	copperOre_3_hig_r,
	cateriumOre_3_low_r,
	cateriumOre_3_mid_r,
	cateriumOre_3_hig_r,
	coal_3_low_r,
	coal_3_mid_r,
	coal_3_hig_r,
	rawQuartz_3_low_r,
	rawQuartz_3_mid_r,
	rawQuartz_3_hig_r,
	sulfur_3_low_r,
	sulfur_3_mid_r,
	sulfur_3_hig_r,
	bauxite_3_low_r,
	bauxite_3_mid_r,
	bauxite_3_hig_r,
	SAMOre_3_low_r,
	SAMOre_3_mid_r,
	SAMOre_3_hig_r,
	uranium_3_low_r,
	uranium_3_mid_r,
	uranium_3_hig_r,

	ironIngot_r,
	copperIngot_r,
	cateriumIngot_r,
	steelIngot_r,
	aluminumIngot_r,

	concrete_r,
	quartzCrystal_r,
	silica_r,
	copperPower_r,
	petroleumCoke_r,
	aluminumScrap_r,

	alienProtein_hatcher_r,
	alienProtein_hog_r,
	alienProtein_spitter_r,
	alienProtein_stinger_r,
	alienDNACapsule_r,

	water_ext_r,
	water_well_low_r,
	water_well_mid_r,
	water_well_hig_r,
	crudeOil_ext_low_r,
	crudeOil_ext_mid_r,
	crudeOil_ext_hig_r,
	crudeOil_well_low_r,
	crudeOil_well_mid_r,
	crudeOil_well_hig_r,
	fuel_r,
	residualFuel_r,
	liquidBiofuel_r,
	aluminaSolution_r,
	sulfuricAcid_r,
	nitricAcid_r,
	nitrogenGas_low_r,
	nitrogenGas_mid_r,
	nitrogenGas_hig_r,

	ironRod_r,
	screw_r,
	ironPlate_r,
	reinforcedIronPlate_r,
	copperSheet_r,
	alcladAluminumSheet_r,
	aluminumCasing_r,
	steelPipe_r,
	steelBeam_r,
	encasedIndustrialBeam_r,
	modularFrame_r,
	heavyModularFrame_r,
	fusedModularFrame_r,
	fabric_r,
	plastic_r,
	rubber_r,

	rotor_r,
	stator_r,
	battery_r,
	motor_r,
	heatSink_r,
	coolingSystem_r,
	turboMotor_r,

	wire_r,
	cable_r,
	quickwire_r,
	circuitBoard_r,
	AILimiter_r,
	hightSpeedConnector_r,

	computer_r,
	supercomputer_r,
	quantumComputer_r,
	radioControlUnit_r,
	crystalOscillator_r,
	superpositionOscillator_r,

	emptyCanister_r,
	emptyFludioTank_r,
	pressureConversionCube_r,
	packagedWater_r,
	packagedAluminaSolution_r,
	packagedSulfuricAcid_r,
	packagedNitricAcid_r,
	packagedNitrogenGass_r,

	biomass_alienProtein_r,
	biomass_leaves_r,
	biomass_mycelia_r,
	biomass_wood_r,
	packagedOil_r,
	packagedHeavyOilResidue_r,
	solidBiofuel_r,
	packagedFuel_r,
	packagedLiquidBiofuel_r,
	packagedTurbofuel_r,
	uraniumFuelRod_r,
	plutoniumFuelRod_r,
	blackPowder_r,
	smokelessPower_r,
	gasFilter_r,
	colorCartridge_r,
	beacon_r,
	iodineInfusedFilter_r,

	ironRebar_r,
	stunRebar_r,
	shatterRebar_r,
	explosiveRebar_r,
	rifleAmmo_r,
	homingRifleAmmo_r,
	turboRifleAmmo_blenter_r,
	turboRifleAmmo_manufacturer_r,
	nobelisk_r,
	gasNobelisk_r,
	pulseNobelisk_r,
	clusterNobelisk_r,
	nukeNobelisk_r,

	electromagneticControlRod_r,
	encasedUraniumCell_r,
	nonFissileUranium_r,
	plutoniumPellet_r,
	encasedPlutoniumCell_r,

	uraniumWaste_r,
	plutoniumWaste_r,
	
	smartPlating_r,
	versatileFramework_r,
	automatedWireing_r,
	modularEngine_r,
	adaptiveControlUnit_r,
	assemblyDirectorSystem_r,
	magneticFieldGenerator_r,
	thermalPropulsionRocket_r,
	nuclearPasta_r,

	alt_ironAlloyIngot_r,
	alt_pureIronIngot_r,
	alt_copperAlloyIngot_r,
	alt_pureCopperIngot_r,
	alt_pureCateriumIngot_r,
	alt_cokeSteelIngot_r,
	alt_compactedSteelIngot_r,
	alt_solidSteelIngot_r,
	alt_pureAluminumIngot_r,

	alt_fineConcrete_r,
	alt_rubberConcrete_r,
	alt_wetConcrete_r,
	alt_pureQuartzCrystal_r,
	alt_cheapSilica_r,
	alt_polymerResin_r,
	alt_electrodeAluminumScrap_r,
	alt_instantScrap_r,
	
	alt_heavyOilResidue_r,
	alt_dilutedFuel_r,
	alt_turboBlendFuel_r,
	alt_turbaHeavyFuel_r,
	alt_turboFuel_r,
	alt_sloppyAlumina_r,
	
	alt_steelRod_r,
	alt_castScrew_r,
	alt_steelScrew_r,
	alt_coatedIronPlate_r,
	alt_steelCoatedPlate_r,
	alt_adheredIronPlate_r,
	alt_boltedIronPlate_r,
	alt_stitchedIronPlate_r,
	alt_steamedCopperSheet_r,
	alt_alcladCasing,
	alt_encasedIndustrialPipe_r,
	alt_boltedFrame_r,
	alt_steeledFrame_r,
	alt_heavyEncasedFrame_r,
	alt_heavyFlexibleFrame_r,
	alt_heatFusedFrame_r,
	alt_polyesterFabric_r,
	alt_recycledPlastic_r,
	alt_recycledRubber_r,

	alt_copperRotor_r,
	alt_steelRotor_r,
	alt_quickwireStator_r,
	alt_classicBattery_r,
	alt_electricMotor_r,
	alt_rigourMotor_r,
	alt_heatExchanger_r,
	alt_coolingDevice_r,
	alt_turboElectricMotor_r,
	alt_turboPressureMotor_r,

	alt_cateriumWire_r,
	alt_fusedWire_r,
	alt_ironWire_r,
	alt_coatedCable_r,
	alt_insulatedCable_r,
	alt_quickwireCable_r,
	alt_fusedQuickwire_r,
	alt_cateriumCircuitBoard_r,
	alt_electrodeCircuitBoard_r,
	alt_siliconCircuitBoard_r,
	alt_siliconHighSpeedConnector_r,

	alt_cateriumComputer_r,
	alt_crystalComputer_r,
	alt_OCSupecomputer_r,
	alt_superStateComputer_r,
	alt_radioConnectionUnit_r,
	alt_radioControlSysteam_r,
	alt_insulatedCrystalOscillator_r,

	alt_coatedIronCanister_r,
	alt_steelCanister_r,

	alt_compactedCoal_r,
	alt_dilutedPackagedFuel_r,
	alt_uraniumFuelUnit_r,
	alt_plutoniumFuelUnit_r,

	alt_fineBlackPowder_r,
	alt_crystalBeacon_r,

	alt_electromagneticConnectionRod_r,
	alt_infusedUraniumCell_r,
	alt_fertileUranium_r,
	alt_instantPlutoniumCell_r,
};

enum mapBuilding {
	minerMk1,
	minerMk2,
	minerMk3,
	oilExtractor,
	waterExtractor,
	resourceWellPressurizer,
	resourceWellExtractor,

	smelter,
	foundry,
	constructor,
	assembler,
	manufacturer,
	refinery,
	packager,
	blender,
	particleAccelerator,

	biomassBurner,
	coalGenerator,
	fuelGenerator,
	geothermalGenerator,
	nuclearPowerPlat,
	powerStorage,
	theHUB,
	MAM,
	spaceElevator,
	blueprintDesigner,
	AWESOMESink,
	AWESOMEShop,

	craftBench,
	equipmentWorkshop,
	personalStorageBox,
	medicalStorage,
	hazardStorageBox,
	storageContainer,
	industrialStorageContainer,
	fluidBuffer,
	industrialFluidBuffer,

	truckStation,
	dronePort,
	freightPlatform,
	fluidFreightPlatfrom,

	lookoutTower,
	radarTower
};

enum mapLanguageList {
	en_US,
	ko_KR
};

enum mapLanguage {

};

enum errorCode {
	cantKnowReason,
	functionParamitorError_setLanguage,
	settingFileError_language
};

enum settingFileLineIndex {
	displayLanguage = 0
};

//goto class

class item;
class itemIo;
class itemStack;
class building;
class buildingStack;
class recipe;
class mapV;

class item {
private:
	un16            id;
	wstring         displayName;
	unInt           sinkPoint;
	vector<recipe*> stdRecipe;
	vector<recipe*> altRecipe;
	bool            isLiquid;
	mods            cameFrom;

public:
	item();
	item(
		un16            _id,
		unInt           _sinkPoint,
		vector<recipe*> _stdRecipe,
		vector<recipe*> _altRecipe,
		bool            _isLiquid,
		mods            _cameFrom
	);

	auto getId()          { return this->id; }
	auto getDisplayName() { return this->displayName; }
	auto getIsLiquid()    { return this->isLiquid; }
	auto getCameFrom()    { return this->cameFrom; }

	void setDisplayName(wstring name);

	bool operator== (item comp);
	bool operator!= (item comp);
};

class itemIo {
private:
	item*   content;
	lDouble perMin;
	ioType  pathType;

public:
	itemIo();
	itemIo(
		ioType _pathType
	);
	itemIo(
		item*   _content,
		lDouble _perMin,
		ioType  _pathType
	);

	auto getContent()  { return this->content; }
	auto getPerMin()   { return this->perMin; }
	auto getPathType() { return this->pathType; }
};

class itemStack {
private:
	item* content;
	unInt amount;

public:
	itemStack();
	itemStack(
		item* _content,
		unInt _amount
	);

	auto getContent() { return this->content; };
	auto getAmount()  { return this->amount; }
};

class building {
private:
	un16              id;
	wstring           displayName;
	vector<itemStack> buildCost;
	vector<itemIo>    itemPath;
	bool              isGenerator;
	lDouble           voltageUse;
	lDouble           lowVoltageUse;
	lDouble           highVoltageUse;
	bool              isVariableVoltage;
	mods              cameFrom;

public:
	building();
	building(
		un16              _id,
		vector<itemStack> _buildCost,
		vector<itemIo>    _itemPath,
		bool              _isGenerator,
		lDouble           _voltageUse,
		mods              _cameFrom
	);
	building(
		un16              _id,
		vector<itemStack> _buildCost,
		vector<itemIo>    _itemPath,
		bool              _isGenerator,
		lDouble           _normalLowVoltageUse,
		lDouble           _normalHighVoltageUse,
		mods              _cameFrom
	);

	auto getId()                { return this->id; }
	auto getDisplayName()       { return this->displayName; }
	auto getBuildCost()         { return this->buildCost; }
	auto getItemPath()          { return this->itemPath; }
	auto getLowVoltageUse()     { return this->lowVoltageUse; }
	auto getHighVoltageUse()    { return this->highVoltageUse; }
	auto getVoltageUse()        { return this->voltageUse; }
	auto getIsVariableVoltage() { return this->isVariableVoltage; }
	auto getCameFrom()          { return this->cameFrom; }

	void setDisplayName(wstring name);

	bool operator== (building comp);
	bool operator!= (building comp);

	void setVariableVoltageUse(
		lDouble _lowVoltageUse,
		lDouble _highVoltageUse
	);
};

class buildingStack {
private:
	building* content;
	lDouble   amount;

public:
	buildingStack();
	buildingStack(
		building* _content,
		lDouble   _amount
	);

	auto getContent() { return this->content; }
	auto getAmount()  { return this->amount; }
};

class recipe {
private:
	un16              id;
	wstring           displayName;
	bool              isAlt;
	vector<itemStack> itemOut;
	vector<itemIo>    itemOutPerMin;
	vector<itemStack> itemIn;
	vector<itemIo>    itemInPerMin;
	building*         productionOn;
	lDouble           productionTime;
	mods              cameFrom;
	bool              isEnable;

public:
	recipe();
	recipe(
		un16              _id,
		bool              _isAlt,
		vector<itemStack> _itemOut,
		vector<itemStack> _itemIn,
		building*         _productionOn,
		lDouble           _productionTime,
		mods              _cameFrom
	);

	auto getId()             { return this->id; }
	auto getDisplayName()    { return this->displayName; }
	auto getIsAlt()          { return this->isAlt; }
	auto getItemOut()        { return this->itemOut; }
	auto getItemIn()         { return this->itemIn; }
	auto getProductionOn()   { return this->productionOn; }
	auto getProductionTime() { return this->productionTime; }
	auto getCameFrom()       { return this->cameFrom; }

	void setDisplayName(wstring name);

	bool operator== (recipe comp);
	bool operator!= (recipe comp);
};

//goto class initFunc null

item::item() {
	this->id          = un16();
	this->displayName = wstring();
	this->sinkPoint   = unInt();
	this->stdRecipe   = vector<recipe*>();
	this->altRecipe   = vector<recipe*>();
	this->isLiquid    = bool();
	this->cameFrom    = mods::null;
}

itemIo::itemIo() {
	this->content  = nullptr;
	this->perMin   = lDouble();
	this->pathType = ioType::null;
}

itemStack::itemStack() {
	this->content = nullptr;
	this->amount  = unInt();
}

building::building() {
	this->id                = un16();
	this->displayName       = wstring();
	this->buildCost         = vector<itemStack>();
	this->itemPath          = vector<itemIo>();
	this->lowVoltageUse     = lDouble();
	this->highVoltageUse    = lDouble();
	this->voltageUse        = lDouble();
	this->isVariableVoltage = bool();
	this->cameFrom          = mods::null;
}

buildingStack::buildingStack() {
	this->content = nullptr;
	this->amount  = lDouble();
}

recipe::recipe() {
	this->id             = un16();
	this->displayName    = wstring();
	this->isAlt          = bool();
	this->itemOut        = vector<itemStack>();
	this->itemOutPerMin  = vector<itemIo>();
	this->itemIn         = vector<itemStack>();
	this->itemInPerMin   = vector<itemIo>();
	this->productionOn   = nullptr;
	this->productionTime = lDouble();
	this->cameFrom       = mods::null;
	this->isEnable       = false;
}

//goto class initFunc

item::item(
	un16            _id,
	unInt           _sinkPoint,
	vector<recipe*> _stdRecipe,
	vector<recipe*> _altRecipe,
	bool            _isLiquid,
	mods            _cameFrom
) {
	this->id          = _id;
	this->displayName = wstring();
	this->sinkPoint   = _sinkPoint;
	this->stdRecipe   = _stdRecipe;
	this->altRecipe   = _altRecipe;
	this->isLiquid    = _isLiquid;
	this->cameFrom    = _cameFrom;
}

itemIo::itemIo(
	ioType _pathType
) {
	this->content  = nullptr;
	this->perMin   = lDouble();
	this->pathType = _pathType;
}

itemIo::itemIo(
	item*
	_content,
	lDouble _perMin,
	ioType  _pathType
) {
	this->content  = _content;
	this->perMin   = _perMin;
	this->pathType = _pathType;
}

itemStack::itemStack(
	item* _content,
	unInt _amount
) {
	this->content = _content;
	this->amount  = _amount;
}

building::building(
	un16              _id,
	vector<itemStack> _buildCost,
	vector<itemIo>    _itemPath,
	bool              _isGenerator,
	lDouble           _voltageUse,
	mods              _cameFrom
) {
	this->id                = _id;
	this->displayName       = wstring();
	this->buildCost         = _buildCost;
	this->itemPath          = _itemPath;
	this->isGenerator       = _isGenerator;
	this->voltageUse        = _voltageUse;
	this->lowVoltageUse     = lDouble();
	this->highVoltageUse    = lDouble();
	this->isVariableVoltage = false;
	this->cameFrom          = _cameFrom;
}

building::building(
	un16              _id,
	vector<itemStack> _buildCost,
	vector<itemIo>    _itemPath,
	bool              _isGenerator,
	lDouble           _normalLowVoltageUse,
	lDouble           _normalHighVoltageUse,
	mods              _cameFrom
) {
	this->id                = _id;
	this->displayName       = wstring();
	this->buildCost         = _buildCost;
	this->itemPath          = _itemPath;
	this->isGenerator       = _isGenerator;
	this->voltageUse        = (_normalLowVoltageUse + _normalHighVoltageUse) / 2;
	this->lowVoltageUse     = _normalLowVoltageUse;
	this->highVoltageUse    = _normalHighVoltageUse;
	this->isVariableVoltage = true;
	this->cameFrom          = _cameFrom;
}

buildingStack::buildingStack(
	building* _content,
	lDouble   _amount
) {
	this->content = _content;
	this->amount  = _amount;
}

recipe::recipe(
	un16              _id,
	bool              _isAlt,
	vector<itemStack> _itemOut,
	vector<itemStack> _itemIn,
	building*         _productionOn,
	lDouble           _productionTime,
	mods              _cameFrom
) {
	this->id             = _id;
	this->displayName    = wstring();
	this->isAlt          = _isAlt;
	this->itemOut        = _itemOut;
	this->itemIn         = _itemIn;
	this->productionOn   = _productionOn;
	this->productionTime = _productionTime;
	this->cameFrom       = _cameFrom;

	for (auto i : _itemOut) {
		ioType type = (i.getContent()->getIsLiquid() ? ioType::pipeOut : ioType::beltOut);
		this->itemOutPerMin.push_back(itemIo(i.getContent(), (i.getAmount() * _productionTime), type));
	}
	for (auto i : _itemIn) {
		ioType type = (i.getContent()->getIsLiquid() ? ioType::pipeIn : ioType::beltIn);
		this->itemInPerMin.push_back(itemIo(i.getContent(), (i.getAmount() * _productionTime), type));
	}

	this->isEnable = false;
}

//goto class setValue

void item::    setDisplayName(wstring name) { this->displayName = name; }
void building::setDisplayName(wstring name) { this->displayName = name; }
void recipe::  setDisplayName(wstring name) { this->displayName = name; }

//goto class operator

bool item::operator== (item comp) { return (this->id == comp.id); }
bool item::operator!= (item comp) { return (this->id != comp.id); }

bool building::operator== (building comp) { return (this->id == comp.id); }
bool building::operator!= (building comp) { return (this->id != comp.id); }

bool recipe::operator== (recipe comp) { return (this->id == comp.id); }
bool recipe::operator!= (recipe comp) { return (this->id != comp.id); }

//goto class functions

void building::setVariableVoltageUse(
	lDouble _lowVoltageUse,
	lDouble _highVoltageUse
) {
	this->lowVoltageUse  = _lowVoltageUse;
	this->highVoltageUse = _highVoltageUse;
}

//goto class init

struct gameItems {
	map<mapItem,     item>     items;
	map<mapRecipe,   recipe>   recipes;
	map<mapBuilding, building> buildings;
};

typedef map<mapLanguageList, wstring> language;

gameItems classInit() {
	language  lang;
	gameItems result;

	vector<itemStack> tempSt = {};
	vector<itemIo>    tempIo = {};

	tempSt.reserve(5);
	tempIo.reserve(6);

	// smelter
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::ironRod], 5));
	tempSt.push_back(itemStack(&result.items[mapItem::wire],    8));
	result.buildings[mapBuilding::smelter] = building(1, tempSt, tempIo, false, 4, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// foundry
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::modularFrame], 10));
	tempSt.push_back(itemStack(&result.items[mapItem::rotor],        10));
	tempSt.push_back(itemStack(&result.items[mapItem::concrete],     20));
	result.buildings[mapBuilding::foundry] = building(2, tempSt, tempIo, false, 16, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// constructor
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::reinforcedIronPlate], 2));
	tempSt.push_back(itemStack(&result.items[mapItem::cable],               8));
	result.buildings[mapBuilding::constructor] = building(3, tempSt, tempIo, false, 4, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// assembler
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::reinforcedIronPlate], 8));
	tempSt.push_back(itemStack(&result.items[mapItem::rotor],               4));
	tempSt.push_back(itemStack(&result.items[mapItem::cable],               10));
	result.buildings[mapBuilding::assembler] = building(4, tempSt, tempIo, false, 15, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// manufacturer
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::motor],             5));
	tempSt.push_back(itemStack(&result.items[mapItem::heavyModularFrame], 10));
	tempSt.push_back(itemStack(&result.items[mapItem::cable],             50));
	tempSt.push_back(itemStack(&result.items[mapItem::plastic],           50));
	result.buildings[mapBuilding::manufacturer] = building(5, tempSt, tempIo, false, 55, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// refinery
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::pipeIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempIo.push_back(itemIo(ioType::pipeOut));
	tempSt.push_back(itemStack(&result.items[mapItem::motor],                 30));
	tempSt.push_back(itemStack(&result.items[mapItem::encasedIndustrialBeam], 10));
	tempSt.push_back(itemStack(&result.items[mapItem::steelBeam],             30));
	tempSt.push_back(itemStack(&result.items[mapItem::copperIngot],           20));
	result.buildings[mapBuilding::refinery] = building(6, tempSt, tempIo, false, 30, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// packager
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::pipeIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempIo.push_back(itemIo(ioType::pipeOut));
	tempSt.push_back(itemStack(&result.items[mapItem::steelBeam], 20));
	tempSt.push_back(itemStack(&result.items[mapItem::rubber],    10));
	tempSt.push_back(itemStack(&result.items[mapItem::plastic],   10));
	result.buildings[mapBuilding::packager] = building(7, tempSt, tempIo, false, 10, mods::satisfactory);
	tempIo.clear();
	tempSt.clear(); 

	// blender
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::pipeIn));
	tempIo.push_back(itemIo(ioType::pipeIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempIo.push_back(itemIo(ioType::pipeOut));
	tempSt.push_back(itemStack(&result.items[mapItem::motor],             20));
	tempSt.push_back(itemStack(&result.items[mapItem::heavyModularFrame], 10));
	tempSt.push_back(itemStack(&result.items[mapItem::aluminumCasing],    50));
	tempSt.push_back(itemStack(&result.items[mapItem::radioControlUnit],  5));
	result.buildings[mapBuilding::blender] = building(8, tempSt, tempIo, false, 75, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();	

	// particle accelerator
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::pipeIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::radioControlUnit],          25));
	tempSt.push_back(itemStack(&result.items[mapItem::electromagneticControlRod], 100));
	tempSt.push_back(itemStack(&result.items[mapItem::supercomputer],             10));
	tempSt.push_back(itemStack(&result.items[mapItem::coolingSystem],             50));
	tempSt.push_back(itemStack(&result.items[mapItem::fusedModularFrame],         10));
	result.buildings[mapBuilding::particleAccelerator] = building(9, tempSt, tempIo, false, 250, 750, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// coal generator
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::pipeIn));
	tempSt.push_back(itemStack(&result.items[mapItem::reinforcedIronPlate], 20));
	tempSt.push_back(itemStack(&result.items[mapItem::rotor],               10));
	tempSt.push_back(itemStack(&result.items[mapItem::cable],               30));
	result.buildings[mapBuilding::coalGenerator] = building(10, tempSt, tempIo, true, 75, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// fuel generator
	tempIo.push_back(itemIo(ioType::pipeIn));
	tempSt.push_back(itemStack(&result.items[mapItem::computer],          5));
	tempSt.push_back(itemStack(&result.items[mapItem::heavyModularFrame], 10));
	tempSt.push_back(itemStack(&result.items[mapItem::motor],             15));
	tempSt.push_back(itemStack(&result.items[mapItem::rubber],            50));
	tempSt.push_back(itemStack(&result.items[mapItem::quickwire],         50));
	result.buildings[mapBuilding::fuelGenerator] = building(11, tempSt, tempIo, true, 150, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// nuclear power plant
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::pipeIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::concrete],            250));
	tempSt.push_back(itemStack(&result.items[mapItem::heavyModularFrame],   25));
	tempSt.push_back(itemStack(&result.items[mapItem::supercomputer],       5));
	tempSt.push_back(itemStack(&result.items[mapItem::cable],               100));
	tempSt.push_back(itemStack(&result.items[mapItem::alcladAluminumSheet], 100));
	result.buildings[mapBuilding::nuclearPowerPlat] = building(12, tempSt, tempIo, true, 2500, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// AWSOME sink
	tempIo.push_back(itemIo(ioType::beltIn));
	tempSt.push_back(itemStack(&result.items[mapItem::reinforcedIronPlate], 15));
	tempSt.push_back(itemStack(&result.items[mapItem::cable],               30));
	tempSt.push_back(itemStack(&result.items[mapItem::computer],            45));
	result.buildings[mapBuilding::AWESOMESink] = building(13, tempSt, tempIo, false, 30, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	vector<itemStack> tempSI = {};
	vector<itemStack> tempSO = {};

	tempSI.reserve(4);
	tempSO.reserve(2);

	// limestone
	tempSO.push_back(itemStack(&result.items[mapItem::limestone], 1));
	result.recipes[mapRecipe::limestone_1_low_r] = recipe(1, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::limestone_1_mid_r] = recipe(2, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::limestone_1_hig_r] = recipe(3, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::limestone_2_low_r] = recipe(4, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::limestone_2_mid_r] = recipe(5, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::limestone_2_hig_r] = recipe(6, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::limestone_3_low_r] = recipe(7, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::limestone_3_mid_r] = recipe(8, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::limestone_3_hig_r] = recipe(9, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();
	
	// ironOre
	tempSO.push_back(itemStack(&result.items[mapItem::ironOre], 1));
	result.recipes[mapRecipe::ironOre_1_low_r] = recipe(10, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::ironOre_1_mid_r] = recipe(11, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::ironOre_1_hig_r] = recipe(12, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::ironOre_2_low_r] = recipe(13, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::ironOre_2_mid_r] = recipe(14, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::ironOre_2_hig_r] = recipe(15, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::ironOre_3_low_r] = recipe(16, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::ironOre_3_mid_r] = recipe(17, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::ironOre_3_hig_r] = recipe(18, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// copperOre
	tempSO.push_back(itemStack(&result.items[mapItem::copperOre], 1));
	result.recipes[mapRecipe::copperOre_1_low_r] = recipe(19, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::copperOre_1_mid_r] = recipe(20, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::copperOre_1_hig_r] = recipe(21, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::copperOre_2_low_r] = recipe(22, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::copperOre_2_mid_r] = recipe(23, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::copperOre_2_hig_r] = recipe(24, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::copperOre_3_low_r] = recipe(25, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::copperOre_3_mid_r] = recipe(26, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::copperOre_3_hig_r] = recipe(27, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// cateriumOre
	tempSO.push_back(itemStack(&result.items[mapItem::cateriumOre], 1));
	result.recipes[mapRecipe::cateriumOre_1_low_r] = recipe(28, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::cateriumOre_1_mid_r] = recipe(29, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::cateriumOre_1_hig_r] = recipe(30, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::cateriumOre_2_low_r] = recipe(31, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::cateriumOre_2_mid_r] = recipe(32, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::cateriumOre_2_hig_r] = recipe(33, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::cateriumOre_3_low_r] = recipe(34, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::cateriumOre_3_mid_r] = recipe(35, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::cateriumOre_3_hig_r] = recipe(36, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// coal
	tempSO.push_back(itemStack(&result.items[mapItem::coal], 1));
	result.recipes[mapRecipe::coal_1_low_r] = recipe(37, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::coal_1_mid_r] = recipe(38, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::coal_1_hig_r] = recipe(39, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::coal_2_low_r] = recipe(40, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::coal_2_mid_r] = recipe(41, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::coal_2_hig_r] = recipe(42, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::coal_3_low_r] = recipe(43, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::coal_3_mid_r] = recipe(44, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::coal_3_hig_r] = recipe(45, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// rawQuartz
	tempSO.push_back(itemStack(&result.items[mapItem::rawQuartz], 1));
	result.recipes[mapRecipe::rawQuartz_1_low_r] = recipe(46, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::rawQuartz_1_mid_r] = recipe(47, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::rawQuartz_1_hig_r] = recipe(48, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::rawQuartz_2_low_r] = recipe(49, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::rawQuartz_2_mid_r] = recipe(50, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::rawQuartz_2_hig_r] = recipe(51, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::rawQuartz_3_low_r] = recipe(52, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::rawQuartz_3_mid_r] = recipe(53, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::rawQuartz_3_hig_r] = recipe(54, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// sulfur
	tempSO.push_back(itemStack(&result.items[mapItem::sulfur], 1));
	result.recipes[mapRecipe::sulfur_1_low_r] = recipe(55, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::sulfur_1_mid_r] = recipe(56, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::sulfur_1_hig_r] = recipe(57, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::sulfur_2_low_r] = recipe(58, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::sulfur_2_mid_r] = recipe(59, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::sulfur_2_hig_r] = recipe(60, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::sulfur_3_low_r] = recipe(61, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::sulfur_3_mid_r] = recipe(62, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::sulfur_3_hig_r] = recipe(63, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// bauxite
	tempSO.push_back(itemStack(&result.items[mapItem::bauxite], 1));
	result.recipes[mapRecipe::bauxite_1_low_r] = recipe(64, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::bauxite_1_mid_r] = recipe(65, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::bauxite_1_hig_r] = recipe(66, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::bauxite_2_low_r] = recipe(67, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::bauxite_2_mid_r] = recipe(68, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::bauxite_2_hig_r] = recipe(69, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::bauxite_3_low_r] = recipe(70, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::bauxite_3_mid_r] = recipe(71, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::bauxite_3_hig_r] = recipe(72, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// SAMOre
	tempSO.push_back(itemStack(&result.items[mapItem::SAMOre], 1));
	result.recipes[mapRecipe::SAMOre_1_low_r] = recipe(73, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::SAMOre_1_mid_r] = recipe(74, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::SAMOre_1_hig_r] = recipe(75, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::SAMOre_2_low_r] = recipe(76, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::SAMOre_2_mid_r] = recipe(77, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::SAMOre_2_hig_r] = recipe(78, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::SAMOre_3_low_r] = recipe(79, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::SAMOre_3_mid_r] = recipe(80, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::SAMOre_3_hig_r] = recipe(81, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// uranium
	tempSO.push_back(itemStack(&result.items[mapItem::uranium], 1));
	result.recipes[mapRecipe::uranium_1_low_r] = recipe(82, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(30),  mods::satisfactory);
	result.recipes[mapRecipe::uranium_1_mid_r] = recipe(83, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::uranium_1_hig_r] = recipe(84, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk1], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::uranium_2_low_r] = recipe(85, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(60),  mods::satisfactory);
	result.recipes[mapRecipe::uranium_2_mid_r] = recipe(86, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::uranium_2_hig_r] = recipe(87, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk2], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::uranium_3_low_r] = recipe(88, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(120), mods::satisfactory);
	result.recipes[mapRecipe::uranium_3_mid_r] = recipe(89, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(240), mods::satisfactory);
	result.recipes[mapRecipe::uranium_3_hig_r] = recipe(90, false, tempSO, tempSI, &result.buildings[mapBuilding::minerMk3], perMin2sec(480), mods::satisfactory);
	tempSO.clear();

	// ironIngot
	tempSO.push_back(itemStack(&result.items[mapItem::ironIngot], 1));
	tempSI.push_back(itemStack(&result.items[mapItem::ironOre],   1));
	result.recipes[mapRecipe::ironIngot_r] = recipe(91, false, tempSO, tempSI, &result.buildings[mapBuilding::smelter], perMin2sec(30.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::ironIngot], 5));
	tempSI.push_back(itemStack(&result.items[mapItem::ironOre],   2));
	tempSI.push_back(itemStack(&result.items[mapItem::copperOre], 2));
	result.recipes[mapRecipe::alt_ironAlloyIngot_r] = recipe(92, true, tempSO, tempSI, &result.buildings[mapBuilding::foundry], perMin2sec(50.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::ironIngot], 13));
	tempSI.push_back(itemStack(&result.items[mapItem::ironOre],   7));
	tempSI.push_back(itemStack(&result.items[mapItem::water],     4));
	result.recipes[mapRecipe::alt_pureIronIngot_r] = recipe(93, true, tempSO, tempSI, &result.buildings[mapBuilding::refinery], perMin2sec(65.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	// copperIngot
	tempSO.push_back(itemStack(&result.items[mapItem::copperIngot], 1));
	tempSI.push_back(itemStack(&result.items[mapItem::copperOre],   1));
	result.recipes[mapRecipe::copperIngot_r] = recipe(94, false, tempSO, tempSI, &result.buildings[mapBuilding::smelter], perMin2sec(30.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::copperIngot], 20));
	tempSI.push_back(itemStack(&result.items[mapItem::copperOre],   10));
	tempSI.push_back(itemStack(&result.items[mapItem::ironOre],     5));
	result.recipes[mapRecipe::alt_copperAlloyIngot_r] = recipe(95, true, tempSO, tempSI, &result.buildings[mapBuilding::foundry], perMin2sec(100.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::copperIngot], 15));
	tempSI.push_back(itemStack(&result.items[mapItem::copperOre],   6));
	tempSI.push_back(itemStack(&result.items[mapItem::water],       4));
	result.recipes[mapRecipe::alt_pureCopperIngot_r] = recipe(96, true, tempSO, tempSI, &result.buildings[mapBuilding::refinery], perMin2sec(37.5 / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	// cateriumIngot
	tempSO.push_back(itemStack(&result.items[mapItem::cateriumIngot], 1));
	tempSI.push_back(itemStack(&result.items[mapItem::cateriumOre],   3));
	result.recipes[mapRecipe::cateriumIngot_r] = recipe(97, false, tempSO, tempSI, &result.buildings[mapBuilding::refinery], perMin2sec(15.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::cateriumIngot], 1));
	tempSI.push_back(itemStack(&result.items[mapItem::cateriumOre],   2));
	tempSI.push_back(itemStack(&result.items[mapItem::water],         2));
	result.recipes[mapRecipe::alt_pureCateriumIngot_r] = recipe(98, true, tempSO, tempSI, &result.buildings[mapBuilding::refinery], perMin2sec(12.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	// steelIngot
	tempSO.push_back(itemStack(&result.items[mapItem::steelIngot], 3));
	tempSI.push_back(itemStack(&result.items[mapItem::ironOre],    3));
	tempSI.push_back(itemStack(&result.items[mapItem::coal],       3));
	result.recipes[mapRecipe::steelIngot_r] = recipe(99, false, tempSO, tempSI, &result.buildings[mapBuilding::foundry], perMin2sec(45.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::steelIngot],    20));
	tempSI.push_back(itemStack(&result.items[mapItem::ironOre],       15));
	tempSI.push_back(itemStack(&result.items[mapItem::petroleumCoke], 15));
	result.recipes[mapRecipe::alt_cokeSteelIngot_r] = recipe(100, true, tempSO, tempSI, &result.buildings[mapBuilding::foundry], perMin2sec(100.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::steelIngot],     10));
	tempSI.push_back(itemStack(&result.items[mapItem::ironOre],        6));
	tempSI.push_back(itemStack(&result.items[mapItem::compactedCoal],  3));
	result.recipes[mapRecipe::alt_compactedSteelIngot_r] = recipe(101, true, tempSO, tempSI, &result.buildings[mapBuilding::foundry], perMin2sec(37.5 / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::steelIngot], 3));
	tempSI.push_back(itemStack(&result.items[mapItem::ironIngot],  2));
	tempSI.push_back(itemStack(&result.items[mapItem::coal],       2));
	result.recipes[mapRecipe::alt_solidSteelIngot_r] = recipe(102, true, tempSO, tempSI, &result.buildings[mapBuilding::foundry], perMin2sec(60.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	// aluminumIngot
	tempSO.push_back(itemStack(&result.items[mapItem::aluminumIngot], 4));
	tempSI.push_back(itemStack(&result.items[mapItem::aluminumScrap], 6));
	tempSI.push_back(itemStack(&result.items[mapItem::silica],        5));
	result.recipes[mapRecipe::aluminumIngot_r] = recipe(103, false, tempSO, tempSI, &result.buildings[mapBuilding::foundry], perMin2sec(60.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::aluminumIngot], 1));
	tempSI.push_back(itemStack(&result.items[mapItem::aluminumScrap], 2));
	result.recipes[mapRecipe::alt_pureAluminumIngot_r] = recipe(104, true, tempSO, tempSI, &result.buildings[mapBuilding::smelter], perMin2sec(30.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	// concrete
	tempSO.push_back(itemStack(&result.items[mapItem::concrete],  1));
	tempSI.push_back(itemStack(&result.items[mapItem::limestone], 3));
	result.recipes[mapRecipe::concrete_r] = recipe(103, false, tempSO, tempSI, &result.buildings[mapBuilding::constructor], perMin2sec(15.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::concrete],  10));
	tempSI.push_back(itemStack(&result.items[mapItem::silica],    3));
	tempSI.push_back(itemStack(&result.items[mapItem::limestone], 12));
	result.recipes[mapRecipe::alt_fineConcrete_r] = recipe(104, true, tempSO, tempSI, &result.buildings[mapBuilding::assembler], perMin2sec(25.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::concrete],  9));
	tempSI.push_back(itemStack(&result.items[mapItem::limestone], 10));
	tempSI.push_back(itemStack(&result.items[mapItem::rubber],    2));
	result.recipes[mapRecipe::alt_rubberConcrete_r] = recipe(105, true, tempSO, tempSI, &result.buildings[mapBuilding::assembler], perMin2sec(45.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	tempSO.push_back(itemStack(&result.items[mapItem::concrete],  4));
	tempSI.push_back(itemStack(&result.items[mapItem::limestone], 6));
	tempSI.push_back(itemStack(&result.items[mapItem::water],     5));
	result.recipes[mapRecipe::alt_wetConcrete_r] = recipe(106, true, tempSO, tempSI, &result.buildings[mapBuilding::refinery], perMin2sec(80.f / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();

	// quartzCrysal
	tempSO.push_back(itemStack(&result.items[mapItem::quartzCrystal], 3));
	tempSI.push_back(itemStack(&result.items[mapItem::rawQuartz],     5));
	result.recipes[mapRecipe::quartzCrystal_r] = recipe(107, false, tempSO, tempSI, &result.buildings[mapBuilding::constructor], perMin2sec(22.5 / tempSO[0].getAmount()), mods::satisfactory);
	tempSO.clear();
	tempSI.clear();



	return result;
}

//goto function

void exitByError(errorCode code, lDouble num = 0) {
	wcout << L"ErrorCode: " << code << endl;

	switch (code) {
		case errorCode::cantKnowReason:                     wcout << L"Can't Know Reason";
		case errorCode::functionParamitorError_setLanguage: wcout << L"Function \"setLanguage\" call by wrong Enum velue (Enum out of range): " << (int)num;
		case errorCode::settingFileError_language:          wcout << L"Language Setting on Settings.txt (line: 1) is wrong";
	}

	exit(EXIT_FAILURE);
}

lDouble perMin2sec(lDouble perMin) {
	lDouble perSec = perMin / 60.f;
	lDouble timePr = 1.f / perSec;
	return timePr;
}

lDouble getPowerUseByOverclock(lDouble normalPowerUse, lDouble overclock) {
	lDouble result = overclock / 100;
	result = pow(result, 1.321928);
	result *= normalPowerUse;
	return result;
}

language setLanguage(mapLanguageList lang) {
	language result;
	
	switch (lang) {
		default: exitByError(errorCode::functionParamitorError_setLanguage, (lDouble)lang);

		case mapLanguageList::ko_KR: {
			
		}
	}

	return result;
}

mapLanguageList getLanguageListByString(string str) {
	mapLanguageList result;

	if      (str == "en_US") result = mapLanguageList::en_US;
	else if (str == "ko_KR") result = mapLanguageList::ko_KR;
	else exitByError(errorCode::settingFileError_language);
	
	return result;
}

//goto main

int main(void) {
	string         strBuffer;
	vector<string> settings;
	std::ifstream  settingsFile("settings.txt");

	while (std::getline(settingsFile, strBuffer)) {
		settings.push_back(strBuffer);
	}
	strBuffer = string();

	language globalLang = setLanguage(getLanguageListByString(settings[settingFileLineIndex::displayLanguage]));
	
	std::locale loc("ko_KR");
	wcin .imbue(loc);
	wcout.imbue(loc);



	return EXIT_SUCCESS;
}