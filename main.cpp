#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include "player.h"
#include "lifetracks.h"
using namespace std;

int main(int argc, char *argv[]){
    Player player;
    if (argc == 1){
        //Game starts here
        string name;
        cout << "Hey! Welcome to the Game: The Randomness of Destiny. You are going to experience a series of life events and random accidents. Please enter your name here:" << endl;
        cin >> name;
        cout << "Hello " << name << "!" << endl;
        player.giveName(name);
        
        srand(time(0));
        int gender = rand() % 2;; // 1 for Male, 0 for Female
		if (gender == 0) 
			cout << "You are born as a female. \n";
		else 
			cout << "You are born as a male. \n";
    }
    else
        player.load(argv[1]);
    
    cout << "Please input choice numbers to choose for options (1 or 2). Enter \"save\" if you want to save the current status.\n" << endl;
    player.printTrack();
    string choice;
    
    // Read input command or choice by the player
    while (cin >> choice){
    	// Save the game if the player choose this option
        if (choice == "save") player.save();
        // Process the choice by turning the input into an integer
		else{
            int n;
            if (choice == "\n")
                n = -1;
            else
                n = (int)stoi(choice);
            player.selectTrack(n);
        }
    }
    return 0;
}
