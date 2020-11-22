#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "lifetracks.h"

using std::string;
using std::vector;

class Player{
private:
    string name;
    lifetrack *cont;
    lifetrack *root;
    string getTrack();

public:
    Player(): name(""){
        root = makeTrack();
        cont = root;
        cont->status = occured;
    };

    void giveName(string name_) { name = name_; };
    void printTrack();
    void selectTrack(unsigned int n);
    void load(char *argv);
	void save();
};

#endif
