#include<iostream>
using namespace std;

void Print(int n)
{
	cout <<"global function" << n << endl;
}
namespace A
{
	void Print(int n)
	{
		cout << "namespace A function" << n << endl;
	}
}

class Point
{
public:
	static void Print(int n)
	{
		cout << "static member Point Class  function" << n << endl;
	}
};
int main()
{
	void (*pf)(int); // 함수 포인터 pf 선언, pf는 int형 매개변수를 갖는 void형 함수의 포인터
	
	Print(10); // namespace 없는 전역 함수 호출
	A::Print(20); // namespace A의 Print 함수 호출
	Point::Print(30); // Point 클래스의 static Print 함수 호출

	pf(20); // pf를 통해 Print 함수를 호출하여 20을 출력
	(*pf)(30); // pf를 역참조하여 Print 함수를 호출하여 30을 출력

	pf = Print; //  pf is a pointer to the function Print
	pf(40); // namespace A의 Print 함수 호출
	pf = Point::Print; // Point 클래스의 static Print 함수에 대한 포인터 할당

	cout << Print << endl;
	cout << *pf << endl;
	pf = A::Print; // namespace A의 Print 함수에 대한 포인터 할당
	
	
	pf(50); // Point 클래스의 static Print 함수 호출
	return 0;
}