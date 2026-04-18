/*#include<functional>//function의 plus , minus header 사용
#include<iostream>
using namespace std;

struct Plus
{
	int operator()(int a, int b)
	{
		return a + b;
	}
};
struct Minus
{
	int operator()(int a, int b)
	{
		return a - b;
	}
};

int main()
{
	cout << Plus()(10, 20) << endl;//구조체 생성자
	cout << Minus()(10, 20) << endl;
	cout << minus<int>() (20, 19) << endl; // function의 함수 plus , minus소문자 사용
	return 0;
}*/
