//goto include

#include <map>
#include <string>
#include <vector>
#include <iostream>

//goto define

#define S(name) #name

//goto typedef

using std::cin;
using std::cout;
using std::endl;

using std::map;
using std::string;
using std::vector;
using std::make_unique;

typedef unsigned __int16 un16;
typedef unsigned int     unInt;
typedef unsigned short   unShort;
typedef long double      lDouble;

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
	limestone_low1_r,
	limestone_mid1_r,
	limestone_hig1_r,
	ironOre_low1_r,
	ironOre_mid1_r,
	ironOre_hig1_r,
	copperOre_low1_r,
	copperOre_mid1_r,
	copperOre_hig1_r,
	caterium_low1_r,
	caterium_mid1_r,
	caterium_hig1_r,
	coal_low1_r,
	coal_mid1_r,
	coal_hig1_r,
	rawQuartz_low1_r,
	rawQuartz_mid1_r,
	rawQuatrz_hig1_r,
	sulfur_low1_r,
	sulfur_mid1_r,
	sulfur_hig1_r,
	bauxite_low1_r,
	bauxite_mid1_r,
	bauxite_hig1_r,
	SAMOre_low1_r,
	SAMOre_mid1_r,
	SAMOre_hig1_r,
	uranium_low1_r,
	uranium_mid1_r,
	uranium_hig1_r,
	limestone_low2_r,
	limestone_mid2_r,
	limestone_hig2_r,
	ironOre_low2_r,
	ironOre_mid2_r,
	ironOre_hig2_r,
	copperOre_low2_r,
	copperOre_mid2_r,
	copperOre_hig2_r,
	caterium_low2_r,
	caterium_mid2_r,
	caterium_hig2_r,
	coal_low2_r,
	coal_mid2_r,
	coal_hig2_r,
	rawQuartz_low2_r,
	rawQuartz_mid2_r,
	rawQuatrz_hig2_r,
	sulfur_low2_r,
	sulfur_mid2_r,
	sulfur_hig2_r,
	bauxite_low2_r,
	bauxite_mid2_r,
	bauxite_hig2_r,
	SAMOre_low2_r,
	SAMOre_mid2_r,
	SAMOre_hig2_r,
	uranium_low2_r,
	uranium_mid2_r,
	uranium_hig2_r,
	limestone_low3_r,
	limestone_mid3_r,
	limestone_hig3_r,
	ironOre_low3_r,
	ironOre_mid3_r,
	ironOre_hig3_r,
	copperOre_low3_r,
	copperOre_mid3_r,
	copperOre_hig3_r,
	caterium_low3_r,
	caterium_mid3_r,
	caterium_hig3_r,
	coal_low3_r,
	coal_mid3_r,
	coal_hig3_r,
	rawQuartz_low3_r,
	rawQuartz_mid3_r,
	rawQuatrz_hig3_r,
	sulfur_low3_r,
	sulfur_mid3_r,
	sulfur_hig3_r,
	bauxite_low3_r,
	bauxite_mid3_r,
	bauxite_hig3_r,
	SAMOre_low3_r,
	SAMOre_mid3_r,
	SAMOre_hig3_r,
	uranium_low3_r,
	uranium_mid3_r,
	uranium_hig3_r,

	ironIngot_r,
	copperOre_r,
	cateriumOre_r,
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

	biomass_r,
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
	turboRifleAmmo_r,
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
	string          displayName;
	unInt           sinkPoint;
	vector<recipe*> stdRecipe;
	vector<recipe*> altRecipe;
	bool            isLiquid;
	mods            cameFrom;

public:
	item();
	item(
		un16            _id,
		string          _displayName,
		unInt           _sinkPoint,
		vector<recipe*> _stdRecipe,
		vector<recipe*> _altRecipe,
		bool            _isLiquid,
		mods            _cameFrom
	);

	auto getId();
	auto getDisplayName();
	auto getIsLiquid();
	auto getCameFrom();

	bool operator == (item comp);
	bool operator != (item comp);
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

	auto getContent();
	auto getPerMin();
	auto getPathType();
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

	auto getContent();
	auto getAmount();
};

class building {
private:
	un16              id;
	string            displayName;
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
		string            _displayName,
		vector<itemStack> _buildCost,
		vector<itemIo>    _itemPath,
		bool              _isGenerator,
		lDouble           _voltageUse,
		mods              _cameFrom
	);
	building(
		un16              _id,
		string            _displayName,
		vector<itemStack> _buildCost,
		vector<itemIo>    _itemPath,
		bool              _isGenerator,
		lDouble           _normalLowVoltageUse,
		lDouble           _normalHighVoltageUse,
		mods              _cameFrom
	);

	auto getId();
	auto getDisplayName();
	auto getBuildCost();
	auto getItemPath();
	auto getLowVoltageUse();
	auto getHighVoltageUse();
	auto getVoltageUse();
	auto getIsVariableVoltage();
	auto getCameFrom();

	bool operator == (building comp);
	bool operator != (building comp);

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

	auto getContent();
	auto getAmount();
};

