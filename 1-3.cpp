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

    friend bool operator==(const Point &, const Point &);

    friend bool operator!=(const Point &, const Point &);
};

bool operator==(const Point &pos1, const Point &pos2) {
    if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
        return true;
    else
        return false;
}

bool operator!=(const Point &pos1, const Point &pos2) {
    return !(pos1 == pos2); // 오버로딩 된 == 연산자를 호출하고 있다.
}

int main(void) {
    Point pos1(5, 7);
    Point pos2(5, 7);
    if (pos1 == pos2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    if (pos1 != pos2)
        cout << "not equal" << endl;
    else
        cout << "equal" << endl;
    return 0;
}
