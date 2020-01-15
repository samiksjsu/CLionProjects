//
// Created by Samik Biswas on 31-08-2019.
//

#ifndef ADS_ACCOUNT_H
#define ADS_ACCOUNT_H

#include <string>

using namespace std;

class Account {
private:
    string accountHolderName;
    long accountNumber;
    int currentBalance;
    int *sortCode;


    //This is static member variable. This is like a global variable for the whole class scope.
    //This won't be specific to any object. Helpful to maintain something like the number of objects of a class.

public:
    static int numberOfAccounts;

    Account(string accountHolderName = "None", long accountNumber = 0000, int currentBalance = 0, int sortCode = 0);

    Account(const Account &source);

    int getCurrentBalance();

    int getAccountNumber();

    string getAccountHolderName() const; /*Note the usage of const keyword.
    This tells the compiler that, this function will not change the value of anything.
    This is helpful when we create a constant object. Creating a constant object won't
    let us invoke any method that is not marked const.

   void getAccountHolderName(const Account a1){
        cout << a1.getCurrentBalance();
    }

    The above rule applies even when we take a const object as parameter.
    Until and unless we define a method const, we wont be able to call that func from a const object.

    In addition, if we try to modify any member using these functions, it will result in a compiler error.

    void getAccountHolderName(const Account a1){
        a1.currentBalance = 5000;
    }
    */

    static void getNumberOfAccounts();
    /*This function will be used to  access the static member variable that we have just created.
    Static member functions have access to only static member variable.
    Non-static member functions have access to static member variable as well.*/


    ~Account();
};

#endif //ADS_ACCOUNT_H
