#include <iostream>

using namespace std;

class ExcepA {
public:
    void What() {
        cout << "ExcepA 예외" << endl;
    }
};

class ExcepB : public ExcepA {
public:
    void What() {
        cout << "ExcepB 예외" << endl;
    }
};

class ExcepC : public ExcepB {
public:
    void What() {
        cout << "ExcepC 예외" << endl;
    }
};

void ExcepFunction(int ex) {
    if (ex == 1)
        throw ExcepA();
    else if (ex == 2)
        throw ExcepB();
    else
        throw ExcepC();
}

int main(void) {
    int exID;
    cout << "발생시킬 예외의 숫자 : ";
    cin >> exID;
    try {
        ExcepFunction(exID);
    } catch (ExcepC &ex) {
        cout << "catch (ExcepC &ex)에 의한 처리" << endl;
        ex.What();
    } catch (ExcepB &ex) {
        cout << "catch (ExcepB &ex)에 의한 처리" << endl;
        ex.What();
    } catch (ExcepA &ex) {
        cout << "catch (ExcepA &ex)에 의한 처리" << endl;
        ex.What();
    }
    return 0;
}
