/*#include<iostream>
using namespace std;

void For_Each(int* begin, int *end, void (*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++); // 클라이언트 함수 호출
		
	}
}
void Print1(int n)
{
	cout << "Print1: " << n <<' ' ;
}
void Print2(int n)
{
	cout << "Print2: " << n*n << ' ' ;
}
void Print3(int n)
{
	cout << "integer: " << n << endl ;
}
int main()
{
	int arr[5] = {10, 20, 30, 40, 50};
	For_Each(arr, arr + 5, Print1); // Print1 함수를 For_Each에 전달하여 arr의 각 요소를 출력
	cout << endl << endl;
	For_Each(arr, arr + 5, Print2); // Print2 함수를 For_Each에 전달하여 arr의 각 요소의 제곱을 출력
	cout << endl << endl;
	For_Each(arr, arr + 5, Print3); // Print3 함수를 For_Each에 전달하여 arr의 각 요소를 "integer: "와 함께 출력

	return 0;
}*/