//
//  GameData.cpp
//  Super Mario Sunshine
//
//  Created by Lucas on 2/9/24.
//

#include "GameData.hpp"


GameData::GameData()
    : AquiredShines(0),
      AquiredCoins(0)
{
    //Leave space blank
}

int GameData::GetShines() const
{
    return AquiredShines;
}

int GameData::GetBlueCoins() const
{
    return AquiredCoins;
}

void GameData::AddShines(int shines)
{
    if (AquiredShines >= 0)
    {
        AquiredShines += shines;
    }
}

void GameData::AddBlueCoins(int coins)
{
    if (AquiredCoins >= 0)
    {
        AquiredCoins += coins;
    }
}

void GameData::ConvertBlueCoinsToShines()
{
    while (AquiredCoins >= 10)
    {
        AquiredCoins -= 10;
        AquiredShines += 1;
    }
}

bool GameData::CanMarioGoToCoronaMountain() const
{
    return AquiredShines >= 50;
}