class recipe {
private:
	un16              id;
	string            displayName;
	bool              isAlt;
	vector<itemStack> itemOut;
	vector<itemStack> itemIn;
	building*         productionOn;
	lDouble           productionTime;
	mods              cameFrom;

public:
	recipe();
	recipe(
		un16              _id,
		string            _displayName,
		bool              _isAlt,
		vector<itemStack> _itemOut,
		vector<itemStack> _itemIn,
		building*         _productionOn,
		lDouble           _productionTime,
		mods              _cameFrom
	);

	auto getId();
	auto getDisplayName();
	auto getIsAlt();
	auto getItemOut();
	auto getItemIn();
	auto getProductionOn();
	auto getProductionTime();
	auto getCameFrom();
};

//goto class initFunc null

item::item() {
	this->id          = un16();
	this->displayName = string();
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
	this->displayName       = string();
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
	this->displayName    = string();
	this->isAlt          = bool();
	this->itemOut        = vector<itemStack>();
	this->itemIn         = vector<itemStack>();
	this->productionOn   = nullptr;
	this->productionTime = lDouble();
	this->cameFrom       = mods::null;
}

//goto class initFunc

item::item(
	un16            _id,
	string          _displayName,
	unInt           _sinkPoint,
	vector<recipe*> _stdRecipe,
	vector<recipe*> _altRecipe,
	bool            _isLiquid,
	mods            _cameFrom
) {
	this->id          = _id;
	this->displayName = _displayName;
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
	string            _displayName,
	vector<itemStack> _buildCost,
	vector<itemIo>    _itemPath,
	bool              _isGenerator,
	lDouble           _voltageUse,
	mods              _cameFrom
) {
	this->id                = _id;
	this->displayName       = _displayName;
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
	string            _displayName,
	vector<itemStack> _buildCost,
	vector<itemIo>    _itemPath,
	bool              _isGenerator,
	lDouble           _normalLowVoltageUse,
	lDouble           _normalHighVoltageUse,
	mods              _cameFrom
) {
	this->id = _id;
	this->displayName       = _displayName;
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
	string            _displayName,
	bool              _isAlt,
	vector<itemStack> _itemOut,
	vector<itemStack> _itemIn,
	building*         _productionOn,
	lDouble           _productionTime,
	mods              _cameFrom
) {
	this->id           = _id;
	this->displayName  = _displayName;
	this->isAlt        = _isAlt;
	this->itemOut      = _itemOut;
	this->itemIn       = _itemIn;
	this->productionOn = _productionOn;
	this->cameFrom     = _cameFrom;
}

//goto class getVar

auto item::getId()          { return this->id; }
auto item::getDisplayName() { return this->displayName; }
auto item::getIsLiquid()    { return this->isLiquid; }
auto item::getCameFrom()    { return this->cameFrom; }

auto itemIo::getContent()  { return this->content; }
auto itemIo::getPerMin()   { return this->perMin; }
auto itemIo::getPathType() { return this->pathType; }

auto itemStack::getContent() { return this->content; }
auto itemStack::getAmount()  { return this->amount; }

auto building::getId()                { return this->id; }
auto building::getDisplayName()       { return this->displayName; }
auto building::getBuildCost()         { return this->buildCost; }
auto building::getItemPath()          { return this->itemPath; }
auto building::getLowVoltageUse()     { return this->lowVoltageUse; }
auto building::getHighVoltageUse()    { return this->highVoltageUse; }
auto building::getVoltageUse()        { return this->voltageUse; }
auto building::getIsVariableVoltage() { return this->isVariableVoltage; }
auto building::getCameFrom()          { return this->cameFrom; }

auto buildingStack::getContent() { return this->content; }
auto buildingStack::getAmount()  { return this->amount; }

auto recipe::getId()             { return this->id; }
auto recipe::getDisplayName()    { return this->displayName; }
auto recipe::getIsAlt()          { return this->isAlt; }
auto recipe::getItemOut()        { return this->itemOut; }
auto recipe::getItemIn()         { return this->itemIn; }
auto recipe::getProductionOn()   { return this->productionOn; }
auto recipe::getProductionTime() { return this->productionTime; }
auto recipe::getCameFrom()       { return this->cameFrom; }

//goto class operator

bool item::operator== (item comp) { return (this->id == comp.id); }
bool item::operator!= (item comp) { return (this->id != comp.id); }

bool building::operator== (building comp) { return (this->id == comp.id); }
bool building::operator!= (building comp) { return (this->id != comp.id); }

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

