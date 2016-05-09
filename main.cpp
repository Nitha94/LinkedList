//
//  main.cpp
//  homeworkten
//  HOMEWORK-10 *04/10/2016*
//  Created by Nivetha Mahalakshmi Balasamy on 4/8/16.
//  Copyright © 2016 Nivetha Mahalakshmi Balasamy. All rights reserved.
//

#include <iostream>
using namespace std;

#include "Node.h"
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
    
    int choice;
    int number;
    int deleteitemnumber;
    string deleteitemname;
    string name;
    LinkedList list;
    do{
    std::cout<<"MENU\n";
    std::cout<<"1.  Add a new node at the beginning\n";
    std::cout<<"2.  Add a new node at the end\n";
    std::cout<<"3.  Remove the beginning node\n";
    std::cout<<"4.  Remove the end node\n";
    std::cout<<"5.  Remove a node from the list by entering an item number\n";
    std::cout<<"6.  Remove a node from the list by entering an item name\n";
    std::cout<<"7.  Print out the list\n";
    std::cout<<"8.  Quit the program\n";
    std::cout<<"Please Enter your choice:";
    std::cin>>choice;
    switch(choice){
        case 1:
            std::cout<<"Please Enter item number:\n";
            std::cin>>number;
            std::cout<<"Please Enter item name:\n";
            std::cin>>name;
            list.addtostart(name,number);
            list.printlist();
            break;
        case 2:
            std::cout<<"Please Enter item number:\n";
            std::cin>>number;
            std::cout<<"Please Enter item name:\n";
            std::cin>>name;
            list.addtoend(name, number);
            list.printlist();
            break;
        case 3:
            list.deleteatstart();
            list.printlist();
            break;
        case 4:
            list.removeend();
            list.printlist();
            break;
        case 5:
            std::cout<<"Enter item number you want to delete:\n";
            std::cin>>deleteitemnumber;
            list.deleteitemnumber(deleteitemnumber);
            list.printlist();
            break;
        case 6:
            std::cout<<"Enter the item name you want to delete:\n";
            std::cin>>deleteitemname;
            list.deleteitemname(deleteitemname);
            list.printlist();
            break;
        case 7:
            list.printlist();
            break;
        case 8:
            exit(1);
            break;
    }
    }while(1);
    return 0;
}
