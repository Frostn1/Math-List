#include "M_List.h"
#include <math.h>
#include <iostream>

#define UNKNOWN -1
M_List::M_List(int a1, int d)
{
	_A1 = (float)a1;
	_D = (float)d;
}
M_List::M_List(int* arr)
{
	
	_A1 = (float)arr[0];
	_D = (float)arr[1] - arr[0];
	
}

M_List::M_List(float a1, int d)
{
	_A1 = a1;
	_D = (float)d;
}

M_List::M_List(float a1, float d)
{
	_A1 = a1;
	_D = d;
}

M_List::M_List(int a1, float d)
{
	_A1 = (float)a1;
	_D = d;
}

M_List::M_List(float* arr)
{
	_A1 = arr[0];
	_D = arr[1] - arr[0];
}

M_List::M_List(float* arr, int size)
{
	float first = UNKNOWN, second = UNKNOWN;
	int indFirst = UNKNOWN, indSecond = UNKNOWN;
	int i = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != UNKNOWN && first == UNKNOWN)
		{
			first = arr[i];
			indFirst = i + 1;
		}
		else if (arr[i] != UNKNOWN && first != UNKNOWN)
		{
			second = arr[i];
			indSecond = i + 1;
			break;
		}
	}
	indSecond -= indFirst - 1;

	_D = (second-first)/(indSecond-1);
	_A1 = first-_D*(indFirst-1);
}
M_List::M_List(int* arr, int size)
{
	int first = UNKNOWN, second = UNKNOWN;
	int indFirst = UNKNOWN, indSecond = UNKNOWN;
	int i = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != UNKNOWN && first == UNKNOWN)
		{
			first = arr[i];
			indFirst = i + 1;
		}
		else if (arr[i] != UNKNOWN && first != UNKNOWN)
		{
			second = arr[i];
			indSecond = i + 1;
			break;
		}
	}
	indSecond -= indFirst - 1;

	_D = (second - first) / (indSecond - 1);
	_A1 = first - _D * (indFirst - 1);
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
int M_List::get_index(float an)
{
	return (an - _A1) / _D + 1;
}
//{ int an } number to discover, returns said number index in the list

float M_List::get_number(int n)
{
	return _A1 + (n - 1) * _D;
}
//{ int n } index of number to discover, returns number of said index in the list

float M_List::operator[](int val)
{
	return _A1 + (val - 1) * _D;
}

float M_List::get_a1()
{
	return _A1;
}
float M_List::get_d()
{
	return _D;
}








E_List::E_List(int a1, int q)
{
	_A1 = (float)a1;
	_Q = (float)q;
}
E_List::E_List(int* arr)
{

	_A1 = (float)arr[0];
	_Q = (float)arr[1] / arr[0];

}

E_List::E_List(float a1, int q)
{
	_A1 = a1;
	_Q = (float)q;
}

E_List::E_List(float a1, float q)
{
	_A1 = a1;
	_Q = q;
}

E_List::E_List(int a1, float q)
{
	_A1 = (float)a1;
	_Q = q;
}

E_List::E_List(float* arr)
{
	_A1 = arr[0];
	_Q = arr[1] / arr[0];
}

E_List::E_List(float* arr, int size)
{
	float first = UNKNOWN, second = UNKNOWN;
	int indFirst = UNKNOWN, indSecond = UNKNOWN;
	int i = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != UNKNOWN && first == UNKNOWN)
		{
			first = arr[i];
			indFirst = i + 1;
		}
		else if (arr[i] != UNKNOWN && first != UNKNOWN)
		{
			second = arr[i];
			indSecond = i + 1;
			break;
		}
	}
	indSecond -= indFirst - 1;

	_Q = pow(((float)second / first), 1.0 / (indSecond - 1));
	_A1 = first / pow(_Q, indFirst - 1);


}

E_List::E_List(int* arr, int size)
{
	int first = UNKNOWN, second = UNKNOWN;
	int indFirst = UNKNOWN, indSecond = UNKNOWN;
	
	int i = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != UNKNOWN && first == UNKNOWN)
		{
			first = arr[i];
			indFirst = i + 1;
		}
		else if (arr[i] != UNKNOWN && first != UNKNOWN)
		{
			second = arr[i];
			indSecond = i + 1;
			break;
		}
	}
	indSecond -= indFirst - 1;
	
	_Q = pow(((float)second / first), 1.0 / (indSecond - 1));
	_A1 = first / pow(_Q, indFirst - 1);
	
	
	


}

int E_List::get_index(int an)
{
	return log(an * _Q / _A1) / log(_Q);
}
int E_List::get_index(float an)
{
	return log(an*_Q/_A1)/log(_Q);
}
//{ int an } number to discover, returns said number index in the list

float E_List::get_number(int n)
{
	return _A1 * pow(_Q ,(n - 1));
}
float E_List::get_a1()
{
	return _A1;
}
float E_List::get_q()
{
	return _Q;
}
//{ int n } index of number to discover, returns number of said index in the list

float E_List::operator[](int val)
{
	
	return _A1 * pow(_Q, (val - 1));
}
