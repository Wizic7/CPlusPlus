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
    
    const std::array<std::string, 5> potentialMurderWeaponDescriptions = {
    "This item was once used to swat flies, but one day it swatted more than just a bug.",
    "This item was a toothpick for a giant, until it found a new purpose.",
    "This item was pristine until it got involved in a messy situation.",
    "This item was used in a tug-of-war game that ended in a surprising twist.",
    "This item was so smelly, it could knock out anyone who came too close.",
    };

    public: 

    //Attributes
    std::string murderWeaponName;
    std::string weaponLocation = "Hello World"; //Where will the weapon be in the game
    std::string murderWeaponDescription; //GRAB STRING FROM AN ARRAY OF POTENTIAL DESCRIPIONS 

    //Constructors
    void setupWeapon() /*Init Function*/ {
        ;    
    }

    std::string returnLocation(){
        return weaponLocation;
    }

}; 


class Club : public MurderWeapon {

};

class SharpStick : public MurderWeapon {

};

class WhiteGlove : public MurderWeapon {

};

class WornRope : public MurderWeapon {

};

class RottenFish : public MurderWeapon {

};


int main(){ //example main function for testing purposes.
    RottenFish poison;
    
    std::string hello = poison.returnLocation(); 
    
    std::cout << hello << std::endl;

}
