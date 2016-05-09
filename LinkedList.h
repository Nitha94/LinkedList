//
//  LinkedList.h
//  homeworkten
//
//  Created by Nivetha Mahalakshmi Balasamy on 4/8/16.
//  Copyright © 2016 Nivetha Mahalakshmi Balasamy. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include"Node.h"

class LinkedList{
private:
    Node* start;
    Node* end;
    int list_size;
    
public:
    LinkedList();
    bool isEmpty();
    void printlist();
    Node* createnode(string name, int no);
    void addtostart(string item, int num);
    void addtoend(string item,int num);
    void deleteatstart();
    void deleteatend();
    void deleteitemname(string);
    void deleteitemnumber(int);
    void removeend();
    
};








#endif /* LinkedList_h */
