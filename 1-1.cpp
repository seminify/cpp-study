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

    friend Point operator-(const Point &, const Point &);
};

Point operator-(const Point &pos1, const Point &pos2) {
    Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
    return pos;
}

int main(void) {
    Point pos1(20, 30);
    Point pos2(5, 7);
    (pos1 - pos2).ShowPosition();
    return 0;
}
