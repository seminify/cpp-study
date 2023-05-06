/*
 * 소프트웨어 버전 : Banking System Ver 0.8
 *
 * 파일이름 : BankingSystemMain.cpp
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 14] 파일버전 0.7
 * */
#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main(void) {
    AccountHandler manger;
    int choice;
    while (1) {
        manger.ShowMenu();
        cout << "선택 : ";
        cin >> choice;
        cout << endl;
        switch (choice) {
            case MAKE:
                manger.MakeAccount();
                break;
            case DEPOSIT:
                manger.DepositMoney();
                break;
            case WITHDRAW:
                manger.WithdrawMoney();
                break;
            case INQUIRE:
                manger.ShowAllAccInfo();
                break;
            case EXIT:
                return 0;
            default:
                cout << "Illegal selection.." << endl;
        }
    }
    return 0;
}
