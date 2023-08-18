#include<stdio.h>

class Shape {
public:
	virtual int get_point_count(void) { return };
	virtual int get_position(void) { return };

private:

};
class RectangleShape : public Shape {
public:
	//持失切
	RectangleShape(int width, int height)
		:width_(width), height_(height)
	{

	}
	//社瑚切
	~RectangleShape()
	{

	}
private:
	int width_;
	int height_;
};
class CircleShape : public Shape {
public:
	//持失切
	CircleShape(int radius)
		:radius_(radius)
	{

	}
	//社瑚切
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