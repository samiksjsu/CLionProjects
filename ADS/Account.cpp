//
// Created by Samik Biswas on 31-08-2019.
//
#include <iostream>
#include "Account.h"

using namespace std;

int Account::numberOfAccounts = 0;
//This is how we initialize a static variable.
//Since this is not object specific but class specific, this needs to be initialized outside the constructor.

Account::Account(string accountHolderName, long accountNumber, int currentBalance, int sortCode)
        : accountHolderName{accountHolderName},
          accountNumber{accountNumber},
          currentBalance{currentBalance} {
    this->sortCode = new int;
    *(this->sortCode) = sortCode;

    ++numberOfAccounts;//The best place to increment the static values is inside the constructor.
                       //Make sure that you have included this in all the constructor, if you have multiple
                       //overloaded one.

    cout << "This is the 3 args constructor." << endl;

}

//-----------------------------------------------------

//This is the delegate constructor

Account::Account(const Account &source)
        : Account{source.accountHolderName,
                  source.accountNumber,
                  source.currentBalance, *source.sortCode} {}

//-----------------------------------------------------
//-----------------------------------------------------
//This is direct initialization
/*
Account::Account(const Account &source)
        :accountHolderName {source.accountHolderName},
         accountNumber{source.accountNumber},
         currentBalance{source.currentBalance}
{
    data = new int;
    *data = *source.data;

    numberOfAccounts++;
}*/

string Account::getAccountHolderName() const{
    return this->accountHolderName;
}

int Account::getAccountNumber() {
    return this->numberOfAccounts;
}

int Account::getCurrentBalance() {
    return this->currentBalance;
}

void Account::getNumberOfAccounts(){
    cout << "Active Accounts: " << Account::numberOfAccounts;
}

Account::~Account() {
    --numberOfAccounts;//decrementing static variables as soon as the object goes out of scope or deleted.
    delete this->sortCode;
    cout << "Destructor is called";
}
