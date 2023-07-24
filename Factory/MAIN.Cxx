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
	recipe*         stdRecipe;
	vector<recipe*> altRecipe;
	bool            isLiquid;
	mods            cameFrom;

public:
	item();
	item(
		un16            _id,
		string          _displayName,
		unInt           _sinkPoint,
		recipe*         _stdRecipe,
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
		lDouble           _voltageUse,
		mods              _cameFrom
	);
	building(
		un16              _id,
		string            _displayName,
		vector<itemStack> _buildCost,
		vector<itemIo>    _itemPath,
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
	un16          id;
	string        displayName;
	bool          isAlt;
	vector<item*> itemOut;
	vector<item*> itemIn;
	building*     productionOn;
	lDouble       productionTime;
	mods          cameFrom;

public:
	recipe();
	recipe(
		un16          _id,
		string        _displayName,
		bool          _isAlt,
		vector<item*> _itemOut,
		vector<item*> _itemIn,
		building*     _productionOn,
		lDouble       _productionTime,
		mods          _cameFrom
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
	this->stdRecipe   = nullptr;
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
	this->itemOut        = vector<item*>();
	this->itemIn         = vector<item*>();
	this->productionOn   = nullptr;
	this->productionTime = lDouble();
	this->cameFrom       = mods::null;
}

//goto class initFunc

item::item(
	un16            _id,
	string          _displayName,
	unInt           _sinkPoint,
	recipe*         _stdRecipe,
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
	lDouble           _voltageUse,
	mods              _cameFrom
) {
	this->id                = _id;
	this->displayName       = _displayName;
	this->buildCost         = _buildCost;
	this->itemPath          = _itemPath;
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
	lDouble           _normalLowVoltageUse,
	lDouble           _normalHighVoltageUse,
	mods              _cameFrom
) {
	this->id = _id;
	this->displayName       = _displayName;
	this->buildCost         = _buildCost;
	this->itemPath          = _itemPath;
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
	un16          _id,
	string        _displayName,
	bool          _isAlt,
	vector<item*> _itemOut,
	vector<item*> _itemIn,
	building*     _productionOn,
	lDouble       _productionTime,
	mods          _cameFrom
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
	gameItems res;

	item limestone;
	item ironOre;
	item copperOre;
	item cateriumOre;
	item coal;
	item rawQuartz;
	item sulfur;
	item bauxite;
	item SAMOre;
	item uranium;

	item ironIngot;
	item copperIngot;
	item cateriumIngot;
	item steelIngot;
	item aluminumIngot;

	item concrete;
	item quartzCrystal;
	item silica;
	item copperPowder;
	item polymerResin;
	item petroleumCoke;
	item aluminumScrap;

	item alienProtein;
	item alienDNACapsule;

	item water;
	item crudeOil;
	item heavyOilResidue;
	item fuel;
	item liquidBiofuel;
	item turbofuel;
	item aluminaSolution;
	item sulfuricAcid;
	item nitricAcid;
	item nitrogenGas;

	item ironRod;
	item screw;
	item ironPlate;
	item reinforcedIronPlate;
	item copperSheet;
	item alcladAluminumSheet;
	item aluminumCasing;
	item steelPipe;
	item steelBeam;
	item encasedIndustrialBeam;
	item modularFrame;
	item heavyModularFrame;
	item fusedModularFrame;
	item fabric;
	item plastic;
	item rubber;

	item rotor;
	item stator;
	item battery;
	item motor;
	item heatSink;
	item coolingSystem;
	item turboMotor;

	item wire;
	item cable;
	item quickwire;
	item circuitBoard;
	item AILimitor;
	item hightSpeedConnector;

	item computer;
	item supercomputer;
	item quantumComputer;
	item radioControlUnit;
	item crystalOscillator;
	item superpositionOscillator;

	item emptyCanister;
	item emptyFluidTank;
	item pressureConversionCube;
	item packagedWater;
	item packagedAluminaSolution;
	item packagedSulfuricAcid;
	item packagedNitricAcid;
	item packagedNitrogenGas;

	item leaves;
	item mycelia;
	item flowerPetals;
	item wood;
	item biomass;
	item compactedCoal;
	item packagedOil;
	item packagedHeavyOilResidue;
	item solidBiofuel;
	item packagedFuel;
	item packagedLiquidBiofuel;
	item packagedTurbofuel;
	item uraniumFuelRod;
	item plutoniumFuelRod;

	item blackPowder;
	item smokelessPower;
	item gasFilter;
	item colorCartridge;
	item beacon;
	item iodineInfusedFilter;

	item ironRebar;
	item stunRebar;
	item shatterReber;
	item explosiveRebar;
	item rifleAmmo;
	item homingRifleAmmo;
	item turboRifleAmmo;
	item nobelisk;
	item gasNobelisk;
	item pulseNobelisk;
	item clusterNobelisk;
	item nukeNobelisk;

	item electromagneticControlRod;
	item encasedUraniumCell;
	item nonFissileUranium;
	item plutoniumPellet;
	item encasedPlutoniumCell;

	item uraniumWaste;
	item plutoniumWaste;

	item bluePowerSlug;
	item yellowPowerSlug;
	item purplePowerSlug;
	item powerShard;
	item FICSITCoupon;
	item smartPlating;
	item versatileFramework;
	item automatedWiring;
	item modularEngine;
	item adaptiveControlUnit;
	item assemblyDirectorSystem;
	item magneticFieldGenerator;
	item thermalPropulsionRocket;
	item nuclearPasta;

	item portableMiner;

	vector<itemStack> tempStack = {};
	vector<itemIo>    tempIo    = {};

	//tempIo    = { itemIo(ioType::beltOut) };
	//tempStack = { itemStack(&portableMiner, 1), itemStack(&ironPlate, 10), itemStack(&concrete, 10) };
	//building minerMk1(++tempId, "Miner Mk.1", tempStack, tempIo, 5, mods::satisfactory);
	//res.buildings.push_back(minerMk1);
	//
	//tempIo    = { itemIo(ioType::beltOut) };
	//tempStack = { itemStack(&portableMiner, 2), itemStack(&encasedIndustrialBeam, 10), itemStack(&steelBeam, 20), itemStack(&modularFrame, 10) };
	//building minerMk2(++tempId, "Miner Mk.2", tempStack, tempIo, 12, mods::satisfactory);
	//res.buildings.push_back(minerMk2);
	//
	//tempIo    = { itemIo(ioType::beltOut) };
	//tempStack = { itemStack(&portableMiner, 3), itemStack(&steelPipe, 50), itemStack(&supercomputer, 5), itemStack(&fusedModularFrame, 10), itemStack(&turboMotor, 3) };
	//building minerMk3(++tempId, "Miner Mk.3", tempStack, tempIo, 30, mods::satisfactory);
	//res.buildings.push_back(minerMk3);
	//
	//tempIo    = { itemIo(ioType::pipeOut) };
	//tempStack = { itemStack(&motor, 15), itemStack(&encasedIndustrialBeam, 20), itemStack(&cable, 60) };
	//building oilExtractor(++tempId, "Oil Extractor", tempStack, tempIo, 40, mods::satisfactory);
	//res.buildings.push_back(oilExtractor)
	//
	//tempIo    = { itemIo(ioType::pipeOut) };
	//tempStack = { itemStack(&copperSheet, 20), itemStack(&reinforcedIronPlate, 10), itemStack(&rotor, 10) };
	//building waterExtractor(++tempId, "Water Extractor", tempStack, tempIo, 20, mods::satisfactory);
	//res.buildings.push_back(waterExtractor)

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltOut) };
	tempStack = { itemStack(&ironRod, 5), itemStack(&wire, 8) };
	building* smelter = new building(1, "Smelter", tempStack, tempIo, 4, mods::satisfactory);
	res.buildings[mapBuilding::smelter] = (*smelter);
	delete smelter;

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltOut) };
	tempStack = { itemStack(&modularFrame, 10), itemStack(&rotor, 10), itemStack(&concrete, 20) };
	building* foundry = new building(2, "Foundry", tempStack, tempIo, 16, mods::satisfactory);
	res.buildings[mapBuilding::foundry] = (*foundry);
	delete foundry;

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltOut) };
	tempStack = { itemStack(&reinforcedIronPlate, 2), itemStack(&cable, 8) };
	building* constructor = new building(3, "Constructor", tempStack, tempIo, 4, mods::satisfactory);
	res.buildings[mapBuilding::constructor] = (*constructor);
	delete constructor;

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltOut) };
	tempStack = { itemStack(&reinforcedIronPlate, 8), itemStack(&rotor, 4), itemStack(&cable, 10) };
	building* assembler = new building(4, "Assembler", tempStack, tempIo, 15, mods::satisfactory);
	res.buildings[mapBuilding::assembler] = (*assembler);
	delete assembler;

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::beltOut) };
	tempStack = { itemStack(&motor, 5), itemStack(&heavyModularFrame, 10), itemStack(&cable, 50), itemStack(&plastic, 50) };
	building* manufacturer = new building(5, "Manufacturer", tempStack, tempIo, 55, mods::satisfactory);
	res.buildings[mapBuilding::manufacturer] = (*manufacturer);
	delete manufacturer;

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut), itemIo(ioType::pipeOut) };
	tempStack = { itemStack(&motor, 30), itemStack(&encasedIndustrialBeam, 10), itemStack(&steelBeam, 30), itemStack(&copperSheet, 20) };
	building* refinery = new building(6, "Refinery", tempStack, tempIo, 30, mods::satisfactory);
	res.buildings[mapBuilding::refinery] = (*refinery);
	delete refinery;

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut), itemIo(ioType::beltOut) };
	tempStack = { itemStack(&steelBeam, 20), itemStack(&rubber, 10), itemStack(&plastic, 10) };
	building* packager = new building(7, "Packager", tempStack, tempIo, 10, mods::satisfactory);
	res.buildings[mapBuilding::packager] = (*packager);
	delete packager;

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut), itemIo(ioType::pipeOut) };
	tempStack = { itemStack(&motor, 20), itemStack(&heavyModularFrame, 10), itemStack(&aluminumCasing, 50), itemStack(&radioControlUnit, 5) };
	building* blender = new building(8, "Blender", tempStack, tempIo, 75, mods::satisfactory);
	res.buildings[mapBuilding::blender] = (*blender);
	delete blender;

	tempIo    = { itemIo(ioType::beltIn), itemIo(ioType::pipeIn), itemIo(ioType::beltOut) };
	tempStack = { itemStack(&radioControlUnit, 25), itemStack(&electromagneticControlRod, 100), itemStack(&supercomputer, 10), itemStack(&coolingSystem, 50), itemStack(&fusedModularFrame, 20), itemStack(&turboMotor, 10) };
	building* particleAccelerator = new building(9, "Particle Accelerator", tempStack, tempIo, 250, 750, mods::satisfactory);
	res.buildings[mapBuilding::particleAccelerator] = (*particleAccelerator);
	delete particleAccelerator;

	return res;
}