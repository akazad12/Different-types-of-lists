//
//  ListType.cpp
//  CSC
//
//  Created by Abul Azad on 11/12/17.
//  Copyright © 2017 Group 6. All rights reserved.
//
//MAIN PROGRAM
#include "ListType.hpp"
#include <iostream>
#include "GameEntry.hpp"
#include "SLinkedList.cpp"
using namespace std;

//GAME ENTRY LIST CREATOR
//creates singly linked list containing game entry values
void ListType::RunGameEntry(int m)	{
    string username;int score=0;    //initializing future user input
    SLinkedList<GameEntry> G(m);    // initialing linked list object and setting max size of list
    cout<<"To exit enter -1 for both Score and Username"<<endl;
    while (username!="-1"){//if user input = -1, program ends
        cout<<"What is the username: "<<endl;
        cin>>username;
        cout<<"What is the score: "<<endl;
        cin >> score;
        //If List is not full, user input is added to list
        try{
             G.addFront(GameEntry (username,score));
            
        }
        //exception is called when list is full
        catch(ListFullException e)
        //If list is full, Game Entry input can be added only if
        //game entry score is higher than any values in the list
        {
            cout << "I had an exception: " << e.getError();
            cout<<"Modifying if score is greater than minimum score in List"<<endl;
            G.minFindandReplace(GameEntry (username,score));
        }
        G.output(); //outputs values in the list
    }
    
}
//INTEGER LIST CREATOR
//creates singly lijnked list containing integer values
void ListType::RunIntEntry(int m){
    int value=0;//initializing future user input
    SLinkedList<int> I(m);// initialing linked list object and setting max size of list
    cout<<"To exit enter -1 "<<endl;
    while (value!=-1){//if user input = -1, program ends
        cout<<"What is your value: "<<endl;
        cin>>value;
        //If List is not full, user input is added to list
        try{
            I.addFront(value);
        }
        //exception is called when list is full
        catch(ListFullException e)
        //If list is full, user input can be added only if
        //input is higher than any values in the list
        {
            cout << "I had an exception: " << e.getError();
            cout<<"Modifying if input greater than minimum value in List"<<endl;
            I.minFindandReplace(value);
        }
        
        I.output(); //outputs values in the list
    }

}
//DOUBLE LIST CREATOR
//creates singly lijnked list containing double values
void ListType::RunDoubleEntry(int m){
    double value=0;//initializing future user input
    SLinkedList<double> D(m);// initialing linked list object and setting max size of list
    cout<<"To exit enter -1 "<<endl;
    while (value!=-1){//if user input = -1, program ends
        cout<<"What is your value: "<<endl;
        cin>>value;
        //If List is not full, user input is added to list
        try{
            D.addFront(value);

        }
        //exception is called when list is full
        catch(ListFullException e)
        //If list is full, user input can be added only if
        //input is higher than any values in the list

        {
            cout << "I had an exception: " << e.getError();
            cout<<"Modifying if input greater than minimum value in List"<<endl;
            D.minFindandReplace(value);
        }
        D.output();//outputs values in the list
    }
  
}
