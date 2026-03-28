/*#include<iostream>
#include<string>	
using namespace std;
class String
{
	char* data;
public:
	String(const char* charlen)
	{		
		data = new char[strlen(charlen) + 1];
		strcpy(data, charlen);
	}
	~String()
	{
		delete[] data;
	}
	operator const char* ()const
	{
		return data;
	}
	// 자기자신 호출 
	String& operator=(const char* str)
	{
		delete[] data;
		data = new char[strlen(str) + 1];
		strcpy(data, str);
		return *this;
	}
	


};



int main()
{
	//String s("Hello");
	//const char* sz = s;
	//cout << sz;

	

	const char* sz2 = "World";
	String s2("engine");
	s2 = sz2;
	cout << s2 << endl;
	return 0;
}*/