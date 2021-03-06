// DoubleTail.cpp : Defines the entry point for the console application.
//
// Recursion Templates Understanding 
//Single Tail recursion 
//Double test tail recursion --> Have to comditions to break the recursion either one can stop 
//Augumentation recursion --> Breaking into single step + final step

// Source --> https://www.cs.cmu.edu/~dst/LispBook/book.pdf Page 251 Chapter 8
#include "stdafx.h"
#include<iostream>
#include<vector>
bool anyOdd(std::vector<int> v, int index, int size)
{
	if (index == size) return false;
	else if (v[index] % 2 != 0) return true;
	else return anyOdd(v, index + 1, size);
}
//Double condition tail recursion

int anyOddFirs(std::vector<int> v, int index, int size)
{
	if (index == size) return -1;
	else if (v[index] % 2 != 0) return v[index];
	else return anyOddFirs(v, index + 1, size);
}
//This becomes augumentation recursion

int factorial(int num)
{
	if (num == 0)
		return 1;
	return num*factorial(num - 1);
}
//Single Test Tail resursion
int size(std::vector<int> v)
{
	if (v.size() == 0) return 0;
	v.pop_back();
	return 1 + size(v);
}

int main()
{
	std::vector<int> v;
	//v[0] = 5;
	
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	std::cout << "The valu is" << anyOdd(v, 0,3);
	std::cout << "\nThe vallue is" << anyOddFirs(v, 0, 3);
	std::cout << "Factorial of number is" << factorial(3);
	std::cout << "\n Size of vector is" << size(v);
	return 0;
}