gameItems classInit() {
	gameItems result;

	//item limestone;
	//item ironOre;
	//item copperOre;
	//item cateriumOre;
	//item coal;
	//item rawQuartz;
	//item sulfur;
	//item bauxite;
	//item SAMOre;
	//item uranium;

	//item ironIngot;
	//item copperIngot;
	//item cateriumIngot;
	//item steelIngot;
	//item aluminumIngot;

	//item concrete;
	//item quartzCrystal;
	//item silica;
	//item copperPowder;
	//item polymerResin;
	//item petroleumCoke;
	//item aluminumScrap;

	//item alienProtein;
	//item alienDNACapsule;

	//item water;
	//item crudeOil;
	//item heavyOilResidue;
	//item fuel;
	//item liquidBiofuel;
	//item turbofuel;
	//item aluminaSolution;
	//item sulfuricAcid;
	//item nitricAcid;
	//item nitrogenGas;

	//item ironRod;
	//item screw;
	//item ironPlate;
	//item reinforcedIronPlate;
	//item copperSheet;
	//item alcladAluminumSheet;
	//item aluminumCasing;
	//item steelPipe;
	//item steelBeam;
	//item encasedIndustrialBeam;
	//item modularFrame;
	//item heavyModularFrame;
	//item fusedModularFrame;
	//item fabric;
	//item plastic;
	//item rubber;

	//item rotor;
	//item stator;
	//item battery;
	//item motor;
	//item heatSink;
	//item coolingSystem;
	//item turboMotor;

	//item wire;
	//item cable;
	//item quickwire;
	//item circuitBoard;
	//item AILimitor;
	//item hightSpeedConnector;

	//item computer;
	//item supercomputer;
	//item quantumComputer;
	//item radioControlUnit;
	//item crystalOscillator;
	//item superpositionOscillator;

	//item emptyCanister;
	//item emptyFluidTank;
	//item presultsureConversionCube;
	//item packagedWater;
	//item packagedAluminaSolution;
	//item packagedSulfuricAcid;
	//item packagedNitricAcid;
	//item packagedNitrogenGas;

	//item leaves;
	//item mycelia;
	//item flowerPetals;
	//item wood;
	//item biomass;
	//item compactedCoal;
	//item packagedOil;
	//item packagedHeavyOilResidue;
	//item solidBiofuel;
	//item packagedFuel;
	//item packagedLiquidBiofuel;
	//item packagedTurbofuel;
	//item uraniumFuelRod;
	//item plutoniumFuelRod;

	//item blackPowder;
	//item smokelessPower;
	//item gasFilter;
	//item colorCartridge;
	//item beacon;
	//item iodineInfusedFilter;

	//item ironRebar;
	//item stunRebar;
	//item shatterReber;
	//item explosiveRebar;
	//item rifleAmmo;
	//item homingRifleAmmo;
	//item turboRifleAmmo;
	//item nobelisk;
	//item gasNobelisk;
	//item pulseNobelisk;
	//item clusterNobelisk;
	//item nukeNobelisk;

	//item electromagneticControlRod;
	//item encasedUraniumCell;
	//item nonFissileUranium;
	//item plutoniumPellet;
	//item encasedPlutoniumCell;

	//item uraniumWaste;
	//item plutoniumWaste;

	//item bluePowerSlug;
	//item yellowPowerSlug;
	//item purplePowerSlug;
	//item powerShard;
	//item FICSITCoupon;
	//item smartPlating;
	//item versatileFramework;
	//item automatedWiring;
	//item modularEngine;
	//item adaptiveControlUnit;
	//item assemblyDirectorSystem;
	//item magneticFieldGenerator;
	//item thermalPropulsionRocket;
	//item nuclearPasta;

	//item portableMiner;

	vector<itemStack> tempSt = {};
	vector<itemIo>    tempIo    = {};

	// smelter
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::ironRod], 5));
	tempSt.push_back(itemStack(&result.items[mapItem::wire]   , 8));
	result.buildings[mapBuilding::smelter] = building(1, "Smelter", tempSt, tempIo, false, 4, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// foundry
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::modularFrame], 10));
	tempSt.push_back(itemStack(&result.items[mapItem::rotor]       , 10));
	tempSt.push_back(itemStack(&result.items[mapItem::concrete]    , 20));
	result.buildings[mapBuilding::foundry] = building(2, "Foundry", tempSt, tempIo, false, 16, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// constructor
	tempIo.push_back(itemIo(ioType::beltIn));
	tempIo.push_back(itemIo(ioType::beltOut));
	tempSt.push_back(itemStack(&result.items[mapItem::reinforcedIronPlate], 2));
	tempSt.push_back(itemStack(&result.items[mapItem::cable]              , 8));
	result.buildings[mapBuilding::constructor] = building(3, "Constructor", tempSt, tempIo, false, 4, mods::satisfactory);
	tempIo.clear();
	tempSt.clear();

	// assembler
	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltOut) };
	tempSt = { itemStack(&result.items[mapItem::reinforcedIronPlate], 8), itemStack(&result.items[mapItem::rotor], 4), itemStack(&result.items[mapItem::cable], 10) };
	result.buildings[mapBuilding::assembler] = building(4, "Assembler", tempSt, tempIo, false, 15, mods::satisfactory);

	// manufacturer
	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltOut) };
	tempSt = { itemStack(&result.items[mapItem::motor], 5), itemStack(&result.items[mapItem::heavyModularFrame], 10), itemStack(&result.items[mapItem::cable], 50), itemStack(&result.items[mapItem::plastic], 50) };
	result.buildings[mapBuilding::manufacturer] = building(5, "Manufacturer", tempSt, tempIo, false, 55, mods::satisfactory);

	// refinery
	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut), itemIo(ioType::pipeOut) };
	tempSt = { itemStack(&result.items[mapItem::motor], 30), itemStack(&result.items[mapItem::encasedIndustrialBeam], 10), itemStack(&result.items[mapItem::steelBeam], 30), itemStack(&result.items[mapItem::copperSheet], 20)};
	result.buildings[mapBuilding::refinery] = building(6, "Refinery", tempSt, tempIo, false, 30, mods::satisfactory);

	// packager
	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut), itemIo(ioType::beltOut) };
	tempSt = { itemStack(&result.items[mapItem::steelBeam], 20), itemStack(&result.items[mapItem::rubber], 10), itemStack(&result.items[mapItem::plastic], 10) };
	result.buildings[mapBuilding::packager] = building(7, "Packager", tempSt, tempIo, false, 10, mods::satisfactory);

	// blender
	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut), itemIo(ioType::pipeOut) };
	tempSt = { itemStack(&result.items[mapItem::motor], 20), itemStack(&result.items[mapItem::heavyModularFrame], 10), itemStack(&result.items[mapItem::aluminumCasing], 50), itemStack(&result.items[mapItem::radioControlUnit], 5) };
	result.buildings[mapBuilding::blender] = building(8, "Blender", tempSt, tempIo, false, 75, mods::satisfactory);

	// particle accelerator
	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut) };
	tempSt = { itemStack(&result.items[mapItem::radioControlUnit], 25), itemStack(&result.items[mapItem::electromagneticControlRod], 100), itemStack(&result.items[mapItem::supercomputer], 10), itemStack(&result.items[mapItem::coolingSystem], 50), itemStack(&fusedModularFrame, 20), itemStack(&turboMotor, 10) };
	result.buildings[mapBuilding::particleAccelerator] = building(9, "Particle Accelerator", tempSt, tempIo, false, 250, 750, mods::satisfactory);

	// coal generator
	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::pipeIn) };
	tempSt = { itemStack(&reinforcedIronPlate, 20), itemStack(&rotor, 10),  itemStack(&cable,  30) };

	result.buildings[mapBuilding::coalGenerator] = building(10, "Coal Generator", tempSt, tempIo, true, 75, mods::satisfactory);

	// fuel generator
	tempIo    = { itemIo(ioType::pipeIn) };
	tempSt = { itemStack(&computer, 5), itemStack(&heavyModularFrame, 10), itemStack(&motor, 15), itemStack(&rubber, 50), itemStack(&quickwire, 50) };
	result.buildings[mapBuilding::fuelGenerator] = building(11, "Fuel Generator", tempSt, tempIo, true, 150, mods::satisfactory);

	// nuclear power plant
	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut) };
	tempSt = { itemStack(&concrete, 250), itemStack(&heavyModularFrame, 25), itemStack(&supercomputer, 5), itemStack(&cable, 100), itemStack(&alcladAluminumSheet, 100) };
	result.buildings[mapBuilding::nuclearPowerPlat] = building(11, "Nuclear Power Plant", tempSt, tempIo, true, 2500, mods::satisfactory);

	// AWSOME sink
	tempIo    = { itemIo(ioType::beltIn) };
	tempSt = { itemStack(&reinforcedIronPlate, 15), itemStack(&cable, 30), itemStack(&concrete, 45) };
	result.buildings[mapBuilding::AWESOMESink] = building(12, "AWESOME Sink", tempSt, tempIo, false, 30, mods::satisfactory);

	tempIo.clear();
	tempSt.clear();

	vector<itemStack> tempStI = {};
	vector<itemStack> tempStO = {};

	// limestone low
	tempStI = {};
	tempStO = { itemStack(&limestone, 1) };
	result.recipes[mapRecipe::limestone_low_r] = recipe(1, "Limestone", false, tempStO, tempStI, &minerMk1)

	return result;
}