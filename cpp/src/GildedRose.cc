#include "GildedRose.h"

GildedRose::GildedRose(vector<Item> & items) : items(items)
{}
    
void GildedRose::updateQuality() 
{
    for (int i = 0; i < items.size(); i++)
    {
        if (items[i].name != "Aged Brie" && items[i].name != "Backstage passes to a TAFKAL80ETC concert")
        {
            if (items[i].quality > 0)
            {
                if (items[i].name != "Sulfuras, Hand of Ragnaros")
                {
                    items[i].quality = items[i].quality - 1;
                }
            }
        }
        else
        {
            if (items[i].quality < 50)
            {
#include "GildedRose.h"

using namespace std;

GildedRose::GildedRose(vector<Item>& items) : items(items) {}

void incrementQuality(int a)
{
    if (a < 50)
    {
        ++a;
    }
}

void decrementQuality(int a)
{
    if (a > 0)
    {
        --a;
    }
}

void GildedRose::updateQuality()
{
    for (int i = 0; i < items.size(); ++i)
    {
        if (items[i].name == "Aged Brie")
        {
            incrementQuality(items[i].quality);
        }
        else if (items[i].name == "Backstage passes to a TAFKAL80ETC concert")
        {
            incrementQuality(items[i].quality);
            if (items[i].sellIn < 11 )
            {
                incrementQuality(items[i].quality);
            }
            if (items[i].sellIn < 6 )
            {
                incrementQuality(items[i].quality);
            }
        }

        else if (items[i].name != "Sulfuras, Hand of Ragnaros")
        {
            decrementQuality(items[i].quality);
        }
        if (items[i].name != "Sulfuras, Hand of Ragnaros")
        {
            --items[i].sellIn;
        }
        if (items[i].sellIn < 0)
        {
            if (items[i].name == "Aged Brie")
            {
                incrementQuality(items[i].quality);
            }
            else if (items[i].name == "Backstage passes to a TAFKAL80ETC concert")
            {
                items[i].quality = 0;
            }
            else if (items[i].name != "Sulfuras, Hand of Ragnaros")
            {
                decrementQuality(items[i].quality);
            }
        }
    }
}
