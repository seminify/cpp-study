/*
 * 파일이름 : AccountHandler.h
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 17] 파일버전 0.92
 * */
#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "BoundCheckArray.h"
#include "Account.h"

class AccountHandler {
private:
    BoundCheckArray<Account *> accArr;
    int accNum;
public:
    AccountHandler();

    void ShowMenu(void);

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
