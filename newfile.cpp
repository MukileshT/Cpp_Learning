#include <iostream>

struct Point {
    int x;
    int y;

    void display() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    Point p1 = {10, 20};
    Point* ptr = &p1;

    // Accessing members using the arrow operator
    ptr->x = 30;
    ptr->display();

    return 0;
}
