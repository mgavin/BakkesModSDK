#pragma once
#include "gfxproductswrapper.h"
#include "../engine/objectwrapper.h"
#include "../arraywrapper.h"

#include "onlineproductwrapper.h"
#include "productslotwrapper.h"
#include "producttemplatewrapper.h"
#include "productwrapper.h"
#include "attributes/productattributewrapper.h"
#include "attributes/productattribute_animatedskinlabelwrapper.h"
#include "attributes/productattribute_blueprintcostwrapper.h"
#include "attributes/productattribute_blueprintwrapper.h"
#include "attributes/productattribute_bodycompatibilitywrapper.h"
#include "attributes/productattribute_certifiedwrapper.h"
#include "attributes/productattribute_currencywrapper.h"
#include "attributes/productattribute_paintedwrapper.h"
#include "attributes/productattribute_qualitywrapper.h"
#include "attributes/productattribute_specialeditionwrapper.h"
#include "attributes/productattribute_specialeditionsettingswrapper.h"
#include "attributes/productattribute_teameditionuploadwrapper.h"
#include "attributes/productattribute_teameditionwrapper.h"
#include "attributes/productattribute_unlockmethodwrapper.h"
#include "dbs/certifiedstatdatabasewrapper.h"
#include "dbs/dataassetdatabasewrapper.h"
#include "dbs/dataassetdatabase_esportsteamwrapper.h"
#include "dbs/paintdatabasewrapper.h"
#include "dbs/specialeditiondatabasewrapper.h"
#include "tradewrapper.h"
#include "producttradeinwrapper.h"
#include "loadoutwrapper.h"

class BAKKESMOD_PLUGIN_IMPORT ItemsWrapper : public ObjectWrapper
{
public:
	ItemsWrapper(std::uintptr_t gamedata, std::uintptr_t savedata);
	ItemsWrapper(const ItemsWrapper& other);
	ItemsWrapper& operator=(ItemsWrapper rhs);
	~ItemsWrapper();
	bool IsNull();
	explicit operator bool();
	ArrayWrapper<ProductWrapper> GetAllProducts();
	ArrayWrapper<ProductSlotWrapper> GetAllProductSlots();
	ProductWrapper GetProduct(int productId);
	[[deprecated("Use FProductInstanceID overload")]]
	OnlineProductWrapper GetOnlineProduct(unsigned long long instanceID);
	OnlineProductWrapper GetOnlineProduct(const ProductInstanceID& product_instance_id) const;

	[[nodiscard]] static bool IsOnlineID(const ProductInstanceID& product_instance_id);
	[[nodiscard]] static int GetProductIdFromInstanceId(const ProductInstanceID& product_instance_id);

	[[deprecated("This will 99% for sure crash")]]
	ArrayWrapper<OnlineProductWrapper> GetUnlockedProducts();
	ArrayWrapper<ProductWrapper> GetCachedUnlockedProducts();
	ArrayWrapper<OnlineProductWrapper> GetOwnedProducts();

	CertifiedStatDatabaseWrapper GetCertifiedStatDB();
	DataAssetDatabase_ESportsTeamWrapper GetEsportTeamDB();
	PaintDatabaseWrapper GetPaintDB();
	SpecialEditionDatabaseWrapper GetSpecialEditionDB();

	UnrealStringWrapper GetCurrentLoadoutName();
	LoadoutWrapper GetCurrentLoadout(int teamIndex);

	TradeWrapper GetTradeWrapper();
	ProductTradeInWrapper GetProductTradeInWrapper();
	[[nodiscard]] GfxProductsWrapper GetGfxProductsWrapper();

private:
	PIMPL
};

