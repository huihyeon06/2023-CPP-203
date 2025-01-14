

class IntArray {
public:
	//얕은복사
	IntArray(int* arr, int size) {
		arr_ = new int[size];
		size_ = size;
	}

	//깊은 복사생성자
	IntArray(const IntArray& rhs) 
		:size_(rhs.size_), arr_(rhs.arr_)
	{
		size_ = rhs.size_;
		arr_ = new int[size_];
		for (int i = 0; i < size_; i++) {
			arr_[i] = rhs.arr_[i];
		}

	}

private:
	int* arr_;
	int size_; //arr의 크기
};

int main(void) {
	int arr[] = { 1, 2, 3 };
	IntArray ia = IntArray(arr, sizeof(arr)/sizeof(*arr));
	IntArray ca = ia; //복사생성자 호출
	return 0;
}