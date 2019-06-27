//
//  SLinkedList.cpp
//  CSC
//
//  Created by Abul Azad on 11/12/17.
//  Copyright © 2017 Group 6. All rights reserved.
//

#include "SLinkedList.hpp"
#include "SNode.h"
#include <iostream>

using namespace std;
template <typename E>
SLinkedList<E>::SLinkedList(int m)				// constructor
: head(NULL),  maxSize(m) { }

template <typename E>
bool SLinkedList<E>::empty() const			// is list empty?
{ return head == NULL; }

template <typename E>
const E& SLinkedList<E>::front() const		// return front element
{ return head->elem;}

template <typename E>
SLinkedList<E>::~SLinkedList()			// destructor
{ while (!empty()) removeFront(); }

//MODIFIED ADDFRONT FUNCTION
//Uses exception specification to call the exception handling class function
template <typename E>
void SLinkedList<E>::addFront(const E& e) throw(ListFullException) {		// add to front of list
    //if counter is full then list is full, runs exception
    //Throws this exception, string tells user why exception thrown
    if (counter ==maxSize){
        throw ListFullException("The list is full\n");
    }
    //else creates new node with the given input as data
    //counter used to make sure that list size does not go past user definition
    
        SNode<E>* v = new SNode<E>;				// create new node
        v->elem = e;					// store data
        v->next = head;					// head now follows v
        head = v;
        counter++;
}
template <typename E>
void SLinkedList<E>::removeFront() {			// remove front item
    SNode<E>* old = head;				// save current head
    head = old->next;					// skip over old head
    delete old;						// delete the old head
    counter--;
}
//OUTPUT FUNCTION
//Uses cursor to go through list and outputs all the values in the list
template<typename E>
void SLinkedList<E>::output(){
    cursor = head;
    cout<<"LIST VALUES:\n";
    while(cursor!=NULL){//iterate throught the list while cursor is not equal to NULL
        cout<<cursor->elem<<endl;//output the values inside of cursor element
        cursor=cursor->next;    //increment cursor
    }
}

//FIND MINIMUM NODE VALUE AND REPLACE FUNCTION
//Runs while loop to find lowest node value in the singly linked list
//If value user input is greater than the lowest value, user input replaces lowest value
template<typename E>
void SLinkedList<E>::minFindandReplace(const E& newinput) {
    cursor=head;
    SNode<E> *min ;
    min = cursor;
     while (cursor!=NULL){
        //Finds minimum node value in the list
        if (cursor->elem < min->elem){
            min = cursor;
        }
        cursor = cursor->next;  //increment cursor to go to the next value in the list
    }
    if (min->elem < newinput){  //finds if user input is greater than minimum node value
        min->elem = newinput;   //replace with user input
    }
    
}

