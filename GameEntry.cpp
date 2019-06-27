//
//  GameEntry.cpp
//  CSC
//
//  Created by Abul Azad on 11/6/17.
//  Copyright © 2017 Group 6. All rights reserved.
//

#include "GameEntry.hpp"
using namespace std;
GameEntry::GameEntry(const string& n, int s)	// constructor
: name(n), score(s) { } // accessors
string GameEntry::getName() const { return name; }
int GameEntry::getScore() const { return score; }
