#include <iostream>

using namespace std;

int divide(int a, int b); // a / b의 몫만 반환
int main(void) {
    int a, b;
    cout << "두개의 숫자 입력 : ";
    cin >> a >> b;
    cout << "a / b의 몫 : " << divide(a, b) << endl;
    return 0;
}

int divide(int a, int b) {
    if (b == 0)
        throw b;
    return a / b;
}
