/*#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void Print() const
	{
		cout << x <<y  << endl;
	}

	bool operator== (const Point& arg) const  // 참조로 받아서 main에서 arg 상수에 대입할 때 복사생성자 호출 방지, const는 멤버변수 변경 방지
	{
		return x == arg.x && y == arg.y ? true : false ;
	}
	bool operator!= (const Point& arg) const // 새로 정의
	{
		return !(*this == arg); // 자기자신을 참조하는 포인터 this, *this는 객체 자신을 의미, == 연산자 재사용
	}
};

int main()
{
	Point p1(2, 3);
	Point p2(5, 5);
	Point p3(2, 3);

	if (p1 == p3)
	{
		cout<<"p1==p3"<<endl;
	}

	if (p1 != p2)
	{
		cout<<"p1!=p2"<<endl;
	}
	if (p1 != p3)
	{
		cout << "p1!=p3" << endl;
	}




	return 0;
}*/