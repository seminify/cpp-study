#include <iostream>

using namespace std;
namespace CAR_CONST {
    enum {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}
struct Car {
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int carSpeed;

    void ShowCarState(); // 상태정보 출력
    void Accel(); // 엑셀, 속도증가
    void Break(); // 브레이크, 속도감소
};

void Car::ShowCarState() {
    cout << "소유자ID : " << gamerID << endl;
    cout << "연료량 : " << fuelGauge << '%' << endl;
    cout << "현재속도 : " << carSpeed << "km/s" << endl << endl;
}

void Car::Accel() {
    if (fuelGauge <= 0)
        return;
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;
    if (carSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD) {
        carSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    carSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break() {
    if (carSpeed < CAR_CONST::BRK_STEP) {
        carSpeed = 0;
        return;
    }
    carSpeed -= CAR_CONST::BRK_STEP;
}

int main(void) {
    Car run99 = {
            "run99",
            100,
            0
    };
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}
