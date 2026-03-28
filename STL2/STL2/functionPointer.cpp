#include<iostream>
using namespace std;

void Print(int n)
{
	cout << n << endl;	
}


int main()
{
	void (*pf)(int); // 함수 포인터 pf 선언, pf는 int형 매개변수를 갖는 void형 함수의 포인터
	pf = Print; //  pf is a pointer to the function Print

	Print(10); // 
	pf(20); // pf를 통해 Print 함수를 호출하여 20을 출력
	(*pf)(30); // pf를 역참조하여 Print 함수를 호출하여 30을 출력

	cout << endl;
	cout << pf << endl;
	cout << Print << endl;
	cout << *pf << endl;
	
	

	return 0;
}