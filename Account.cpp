/*
 * 파일이름 : Account.cpp
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 15] 파일버전 0.9
 * */
#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, String name) : accID(ID), balance(money) {
    // cusName = new char[strlen(money)];
    // strcpy(cusName, name);
    cusName = name;
}

// Account::Account(int ID, int money, char *name) {}
// Account::Account(const Account &ref) {}
// Account &Account::operator=(const Account &ref) {}
int Account::GetAccID() const {
    return accID;
}

void Account::Deposit(int money) {
    balance += money;
}

int Account::Withdraw(int money) {
    if (balance < money)
        return 0;
    balance -= money;
    return money;
}

void Account::ShowAccInfo() const {
    cout << "계좌ID : " << accID << endl;
    cout << "이름 : " << cusName << endl;
    cout << "잔액 : " << balance << endl;
}
// Account::~Account() {}
