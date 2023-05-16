#include "PointTemplate.h"

template<typename T>
Point<T>::Point(T x, T y):xpos(x), ypos(y) {}

template<typename T>
void Point<T>::ShowPosition() const {
    cout << '[' << xpos << ", " << ypos << ']' << endl;
}

template
class Point<int>;

template
class Point<double>;

template
class Point<char>;
