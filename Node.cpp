//
//  Node.cpp
//  homeworkten
//
//  Created by Nivetha Mahalakshmi Balasamy on 4/8/16.
//  Copyright © 2016 Nivetha Mahalakshmi Balasamy. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Node.h"

Node::Node(string& i_name,int i_no):item_name(i_name),item_no(i_no){
    this->next = NULL;
    
}
// Node constructor

string Node::getname(){
    return item_name;
}

int Node::getnumber(){
    return item_no;
}

Node* Node::getnext(){
    return next;
}