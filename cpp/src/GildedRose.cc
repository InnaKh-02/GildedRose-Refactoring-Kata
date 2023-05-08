#include "GildedRose.h"

using namespace std;

const string itemNames[3] = {"Aged Brie", "Backstage passes to a TAFKAL80ETC concert", "Sulfuras, Hand of Ragnaros"};

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
        if (items[i].name == itemNames[0])
        {
            incrementQuality(items[i].quality);
        }
        else if (items[i].name == itemNames[1])
        {
            if (items[i].sellIn < 6 )
            {
                incrementQuality(items[i].quality + 2);
            }
            else if (items[i].sellIn < 11 )
            {
                incrementQuality(items[i].quality + 1);
            }
            else
            {
                incrementQuality(items[i].quality);
            }
        }

        else if (items[i].name == itemNames[2])
        {
            items[i].quality += 0;
        }
        else
        {
            decrementQuality(items[i].quality);
        }

        items[i].sellIn -= (items[i].name != itemNames[2])? 1 : 0;

        if (items[i].sellIn < 0)
        {
            if (items[i].name == itemNames[0])
            {
                incrementQuality(items[i].quality);
            }
            else if (items[i].name == itemNames[1])
            {
                items[i].quality = 0;
            }
            else if (items[i].name == itemNames[2])
            {
                items[i].quality += 0;
            }
            else
            {
                decrementQuality(items[i].quality);
            }
        }
    }
}
