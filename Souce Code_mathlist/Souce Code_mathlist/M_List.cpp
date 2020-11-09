#include "M_List.h"
#include <math.h>
#include <iostream>

#define UNKNOWN -1
M_List::M_List(int a1, int d)
{
	_A1 = (double)a1;
	_D = (double)d;
}
M_List::M_List(int* arr)
{
	
	_A1 = (double)arr[0];
	_D = (double)arr[1] - arr[0];
	
}

M_List::M_List(double a1, int d)
{
	_A1 = a1;
	_D = (double)d;
}

M_List::M_List(double a1, double d)
{
	_A1 = a1;
	_D = d;
}

M_List::M_List(int a1, double d)
{
	_A1 = (double)a1;
	_D = d;
}

M_List::M_List(double* arr)
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
}
int M_List::get_index(double an)
{
	return (an - _A1) / _D + 1;
}
//{ int an } number to discover, returns said number index in the list

double M_List::get_number(int n)
{
	return _A1 + (n - 1) * _D;
}
//{ int n } index of number to discover, returns number of said index in the list

double M_List::operator[](int val)
{
	return _A1 + (val - 1) * _D;
}








E_List::E_List(int a1, int q)
{
	_A1 = (double)a1;
	_Q = (double)q;
}
E_List::E_List(int* arr)
{

	_A1 = (double)arr[0];
	_Q = (double)arr[1] / arr[0];

}

E_List::E_List(double a1, int q)
{
	_A1 = a1;
	_Q = (double)q;
}

E_List::E_List(double a1, double q)
{
	_A1 = a1;
	_Q = q;
}

E_List::E_List(int a1, double q)
{
	_A1 = (double)a1;
	_Q = q;
}

E_List::E_List(double* arr)
{
	_A1 = arr[0];
	_Q = arr[1] / arr[0];
}

E_List::E_List(double* arr, int size)
{
	double first = UNKNOWN,second = UNKNOWN;
	int indFirst = UNKNOWN, indSecond = UNKNOWN;
	int i = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != UNKNOWN && first == UNKNOWN)
		{
			first = arr[i];
			indFirst = i+1;
		}
		else if (arr[i] != UNKNOWN && first != UNKNOWN)
		{
			second = arr[i];
			indSecond = i+1;
			break;
		}
	}
}
int E_List::get_index(int an)
{
	return log(an * _Q / _A1) / log(_Q);
}
int E_List::get_index(double an)
{
	return log(an*_Q/_A1)/log(_Q);
}
//{ int an } number to discover, returns said number index in the list

double E_List::get_number(int n)
{
	return _A1 * pow(_Q ,(n - 1));
}
//{ int n } index of number to discover, returns number of said index in the list

double E_List::operator[](int val)
{
	
	return _A1 * pow(_Q, (val - 1));
}
