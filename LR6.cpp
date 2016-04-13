#include "LR6.h"
#include <iostream>

int main()
{
	int size;
	cin >> size;
	Square a(size);
	a.area();
	a.print();
	Cube b(size);
	b.area();
	return 0;
}