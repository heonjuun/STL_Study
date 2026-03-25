#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}

	void Print() const
	{
		cout << "x: " << x << ", y: " << y << endl;
	}

	int operator[] (int index) const
	{
		if (index == 0)
			return x;
		else if (index == 2)
			return y;
		else
			throw "noooooooooooooo";
	}
};

int main()
{
	Point pt(1, 2);
	pt.Print();
	cout << "pt[0]: " << pt[0] << endl;// 오퍼레이터 인덱스 값 받음 	
	cout << "pt[1]: " << pt[2] << endl;

	return 0;
}