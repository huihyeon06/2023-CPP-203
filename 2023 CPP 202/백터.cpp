#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	//전통적인 배열은 크기가 고정되어 있으나,
	//백터는 크기가 자유롭게 변할 수 있다
	vector<int> arr;
	arr.reserve(4); //크기를 4로

	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	arr.push_back(40);

	//꽉 찬 공간에 새로운 데이터를 넣어보자
	arr.push_back(50);
		//기존의 값을 복사한다

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}