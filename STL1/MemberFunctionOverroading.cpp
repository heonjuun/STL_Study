/*#include<iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0): x(_x), y(_y) {}
	void Print() const
	{
		cout << "Point(" << x << ", " << y << ")" << endl;
	}
	int getX() const
	{
		return x;
	}
	int getY() const
	{
		return y;
	}
	const Point operator- (const Point& arg) const //p1의 멤버함수 operator-(p2) 호출 p2는 매개변수 arg로 전달받는다.
	{
		return Point(x - arg.x, y - arg.y);
	}

};

int main()
{
	Point p1(0, 0);
	Point p2(2, 3);	
	Point p3;
	p3 = p1 - p2;
	p3.Print();

	return 0;
}*/