//
//  LinkedList.cpp
//  homeworkten
//
//  Created by Nivetha Mahalakshmi Balasamy on 4/8/16.
//  Copyright © 2016 Nivetha Mahalakshmi Balasamy. All rights reserved.
//

#include <iostream>
using namespace std;

#include "LinkedList.h"

LinkedList::LinkedList(){
    this->start = NULL;
    this->end = NULL;
    list_size=0;
}


Node* LinkedList::createnode(string name, int num){
    Node* newnode = new Node(name,num);
    return newnode;
}

bool LinkedList::isEmpty(){
    return start==0;
}

void LinkedList::printlist(){
    Node* currptr = start;
    if(isEmpty())
    std::cout<<"The Shopping list is empty\n";
    else{
        while(currptr!=0){
            std::cout<<currptr->item_no<<"\t";
            std::cout<<currptr->item_name<<"\n";
            currptr=currptr->next;
        }
}
}

void LinkedList::addtostart(string item, int no){
    Node* new_node = createnode(item,no);
    if(isEmpty())
    start=end=new_node;
    else{
        new_node->next=start;
        start=new_node;
    }
}

void LinkedList::addtoend(string item, int num){
    Node *new_node = createnode(item, num);
    if(isEmpty())
    start=end=new_node;
    else{
        end->next=new_node;
        end=new_node;
    }
    
}

void LinkedList::deleteatstart(){
    if(isEmpty()){
        std::cout<<"The Shopping list is empty\n";
    }
    else{
    Node* currptr;
    currptr=start;
    start=start->next;
    delete currptr;
    }
    
}

void LinkedList::deleteatend(){
    if(start!=NULL){
        Node* currptr=start;
        if(end->next!=NULL){
            Node* temptr = nullptr;
            while(currptr->next!=NULL){
                temptr=currptr;
                currptr=currptr->next;
                }
            temptr->next=NULL;
            delete currptr;
        }
        else{
            delete start;
            start=NULL;
        }
        list_size--;
    }
}

void LinkedList::removeend(){
    if(isEmpty()){
        std::cout<<"The list is empty\n";
    }
    else{
        Node* temptr=end;
        if(start==end)
        start=end=0;
        else{
            Node* currptr=start;
            while(currptr->next!=end)
            currptr=currptr->next;
            
            end=currptr;
            currptr->next=0;
        }
        delete temptr;
        
    }
}

void LinkedList::deleteitemnumber(int num){
    Node* prev= start;
    Node* nexttoprev=start->next;
    while(nexttoprev!=NULL){
        if(nexttoprev->item_no==num){
            break;
        }
        else{
            prev=nexttoprev;
            nexttoprev=nexttoprev->next;
        }
    }
        if(start==NULL){
            std::cout<<"The item is not found\n";
        }
       else if(start->item_no==num){
        deleteatstart();
        }
      else if(nexttoprev==NULL){
        std::cout<<"The item is not found\n";
       }
       else {
            std::cout<<"Deleting "<<nexttoprev->item_no<<endl;
            prev->next=nexttoprev->next;
            delete nexttoprev;
        }
    
    }

void LinkedList::deleteitemname(string item){
    Node* prev=start;
    Node* nexttoprev=start->next;
    while(nexttoprev!=NULL){
        if(nexttoprev->item_name==item){
            break;
        }
        else{
            prev=nexttoprev;
            nexttoprev=nexttoprev->next;
        }
    }// end of while
    if(start==NULL){
        std::cout<<"The item is not found\n";
    }
    else if(start->item_name==item){
        deleteatstart();
    }
    else if(nexttoprev==NULL){
        std::cout<<"The item is not found\n";
    }
    else{
        std::cout<<"Deleting"<<nexttoprev->item_name<<endl;
        prev->next=nexttoprev->next;
        delete nexttoprev;
    }
    
    
}































