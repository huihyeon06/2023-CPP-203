#include<SFML/Graphics.hpp>
#include<stdlib.h> //srand(), rand()
#include<time.h> //time()

using namespace sf;

int main(void) {
	const int WIDTH = 1000;						//픽셀 너비
	const int HEIGHT = 800;						//픽셀 높이
	const int BLOCK_SIZE = 50;					//한 캉이 가지고 있는 픽셀
	const int G_WIDTH = WIDTH / BLOCK_SIZE;		//그리드의 너비
	const int G_HEIGHT = HEIGHT / BLOCK_SIZE;	//그리드의 높이

	srand(time(NULL));

	RenderWindow window(VideoMode(WIDTH, HEIGHT), "Snake Game");

	//컴퓨터가 1초 동안 처리하는 횟수를 60으로 제한한다
	//Frame Per Second를 60으로 조절
	window.setFramerateLimit(20);

	RectangleShape snake;
	int snake_x = 1, snake_y = 2;
	snake.setFillColor(Color::White);
	snake.setPosition(snake_x*BLOCK_SIZE, snake_y*BLOCK_SIZE);
	snake.setSize(Vector2f(BLOCK_SIZE, BLOCK_SIZE));

	RectangleShape apple;
	int apple_x = rand() % G_WIDTH, apple_y = rand() % G_HEIGHT;
	apple.setFillColor(Color::Red);
	apple.setPosition(apple_x * BLOCK_SIZE, apple_y * BLOCK_SIZE);
	apple.setSize(Vector2f(BLOCK_SIZE, BLOCK_SIZE));

	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e)) {
			//윈도우의 x를 눌렀을 때 창이 닫아지도록
			if (e.type == Event::Closed)
				window.close();
		}
		if (Keyboard::isKeyPressed(Keyboard::Right)) {
			snake_x++;
			snake.move(1 * BLOCK_SIZE, 0);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Left)) {
			snake_x--;
			snake.move(-BLOCK_SIZE, 0);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Up)) {
			snake_y--;
			snake.move(0, -BLOCK_SIZE);
		}
		else if (Keyboard::isKeyPressed(Keyboard::Down)) {
			snake_y++;
			snake.move(0, 1 * BLOCK_SIZE);
		}
		
		//intersects -> 교집합(겹치는 부분)
		//뱀이 사과를 먹었을 때, 사과의 위치를 랜덤으로 리스폰
		if (snake.getGlobalBounds().intersects(apple.getGlobalBounds())) {
			apple_x = rand() % G_WIDTH, apple_y = rand() % G_HEIGHT;
			apple.setPosition(apple_x * BLOCK_SIZE, apple_y * BLOCK_SIZE);
		}

		window.clear();

		window.draw(apple);
		window.draw(snake);//draw를 늦게 할 수록 더 위에 있다

		window.display();
	}

	return 0;
}