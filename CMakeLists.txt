cmake_minimum_required(VERSION 3.25)
project(BankingSystem)

set(CMAKE_CXX_STANDARD 17)

add_executable(BankingSystem BankingSystemMain.cpp BankingCommonDecl.h Account.cpp Account.h NormalAccount.h HighCreditAccount.h AccountHandler.cpp AccountHandler.h)
