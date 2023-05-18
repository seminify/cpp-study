/*
 * 파일이름 : Account.cpp
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 17] 파일버전 0.92
 * */
#include "AccountException.h"
#include "Account.h"

Account::Account(int ID, int money, String name) : accID(ID), balance(money) {
    cusName = name;
}

int Account::GetAccID() const {
    return accID;
}

void Account::Deposit(int money) {
    if (money < 0)
        throw MinusException(money);
    balance += money;
}

int Account::Withdraw(int money) {
    if (money < 0)
        throw MinusException(money);
    if (balance < money)
        throw InsuffException(balance, money);
    balance -= money;
    return money;
}

void Account::ShowAccInfo() const {
    cout << "계좌ID : " << accID << endl;
    cout << "이름 : " << cusName << endl;
    cout << "잔액 : " << balance << endl;
}
