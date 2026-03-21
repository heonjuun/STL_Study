/*#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int x, int y) : x(x), y(y) {}
	void Print() const
	{
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
	void operator +(Point arg)
	{
		cout << "operator+() instence call" << endl;
	}
};

int main()
{
	Point p1(1, 2);
	Point p2(3, 4);	
	p1 + p2;// 컴파일러에서 이런모양으로 변환=>p1.operator+(p2)
	
		
		
	return 0;
}*/