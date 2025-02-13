#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
#include <ctime>

/* 
********************************* HOW TO USE: *******************************************************

When created, call setupWeapon(). ng tasks.json and launch.json files in your projectThis will create a random weapon with a random description, name, and location. 

call returnWeaponData() to return a 3 value CSV string. "murderWeaponName, murderWeaponLocation, murderWeaponDescription" is the format. 

call returnmurderWeaponName(), returnMurderWeaponDescription() or returnMurderWeaponLocation() for the individual values. 

*****************************************************************************************************
*/

class MurderWeapon
{

protected:
    const std::array<std::string, 5> potentialMurderWeaponName = {
        "Club",
        "SharpStick",
        "WhiteGlove",
        "WornRope",
        "RottenFish"
    };

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
    // Attributes
    std::string murderWeaponName = "Default Name";
    std::string murderWeaponLocation = "Default Location";             // Where will the weapon be in the game
    std::string murderWeaponDescription = "Default Description"; // GRAB STRING FROM AN ARRAY OF POTENTIAL DESCRIPIONS

    // Constructors
public:
    void setupWeapon()
    {

        int seed = std::time(nullptr);
        std::srand(seed);

        murderWeaponName = potentialMurderWeaponName[std::rand() % 5];
        murderWeaponLocation = potentialMurderWeaponLocations[std::rand() % 5];
        murderWeaponDescription = potentialMurderWeaponDescriptions[std::rand() % 5];
    };

public:
    std::string returnWeaponData()
    {
        //Returns a csv
        return murderWeaponName + ", " + murderWeaponLocation + ", " + murderWeaponDescription + ",";
    };

public:
    std::string returnmurderWeaponName()
    {
        return murderWeaponName;
    };

public:
    std::string returnMurderWeaponDescription()
    {
        return murderWeaponDescription;
    };

public:
    std::string returnMurderWeaponLocation()
    {
        return murderWeaponLocation;
    };
};

// // uncomment for testing. 

// int main() 
// {
//     MurderWeapon poison;
//     poison.setupWeapon();
//     std::cout << poison.returnWeaponData();

//     std::cout << "\n\n" << poison.returnmurderWeaponName() << "\n\n" << poison.returnMurderWeaponDescription() << "\n\n" << poison.returnMurderWeaponLocation() << "\n\n";

//     return 0;
// };
