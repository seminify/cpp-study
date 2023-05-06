#include <iostream>
#include <cstring>

using namespace std;

class Point {
private:
    char str[30];
public:
    void SetString(char *s);

    void ShowString();
};

void Point::SetString(char *s) {
    strcpy(str, s);
}

void Point::ShowString() {
    cout << str << endl;
}

int main(void) {
    Point pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();
    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}
