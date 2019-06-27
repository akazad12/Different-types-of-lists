//
//  SLinkedList.hpp
//  CSC
//
//  Created by Abul Azad on 11/12/17.
//  Copyright © 2017 Group 6. All rights reserved.
//

#ifndef SLinkedList_hpp
#define SLinkedList_hpp
#include <iostream>
#include "SNode.h"
#include "ListFullException.h"


template <typename E>
class SLinkedList {				// a singly linked list
public:
    SLinkedList(int);				// empty list constructor
    ~SLinkedList();				// destructor
    bool empty() const;				// is list empty?
    const E& front() const;			// return front element
    void advance();
    void addFront(const E& e) throw(ListFullException);			// add to front of list
    void removeFront();				// remove front item list
    void minFindandReplace(const E& e) ;
    void output();
private:
    SNode<E> *head;				// head of the list
    int counter=0;
    int maxSize;                //user defined max size
    SNode<E> *cursor;           //Used to navigate through list
};



#endif /* SLinkedList_hpp */
