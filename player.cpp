#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <time.h>
#include "player.h"
using namespace std;

// Access the story flow of the game and develop the life path of the player step by step
string Player::getTrack(){

    lifetrack *trackPtr = root;
    string track = "";
    
    while (trackPtr -> status == occured){
        unsigned int i = 0;
        while (i < trackPtr -> lifetracks.size()){
            if (trackPtr -> lifetracks[i]-> status == occured){
                trackPtr = trackPtr -> lifetracks[i];
                track += to_string(i);
                break;
            }
            i++;
        }
        if (i == trackPtr -> lifetracks.size()) break;
    }
    return track;
}


// Print the current life path and develop to further branches
void Player::printTrack(){
    if (cont->cont != "") cout << cont->cont << endl;
    
    for (unsigned int i = 1; i <= cont->lifetracks.size(); i++){
        if (cont -> lifetracks[i - 1] -> decision != "")
        	cout << i << ". " << cont -> lifetracks[i - 1]-> decision << endl;
    }
}


// Process the choices by the player
void Player::selectTrack(unsigned int n){
    // Under the condition that the game is not yet ended
    if (cont->lifetracks.size() == 1) cont = cont->lifetracks[0];
    else{
        if (n <= 0 || n > cont->lifetracks.size()){
            cout << "Wrong choice. Please enter a right number!" << endl;
            return;
        }
        cont = cont->lifetracks[n - 1];
    }
    printTrack();
    cont->status = occured;

    // If there is nothing left and the game is ended 
    if (cont -> lifetracks.size() == 0){
        if (cont -> gameOver){
            cout << "The game ends here. Hope you have enjoyed your life!" << endl;
            exit(0);
        }
        // Select two random numbers to decide whether alive or dead by accident based on the "Randomness of Destiny"
		srand(time(0));
		int random_1 = rand()%10;
        int random_2 = rand()%11;
        
        if (random_1 > random_2){
            cout << "Unfortunately, you got a car crash unexpectedly and your life ends here." << endl;
            exit(0);
        }
        else{
            cout << "\"So we beat on, boats against the current, borne back ceaselessly into the past.\" -- <The Great Gatsby> " << endl;
            exit(0);
        }
    }
}



// Load the records of the life tracks by choices
void Player::load(char *argv){
    
    // Make use of the File Input
	ifstream infile;
    infile.open(argv, ios::in);
    if (!infile){
        cout << "Load file failed." << endl;
        exit(1);
    }
    // Read name first
    infile >> name;
    cout << "Hello " << name << "!" << endl;
    
	// Read the choices in the input file to make the life tracks
	string track;
    infile >> track;
    for (unsigned int i = 0; i < track.size(); ++i){
        cont->status = occured;
        cont = cont->lifetracks[track[i] - '0'];
    }
    cont->status = occured;
}


// Save player choices and information
void Player::save(){
    
    // Get the current time and include it into the file name
	char myTime[64];
    time_t t = time(0);
    strftime(myTime, sizeof(myTime), "%Y-%m-%d %H:%M:%S", localtime(&t));
    string fileName = name + myTime;
    
    // Make use of the File Output
	ofstream outfile;
    outfile.open(fileName, ios::out);
    outfile << name << endl;
    outfile << getTrack() << endl;
	
	// Close the file and ouput the status
    outfile.close();
    cout << "Saved game status: " << fileName << endl;
}
