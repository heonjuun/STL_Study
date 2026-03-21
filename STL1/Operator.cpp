/*#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x=0, int _y=0) : x(_x), y(_y) {}
	void Print() const
	{
		cout << "Point(" << x << ", " << y << ")" << endl;
	}

	const Point operator+ (const Point& arg) const //참조로 받아서 main에서 arg 상수에 대입할 때 복사생성자 호출 방지, const는 멤버변수 변경 방지
	{ //+가 뒤에오는거 는 멤버함수의 매개변수(파라미터)로 전달되는 객체, +가 앞에오는거는 멤버함수를 호출하는 객체
		Point pt;
		pt.x = this->x + arg.x; // this는 포인터이므로 멤버변수 접근할 때 -> 사용, arg는 참조이므로 . 사용
		pt.y = this->y + arg.y;	


		return pt;
	}
};

int main()
{
	Point p1(1, 2);
	Point p2(5, 5);
	Point p3;

	p3 = p1 + p2; // 컴파일러에서 이런모양으로 변환=>p3 = p1.operator+(p2)
	p3.Print();

	p3 = p1.operator+(p2); // 위의 코드와 같은 의미, 컴파일러가 자동으로 변환해주는 코드
	p3.Print();	





	return 0;
}*/