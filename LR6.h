#include <iostream>

using namespace std;

class Square
{
protected:
	int size;
public:
	Square(int s)
		:size(s)
	{
	}
	virtual int area()
	{
		return size*size;
	}
	int print()
	{
		cout << "size: " << size << "area: " << size*size << endl;
	}
	virtual ~Square()
	{
	}
};
class Cube: public Square
{
public:
	Cube(int m)
		:Square(m)
	{}
	int area() override
	{
		return size*size*size;
	}
	~Cube()
	{}
};