// Generated by Haxe 3.3.0
#ifndef INCLUDED_ItemType
#define INCLUDED_ItemType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ItemType)


class ItemType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ItemType_obj OBJ_;

	public:
		ItemType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("ItemType","\x8d","\x25","\xb7","\x83"); }
		::String __ToString() const { return HX_HCSTRING("ItemType.","\x01","\xb6","\x89","\xbc") + _hx_tag; }

		static ::ItemType ItemType_Armor;
		static inline ::ItemType ItemType_Armor_dyn() { return ItemType_Armor; }
		static ::ItemType ItemType_Arrows;
		static inline ::ItemType ItemType_Arrows_dyn() { return ItemType_Arrows; }
		static ::ItemType ItemType_Consumable;
		static inline ::ItemType ItemType_Consumable_dyn() { return ItemType_Consumable; }
		static ::ItemType ItemType_None;
		static inline ::ItemType ItemType_None_dyn() { return ItemType_None; }
		static ::ItemType ItemType_Weapon;
		static inline ::ItemType ItemType_Weapon_dyn() { return ItemType_Weapon; }
};


#endif /* INCLUDED_ItemType */ 
