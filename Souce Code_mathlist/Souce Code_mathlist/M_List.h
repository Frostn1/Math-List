#pragma once
class M_List
{
public:
	//Constructors
	M_List(int a1, int d);
	M_List(int* arr);
	M_List(float a1, int d);
	M_List(float a1, float d);
	M_List(int a1, float d);
	M_List(float* arr);
	
	//methods
	void add(int an, int n);//{ int an } number to add/discover, { int n } spot of said number
	void add(int an);//{ int an } number to add/discover, should know where to insert it

	int get_index(int an);//{ int an } number to discover, returns said number index in the list
	int get_index(float an);//{ int an } number to discover, returns said number index in the list
	float get_number(int n);//{ int n } index of number to discover, returns number of said index in the list
	

	float operator[](int val);

	//a1 + (n-1)*d


private:
	float _D;
	float _A1;
	int _size;
	
};

class E_List
{
public:
	//Constructors
	E_List(int a1, int d);
	E_List(int* arr);
	E_List(float a1, int d);
	E_List(float a1, float d);
	E_List(int a1, float d);
	E_List(float* arr);
	E_List(float* arr, int check);
	E_List(int* arr, int size);

	int get_index(int an);//{ int an } number to discover, returns said number index in the list
	int get_index(float an);//{ int an } number to discover, returns said number index in the list
	float get_number(int n);//{ int n } index of number to discover, returns number of said index in the list
	float get_a1();
	float get_q();
	

	float operator[](int val);
private:
	float _Q;
	float _A1;
	int _size;
};

