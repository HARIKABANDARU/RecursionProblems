// Recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>
int recursie(std::vector<int> v,int elem,int index,int size)
{

	if (v[index] == elem) return elem;
	return  recursie(v, elem, index + 1, size);
}
int main()
{
	std::vector<int> v;
	for (int i = 0; i < 20; i++)
		v.push_back(i);
	std::cout << "Value found is ::\n" << recursie(v, 3, 0, 20);
    return 0;
}

