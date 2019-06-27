//
//  ListFullException.h
//  CSCI373 Proj2
//
//  Created by Abul Azad on 11/15/17.
//  Copyright © 2017 Group 6. All rights reserved.
//

#ifndef ListFullException_h
#define ListFullException_h
#include <iostream>
#include <string>
using namespace std;

//EXCEPTION HANDLING CLASS
//constructor sets the error message
//getError() retrieves the error message
class ListFullException{
public:
    ListFullException(const string err)
    :errMsg(err){}
    string getError(){return errMsg;}
private:
    string errMsg;
    
};

 
#endif /* ListFullException_h */
