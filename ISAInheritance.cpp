#include <iostream>
#include <cstring>

using namespace std;

class Computer {
private:
    char owner[50];
public:
    Computer(char *name) {
        strcpy(owner, name);
    }

    void Calculate() {
        cout << "요청 내용을 계산합니다." << endl;
    }
};

class NotebookComp : public Computer {
private:
    int battary;
public:
    NotebookComp(char *name, int initChag) : Computer(name), battary(initChag) {}

    void Charging() {
        battary += 5;
    }

    void UseBattary() {
        battary -= 1;
    }

    int GetBattaryInfo() {
        return battary;
    }

    void MovingCal() {
        if (GetBattaryInfo() < 1) {
            cout << "충전이 필요합니다.";
            return;
        }
        cout << "이동하면서 ";
        Calculate();
        UseBattary();
    }
};

class TableNotebook : public NotebookComp {
private:
    char regstPenModel[50];
public:
    TableNotebook(char *name, int initChang, char *pen) : NotebookComp(name, initChang) {
        strcpy(regstPenModel, pen);
    }

    void Write(char *penInfo) {
        if (GetBattaryInfo() < 1) {
            cout << "충전이 필요합니다." << endl;
            return;
        }
        if (strcmp(regstPenModel, penInfo) != 0) {
            cout << "등록된 팬이 아닙니다.";
            return;
        }
        cout << "필기 내용을 처리합니다." << endl;
        UseBattary();
    }
};

int main(void) {
    NotebookComp nc("이수종", 5);
    TableNotebook tn("정수영", 5, "ISE-241-242");
    nc.MovingCal();
    tn.Write("ISE-241-242");
    return 0;
}
