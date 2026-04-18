#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	cout << st.top() << endl;
	st.pop();//마지막에 들어간 데이터 삭제 
	cout << st.top() << endl;
	st.pop();
	cout << st.top() << endl;
	st.pop();

	if (st.empty())
	{
		cout << "no stack";
	}

	return 0;
}