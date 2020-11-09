#include "M_List.h"
#include <iostream>
M_List::M_List(int a1, int d)
{
	_A1 = a1;
	_D = d;
}
M_List::M_List(int* arr)
{
	
	_A1 = arr[0];
	_D = arr[1] - arr[0];
	
}

void M_List::add(int an, int n)
{

}
//{ int an } number to add/discover, { int n } spot of said number
void M_List::add(int an)
{

}
//{ int an } number to add/discover, should know where to insert it

int M_List::get_index(int an)
{
	return (an - _A1 )/ _D  + 1;
}//{ int an } number to discover, returns said number index in the list

int M_List::get_number(int n)
{
	return _A1 + (n - 1) * _D;
}
//{ int n } index of number to discover, returns number of said index in the list

int M_List::operator[](int val)
{
	return _A1 + (val - 1) * _D;
}
