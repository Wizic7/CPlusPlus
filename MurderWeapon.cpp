#include <iostream>
#include <string>
#include <array>
/* 
This class is the parent class for the several weapons types and their descriptions 

Potential Weapons ideas
Club 
Sharp Stick

Gloves (Butler)
Ropes

Bad Fish
Blunderbus

Dynamite 
*/

class MurderWeapon {
    
    const std::array<std::string, 5> potentialMurderWeapons = {"Club", "Sharp Stick", "White Gloves", "Worn Rope", "Bad Fish"};

    public: 

    //Attributes
    std::string murderWeaponName;
    std::string weaponLocation; //Where will the weapon be in the game
    std::string murderWeaponDescription; //GRAB STRING FROM AN ARRAY OF POTENTIAL DESCRIPIONS 

    //Constructors
    void setupWeapon() /*Init Function*/ {
        ;    
    }

    std::string returnLocation(){
        return weaponLocation;
    }

}; 