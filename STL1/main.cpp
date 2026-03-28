/*#include<iostream>
using namespace std;
#include<string>
class String
{
	char* data;
public:
	String(const char* charlen)
	{
		data = new char[strlen(charlen) + 1]; // 입력된 문자열의 길이에 1을 더한 크기의 char 배열 동적 할당	
		strcpy(data, charlen); // 입력된 문자열을 data 배열에 복사
		
	}
	~String()
	{
		delete[] data; // 동적 할당된 char 배열 해제
	}
	operator const char* () const
	{
		return data; // String 객체를 const char* 타입으로 변환하여 반환	
	}
};

int main()
{
	String s("Hello, World!"); // String 클래스의 객체 s 생성 및 초기화
	const char* sz = s;
	cout << sz << endl; // String 객체 s를 const char* 타입으로 변환하여 출력
	return 0;
}*/