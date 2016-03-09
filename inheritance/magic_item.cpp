#include "magic_item.h"

MagicItem::MagicItem(string name, unsigned int value, string description,unsigned int mana_required)
{
    Item::set_name(name);
    Item::set_value(value);
    description_=description;
    mana_required_=mana_required;
}

MagicItem::~MagicItem()
{
    
}

void MagicItem::set_mana_required(unsigned int mana_required)
{
    mana_required_=mana_required;
}

void MagicItem::set_description(string description)
{
    description_=description;
}

unsigned int MagicItem::mana_required()
{
    return mana_required_;
}

string MagicItem::description()
{
    return description_;
}


string MagicItem::ToString()
{
    stringstream ss;
    ss<<Item::ToString()<<", "<<description()<<", requires "<<mana_required()<<" mana";
    return ss.str();
}