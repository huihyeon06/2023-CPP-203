

class IntArray {
public:
	//��������
	IntArray(int* arr, int size) {
		arr_ = new int[size];
		size_ = size;
	}

	//���� ���������
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
	int size_; //arr�� ũ��
};

int main(void) {
	int arr[] = { 1, 2, 3 };
	IntArray ia = IntArray(arr, sizeof(arr)/sizeof(*arr));
	IntArray ca = ia; //��������� ȣ��
	return 0;
}