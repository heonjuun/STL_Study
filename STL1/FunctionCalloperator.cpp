/*#include<iostream>
using namespace std;

struct FuncObject
{
public:
	void operator() (int arg) const
	{
		cout << "int argument: " << arg << endl;
	}
};
void Print1(int arg)
{
	cout << "int argument: " << arg << endl;
}

int main()
{
	void (*Print2)(int) = Print1; //함수 포인터 Print2 선언 및 초기화	
	FuncObject Print3; //함수 객체 funcObj 선언

	Print1(10); //함수 호출
	Print2(20); //함수 포인터를 사용한 정수 출력
	Print3(30); //함수 객체를 사용한 정수 출력 
	

	return 0;	
}*/