//
//  Node.h
//  homeworkten
//
//  Created by Nivetha Mahalakshmi Balasamy on 4/8/16.
//  Copyright © 2016 Nivetha Mahalakshmi Balasamy. All rights reserved.
//

#ifndef Node_h
#define Node_h

class Node{
    friend class LinkedList;
private:
    
    string item_name;
    int item_no;
    Node *next;
    
public:
    Node(string &,int);
    string getname();
    int getnumber();
    Node* getnext();
    
};




#endif /* Node_h */
