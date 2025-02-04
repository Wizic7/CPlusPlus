// * For questions on this class, see Allyn
#include <string>

class Player {
// TODO player stats needed
    public:
    
    //! there may be an error on this string declaration, but I cannot find it.
    std::string playerName = "Ooka Ooka";
    // ? The planning documentation says we want to implement a player inventory, but it is unclear what we are going to be putting in the inventory. We need to rediscuss this so I know how to implement it.

    // TODO the size of this array will need to be adjusted later. It is currently set to 3, but it we will need expanded as we decide the specifics of the game.
    int journalSize = 3;
    Clue* clueJournal = new Clue[journalSize];
    for (int i = 0; journalSize < journalSize; i++)
    {
        clueJournal[i] = clueJournal();//TODO this will need to be updated with specific parameters later on.
    }

    Player() {}
};
    // Sources:
    // Google's AI was used to refamiliarzie myself with the basic syntax for class declaration, constructers and member functions in C++.
    // https://www.geeksforgeeks.org/how-to-initialize-array-of-objects-with-parameterized-constructors-in-c/