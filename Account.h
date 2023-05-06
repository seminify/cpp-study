/*
 * 파일이름 : Account.h
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 12] 파일버전 0.7
 * */
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account {
private:
    int accID;
    int balance;
    char *cusName;
public:
    Account(int ID, int money, char *name);

    Account(const Account &ref);

    int GetAccID() const;

    virtual void Deposit(int money);

    int Withdraw(int moeny);

    void ShowAccInfo() const;

    ~Account();
};

#endif
