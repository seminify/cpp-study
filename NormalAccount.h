/*
 * 파일이름 : NormalAccount.h
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 14] 파일버전 0.7
 * */
#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"

class NormalAccount : public Account {
private:
    int interRate; // 이자율 % 단위
public:
    NormalAccount(int ID, int money, char *name, int rate) : Account(ID, money, name), interRate(rate) {}

    virtual void Deposit(int money) {
        Account::Deposit(money); // 원금추가
        Account::Deposit(money * (interRate / 100.0)); // 이자추가
    }
};

#endif
