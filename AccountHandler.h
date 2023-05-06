/*
 * 파일이름 : AccountHandler.h
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 14] 파일버전 0.8
 * */
#ifndef _ACCOUNT_HANDLER_H__
#define _ACCOUNT_HANDLER_H__

#include "Account.h"
#include "AccountArray.h"

class AccountHandler {
private:
    BoundCheckAccountPtrArray accArr;
    int accNum;
public:
    AccountHandler();

    void ShowMenu(void) const;

    void MakeAccount(void);

    void DepositMoney(void);

    void WithdrawMoney(void);

    void ShowAllAccInfo(void) const;

    ~AccountHandler();

protected:
    void MakeNormalAccount(void);

    void MakeCreditAccount(void);
};

#endif
