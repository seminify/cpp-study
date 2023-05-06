/*
 * 파일이름 : Account.cpp
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 12] 파일버전 0.7
 * */
#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, char *name) : accID(ID), balance(money) {
    cusName = new char[strlen(name) + 1];
    strcpy(cusName, name);
}

Account::Account(const Account &ref) : accID(ref.accID), balance(ref.balance) {
    cusName = new char[strlen(ref.cusName) + 1];
    strcpy(cusName, ref.cusName);
}

int Account::GetAccID() const {
    return accID;
}

void Account::Deposit(int money) {
    balance += money;
}

int Account::Withdraw(int moeny) {
    if (balance < moeny)
        return 0;
    balance -= moeny;
    return moeny;
}

void Account::ShowAccInfo() const {
    cout << "계좌ID : " << accID << endl;
    cout << "이름 : " << cusName << endl;
    cout << "잔액 : " << balance << endl;
}

Account::~Account() {
    delete[]cusName;
}
