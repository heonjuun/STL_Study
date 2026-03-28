#include<iostream>
using namespace std;
class Point
{
	int X;
	int Y;
	public:
		Point(int _X = 0, int _Y = 0) :X(_X), Y(_Y) 
		{
		}
		void Print() const
		{
			cout << X << "," << Y << endl;
		}
};
class PointPtr
{
	Point* ptr;
public:
	PointPtr(Point* P):ptr(P)
	{
	}
	~PointPtr()
	{
		delete ptr;
	}
	Point* operator->() const
	{
		return ptr; // 포인터의 멤버 접근 연산자 오버로딩
		// 이함수를 호출해서 p1,p2 내부에 보관 되있던 포인터를 반환받고 그 포인터로 멤버 접근 연산자 사용해서 Print()함수 호출
	}
};

int main()
{
	PointPtr p1 = new Point(1, 2);
	PointPtr p2 = new Point(3, 4);	
	p1->Print();
	p2->Print();
	return 0;
}