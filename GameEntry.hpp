//
//  GameEntry.hpp
//  CSC
//
//  Created by Abul Azad on 11/6/17.
//  Copyright © 2017 Group 6. All rights reserved.
//

#ifndef GameEntry_hpp
#define GameEntry_hpp

#include <iostream>
using namespace std;

class GameEntry {				// a game score entry
private:
    string name;				// player's name
    int score;					// player's score
public:
    GameEntry(const string& n="", int s=0);	// constructor
    string getName() const;			// get player name
    int getScore() const;			// get score
    void setScore(int s);
    void setName(string n);
    
    //overloads < to find if user input is less than current node value
    bool operator<(const GameEntry &b)
    {
        return getScore() < b.getScore();
    }
    //Overloads the output operator to output values in a Game Entry node
    friend ostream& operator<<(ostream& os, GameEntry &x)
    {
        os << "Name: "<<x.getName() << "\tScore: " << x.getScore();
        return os;
    }
    //Overloads the = operator to assign user input to current node value
   GameEntry& operator=(const GameEntry &g){
       score = g.getScore();
       name = g.getName();
       return *this;
    }
    //Overloads comparison operator to find if user input is equal to the current node value
    bool operator==(const GameEntry& r)
    {
        return getScore() == r.getScore() && getName() == r.getName();
    }
    
};
#endif /* GameEntry_hpp */
