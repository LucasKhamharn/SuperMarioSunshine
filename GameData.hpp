//
//  GameData.hpp
//  Super Mario Sunshine
//
//  Created by Lucas on 2/9/24.
//

#ifndef GameData_hpp
#define GameData_hpp

class GameData
{
public:
    //constructor
    GameData();
    
    //public functions
    int GetShines() const;
    int GetBlueCoins() const;
    
    void AddShines(int shines);
    void AddBlueCoins(int coins);
    
    void ConvertBlueCoinsToShines();
    
    bool CanMarioGoToCoronaMountain() const;
    
private:
    int AquiredShines;
    int AquiredCoins;
    
};




#endif /* GameData_hpp */
