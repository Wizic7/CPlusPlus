#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>

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

    protected:
    
    const std::array<std::string, 5> potentialMurderWeaponDescriptions = {
    "This item was once used to swat flies, but one day it swatted more than just a bug.",
    "This item was a toothpick for a giant, until it found a new purpose.",
    "This item was pristine until it got involved in a messy situation.",
    "This item was used in a tug-of-war game that ended in a surprising twist.",
    "This item was so smelly, it could knock out anyone who came too close.",
    };

    const std::array<std::string, 5> potentialMurderWeaponLocations = {
    "This weapon is in the Grand Ballroom which is an opulent space with high ceilings, crystal chandeliers, and polished wooden floors. The room is adorned with elegant draperies and large mirrors, reflecting the light from the grand windows. It's the perfect setting for lavish parties and elegant dances.", 
    "This weapon is in the Formal Dining Room which is a stately room with a long, mahogany dining table surrounded by high-backed chairs. The walls are lined with rich tapestries and portraits of ancestors. A grand fireplace adds warmth, while silver candelabras and fine china set the scene for exquisite dinners.", 
    "This weapon is in the Music Room which is a refined space dedicated to musical pursuits, featuring a grand piano, a harp, and various string instruments. The room is decorated with plush carpets, velvet curtains, and ornate music stands. It's a place where guests can enjoy intimate concerts and recitals.", 
    "This weapon is in the Conservatory which is a bright and airy room filled with exotic plants and flowers. Large glass windows and a glass ceiling allow natural light to flood the space. Wicker furniture and marble statues add to the charm, making it an ideal spot for afternoon tea and relaxation.", 
    "This weapon is in the Library which is a cozy and intellectual retreat with towering bookshelves filled with leather-bound volumes. The room features a large wooden desk, comfortable armchairs, and a roaring fireplace. Soft gas lamps provide a warm glow, creating a perfect environment for reading and contemplation."
    };

    public: 

    //Attributes
    std::string murderWeaponName = "Default Name";
    std::string weaponLocation = "Default Location"; //Where will the weapon be in the game
    std::string murderWeaponDescription = "Default Description"; //GRAB STRING FROM AN ARRAY OF POTENTIAL DESCRIPIONS 

    //Constructors
    public : virtual void setupWeapon(){;}; /*Init Function*/

    public: std::string returnLocation(){
        return weaponLocation;
    }

    public: std::string returnMurderWeaponName() {
        return murderWeaponName;
    }

    public: std::string returnMurderWeaponDescription() {
        return murderWeaponDescription;
    }

    public: std::string returnWeaponData(){
        std::string weaponSummary = murderWeaponName + "," + murderWeaponDescription + "," + weaponLocation;
        return weaponSummary;
    }

    // Function to pick a random item from an array of strings
    std::string pickRandomItem(const std::array<std::string, 5>& items) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomIndex = std::rand() % items.size();
    return items[randomIndex];
}


}; 


class Club : public MurderWeapon {

    void setupWeapon() override {
    std::string murderWeaponName = "Club";
    std::string murderWeaponDescription = pickRandomItem(potentialMurderWeaponDescriptions);
    std::string weaponLocation = pickRandomItem(potentialMurderWeaponLocations); 
    }

};

class SharpStick : public MurderWeapon {
        void setupWeapon() override {
    std::string murderWeaponName = "A Sharp Stick";
    std::string murderWeaponDescription = pickRandomItem(potentialMurderWeaponDescriptions);
    std::string weaponLocation = pickRandomItem(potentialMurderWeaponLocations); 
    }

};

class WhiteGlove : public MurderWeapon {
        void setupWeapon() override {
    std::string murderWeaponName = "A White Glove";
    std::string murderWeaponDescription = pickRandomItem(potentialMurderWeaponDescriptions);
    std::string weaponLocation = pickRandomItem(potentialMurderWeaponLocations); 
    }

};

class WornRope : public MurderWeapon {
    public:
    void setupWeapon() override {
    std::string murderWeaponName = "A Worn Rope";
    std::string murderWeaponDescription = pickRandomItem(potentialMurderWeaponDescriptions);
    std::string weaponLocation = pickRandomItem(potentialMurderWeaponLocations); 
    }

};

class RottenFish : public MurderWeapon {
        public: void setupWeapon() override {
    std::string murderWeaponName = "A Rotten Fish";
    std::string murderWeaponDescription = pickRandomItem(potentialMurderWeaponDescriptions);
    std::string weaponLocation = pickRandomItem(potentialMurderWeaponLocations); 
    }

    std::string murderWeaponName = "Hello World";
};


int main(){ //example main function for testing purposes.
    RottenFish poison;
    poison.setupWeapon();
    std::cout << poison.returnWeaponData();

    
}
