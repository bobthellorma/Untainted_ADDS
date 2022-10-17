#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include <string>
#include <vector>
#include <sstream>

int main()
{
    // Take in line of input
    std::string input;
    std::getline(std::cin, input);
    //std::cout << input.at(0);

    // Find spaces
    int spaces[100];
    int numspaces;
    for (int i = 0; i < input.size(); i++)
    {
        if (input.at(i) == 32)
        {
            spaces[numspaces] = input[i];
            numspaces++;
        }
    }

    

    
    char first = input[input.size()-3];
    char second = input[input.size()-1];
    std::string stringedparam = {first,second};
    int intparam = std::stoi(stringedparam);
    int param1 = intparam/10;
    int param2 = intparam%10;

    // array condition
    int arr[4] = {1,2,3,4};
    if (input.at(0) == 53){
        arr[0] = 5;
        arr[1] = 2;
        arr[2] = 7;
        arr[3] = 10;
        }
    else if (input.at(0) == 51){
        arr[0] = 3;
        arr[1] = 4;
        arr[2] = 1;
        arr[3] = 1;
    }
    else{
        arr[0] = 45;
        arr[1] = 20;
        arr[2] = 2;
        arr[3] = 10;
    }
    int size = sizeof(arr)/sizeof(arr[0]);


    // get std::string command
    char sixthfromend = input.at(input.size()-6);
    char fifth = input.at(input.size()-5);
    std::string command;
    int upto;
    {
        if (sixthfromend == 32) // if the character is only one
        {
            command = {fifth};
        }
        else // if two characters
        {
            command = {sixthfromend, fifth};
        }
    }
    // std::cout << command << std::endl; // command is correct


    // Create Linked List with inputs
    LinkedList use = LinkedList(arr,size);

    // Function Map
    if (command == "AF")
    {
        use.addFront(param1);
    }
    else if (command == "AE")
    {
        use.addEnd(param1);
    }
    else if (command == "AP")
    {
        use.addAtPosition(param1,param2);
    }
    else if (command == "S")
    {
        use.search(param1);
    }
    else if (command == "DF")
    {
        use.deleteFront();
    }
    else if (command == "DE")
    {
        use.deleteEnd();
    }
    else if (command == "DP")
    {
        use.deletePosition(param1);
    }
    else if (command == "GI")
    {
        use.getItem(param1);
    }

    use.printItems();

}