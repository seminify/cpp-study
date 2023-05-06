#include <iostream>

using namespace std;

int main(void) {
    int a, b;
    cout << "두개의 숫자 입력 : ";
    cin >> a >> b;
    try {
        cout << "try block start" << endl;
        if (b == 0)
            throw b;
        cout << "a / b의 몫 : " << a / b << endl;
        cout << "a / b의 나머지 : " << a % b << endl;
    } catch (int exception) {
        cout << "catch block start" << endl;
        cout << exception << " 입력." << endl;
        cout << "입력오류! 다시 실행 하세요." << endl;
    }
    cout << "THANK YOU!" << endl;
    return 0;
}
