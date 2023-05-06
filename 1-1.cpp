#include <iostream>

using namespace std;

class Gun {
private:
    int bullet; // 장전된 총알의 수
public:
    Gun(int bnum) : bullet(bnum) {}

    void Shut() {
        cout << "BBANG!" << endl;
        bullet--;
    }
};

class Police {
private:
    int handcuffs; // 소유한 수갑의 수
    Gun *pistol; // 소유하고 있는 권총
public:
    Police(int bnum, int bcuff) : handcuffs(bcuff) {
        if (bnum > 0)
            pistol = new Gun(bnum);
        else
            pistol = NULL;
    }

    Police(const Police &ref) : handcuffs(ref.handcuffs) {
        if (ref.pistol != NULL)
            pistol = new Gun(*(ref.pistol)); // Gun의 복사 생성자 호출
        else
            pistol = NULL;
    }

    Police &operator=(const Police &ref) {
        if (pistol != NULL)
            delete pistol;
        if (ref.pistol != NULL)
            pistol = new Gun(*(ref.pistol));
        else
            pistol = NULL;
        handcuffs = ref.handcuffs;
        return *this;
    }

    void PutHandcfff() {
        cout << "SNAP!" << endl;
        handcuffs--;
    }

    void Shut() {
        if (pistol == NULL)
            cout << "Hut BBANG!" << endl;
        else
            pistol->Shut();
    }

    ~Police() {
        if (pistol != NULL)
            delete pistol;
    }
};

int main(void) {
    Police pman1(5, 3);
    Police pman2 = pman1; // 복사 생성자의 호출
    pman2.PutHandcfff();
    pman2.Shut();
    Police pman3(2, 4);
    pman3 = pman1; // 대입 연산자의 호출
    pman3.PutHandcfff();
    pman3.Shut();
    return 0;
}
