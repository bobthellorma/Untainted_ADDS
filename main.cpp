#include <iostream>
#include "Node.h"
#include "LinkedList.h"
#include <string>

int main()
{
    // Set Inputs
    int arr[] = {5,2,7,10};
    int size = sizeof(arr);

    // Set Command
    std::string command = "AF";

    // Set Parameters
    int param1 = 3;
    int param2 = 9;

    // Create Linked List with inputs
    LinkedList use = LinkedList(arr,size);

    // Check creation was successful
    use.printItems();

    /*

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
    */
}