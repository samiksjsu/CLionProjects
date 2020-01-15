//
// Created by Samik Biswas on 31-08-2019.
//
#include <iostream>
#include "Account.h"

using namespace std;

Account::Account(string accountHolderName, int accountNumber, int currentBalance, int data)
        : accountHolderName{accountHolderName},
          accountNumber{accountNumber},
          currentBalance{currentBalance} {
    this->data = new int;
    *(this->data) = data;

    cout << "This is the 3 args constructor." << endl;

}

//-----------------------------------------------------

//This is the delegate constructor

Account::Account(const Account &source)
        : Account{source.accountHolderName,
                  source.accountNumber,
                  source.currentBalance, *source.data} {}

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
}*/

string Account::getAccountHolderName() {
    return this->accountHolderName;
}

int Account::getAccountNumber() {
    return this->accountNumber;
}

int Account::getCurrentBalance() {
    return this->currentBalance;
}

Account::~Account() {
    cout << "Destructor is called";
}
