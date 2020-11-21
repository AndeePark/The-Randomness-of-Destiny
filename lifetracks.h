#ifndef LIFETRACKS_H
#define LIFETRACKS_H

#include <string>
#include <vector>

using std::string;
using std::vector;

//Flag the status of each event
typedef enum{
    notOccured,
    occured
} lifeStatus;

struct lifetrack{
    // The turning point choices and the details of option results after passing each turning point
    string decision;
    string cont;
    
    //double prob; // The probability of encountering some bad accidents and game overs
    lifeStatus status;
    vector<lifetrack *> lifetracks; // Make use of dynamic memory management
    
    int remaining; //The number of remaining life events to be finished
    bool gameOver;
    lifetrack(string decision_, string cont_)
        :decision(decision_), cont(cont_)
    {
        status = notOccured;
        remaining = 0;
        gameOver = false;
    }
};

lifetrack *makeTrack();

#endif
