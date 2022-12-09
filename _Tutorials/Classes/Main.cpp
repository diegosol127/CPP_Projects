// Classes are a way to group data or functionality together
// Classes have unique names
// Classes are private by default
// Inheritance is usually reserved for classes
// ==================================================================================
// Structs are essentially the same as classes except that they are public by default
// Structs are typically very simple and just contain simple data

#include <iostream>

using namespace std;

class Player {
	// Class variables that are able to be accessed outside of this class
public:
	int x, y;
	int velX, velY;

	// Functions inside classes are called "Methods"
	void Move(int x, int y) {
		x += x * velX;
		y += y * velY;
	}
};

struct Vec2 {
	float x, y;

	void Add(const Vec2& other) {
		x += other.x;
		y += other.y;
	}
};

int main() {

	Player player;
	player.Move(-1, 1);

	cin.get();
}