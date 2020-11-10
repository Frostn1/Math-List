// Souce Code_mathlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "M_List.h"

int main()
{
    //{-1,40,-1,-1,2560};
    //{ -1,405,-1,-1,-1,5 };
    int arr[5] = { -1,2,-1,-1,5 };
    M_List lst(arr,5);
    std::cout << lst.get_a1();
    
    //first = lst[3];
    
    //std::cout << "Hello World!\n" << first;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
