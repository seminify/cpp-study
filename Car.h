#ifndef __CAR_H__
#define __CAR_H__
namespace CAR_CONST {
    enum {
        ID_LEN = 20,
        MAX_SPD = 200,
        FULE_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
}
class Car {
private:
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int carSpeed;
public:
    void InitMembers(char *ID, int fuel);

    void ShowCarState();

    void Accel();

    void Break();
};

#endif
