#include<stdio.h>

class Shape {
public:
	virtual int get_point_count(void) { return };
	virtual int get_position(void) { return };

private:

};
class RectangleShape : public Shape {
public:
	//������
	RectangleShape(int width, int height)
		:width_(width), height_(height)
	{

	}
	//�Ҹ���
	~RectangleShape()
	{

	}
private:
	int width_;
	int height_;
};
class CircleShape : public Shape {
public:
	//������
	CircleShape(int radius)
		:radius_(radius)
	{

	}
	//�Ҹ���
	~CircleShape()
	{

	}
private:
	int radius_:
};

int main() {
	Shape* s = new RectangleShape(3,4);

	return 0;
}