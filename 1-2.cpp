#include <iostream>

using namespace std;

class Point {
private:
    int xpos, ypos;
public:
    Point(int x, int y) : xpos(x), ypos(y) {}

    void ShowPosition() const {
        cout << '[' << xpos << ", " << ypos << ']' << endl;
    }

    Point &operator+=(const Point &ref) {
        xpos += ref.xpos;
        ypos += ref.ypos;
        return *this;
    }

    Point &operator-=(Point &ref) {
        xpos -= ref.xpos;
        ypos -= ref.ypos;
        return *this;
    }
};

int main(void) {
    Point pos1(5, 7);
    Point pos2(5, 7);
    (pos1 += pos2).ShowPosition();
    (pos1 -= pos2).ShowPosition(); // 반환형이 참조형이므로 함수호출 가능
    return 0;
}
