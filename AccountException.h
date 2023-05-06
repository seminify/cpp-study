/*
 * 파일이름 : AccountException.h
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 17] 파일버전 0.12
 * */
#ifndef __ACCOUNT_EXCEPTION_H__
#define __ACCOUNT_EXCEPTION_H__

#include "BankingCommonDecl.h"

class MinusException {
private:
    int excal; // 예외의 원인이 되는 금액
public:
    MinusException(int val) : excal(val) {}

    void ShowExceptionInfo(void) const {
        cout << "입(출)금액 " << excal << "은 유효하지 않습니다!" << endl;
    }
};

class InsuffException {
private:
    int balance; // 현재 잔액
    int reqval; // 출금 요구액
public:
    InsuffException(int val, int req) : balance(val), reqval(req) {}

    void ShowExceptionInfo() const {
        cout << "잔액에서 " << reqval - balance << "가(이) 부족합니다!" << endl;
    }
};

#endif
