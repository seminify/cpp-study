/*
 * 파일이름 : NormalAccount.h
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 15] 파일버전 0.8
 * */
#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "String.h"
#include "Account.h"

class NormalAccount : public Account {
private:
    int interRage; // 이자율 % 단위
public:
    // NormalAccount(int ID, int money, char *name, int rate);
    NormalAccount(int ID, int money, String name, int rate) : Account(ID, money, name), interRage(rate) {}

    virtual void Deposit(int money) {
        Account::Deposit(money); // 원금추가
        Account::Deposit(money * (interRage / 100.0)); // 이자추가
    }
};

#endif
