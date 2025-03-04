#include<iostream>
#include<string>

using namespace std;

class Champ {
public:
	Champ(const string& name);
	//static 멤버함수는 객체 생성없이도 호출 가능하다
	static int get_cnt(void) {
		non_static = 1; //static 멤버함수에는 일반 멤버변수가 들어가서는 안된다
		return cnt_;
	}
	//객체에 있는 걸 활용하려면 객체를 생성해야하는 데 
	//위와 같은 static을 사용하면 객체 생성을 하지 않아도 출력할 수 있음
private:
	static int cnt_;
	int non_static;
};

//static 멤버변수는 무조건 바깥에서 정의한다(cosnt 같은거 빼고)
int Champ::cnt_ = 0;

//바깥에서 멤버를 정의할 때는 멤버변수나 멤버함수 이름 앞에 클래스 이름::
Champ::Champ(const string& name) {
	++cnt_;
}

int main(void) {
	Champ* a = new Champ("오리아나");
	Champ* b = new Champ("아자르");
	//Champ 형 객체의 갯수는 2개
	//메모리에 cnt_ 변수는 한 개만 존재
	//cnt_의 최종값은 2

	//static 멤버함수는 객체를 생성하지 않아도 호출할 수 있다
	cout << Champ::get_cnt() << endl;
	cout << a->get_cnt() << endl;
	cout << b->get_cnt() << endl;
	return 0;
}