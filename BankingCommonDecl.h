/*
 * 파일이름 : BankingCommonDecl.h
 * 작성자 : seminify
 * 업데이트 정보 : [2023. 05. 17] 파일버전 0.82
 * */
#ifndef __BANKING_COMMONDECL_H__
#define __BANKING_COMMONDECL_H__

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
const int NAME_LEN = 20;
// 프로그램 사용자의 선택 메뉴
enum {
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};
// 신용등급
enum {
    LEVEL_A = 7,
    LEVEL_B = 4,
    LEVEL_C = 2,
};
// 계좌의 종류
enum {
    NORMAL = 1,
    CREDIT = 2
};
#endif
