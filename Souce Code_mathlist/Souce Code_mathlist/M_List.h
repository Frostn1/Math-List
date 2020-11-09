#pragma once
class M_List
{
public:
	//Constructors
	M_List(int a1, int d);
	M_List(int* arr);
	M_List(double a1, int d);
	M_List(double a1, double d);
	M_List(int a1, double d);
	M_List(double* arr);
	
	//methods
	void add(int an, int n);//{ int an } number to add/discover, { int n } spot of said number
	void add(int an);//{ int an } number to add/discover, should know where to insert it

	int get_index(int an);//{ int an } number to discover, returns said number index in the list
	int get_index(double an);//{ int an } number to discover, returns said number index in the list
	double get_number(int n);//{ int n } index of number to discover, returns number of said index in the list
	

	double operator[](int val);

	//a1 + (n-1)*d


private:
	double _D;
	double _A1;
	int _size;
	
};

class E_List
{
public:
	//Constructors
	E_List(int a1, int d);
	E_List(int* arr);
	E_List(double a1, int d);
	E_List(double a1, double d);
	E_List(int a1, double d);
	E_List(double* arr);
	E_List(double* arr, int check);

	int get_index(int an);//{ int an } number to discover, returns said number index in the list
	int get_index(double an);//{ int an } number to discover, returns said number index in the list
	double get_number(int n);//{ int n } index of number to discover, returns number of said index in the list

	

	double operator[](int val);
private:
	double _Q;
	double _A1;
	int _size;
};

