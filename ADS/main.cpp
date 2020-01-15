#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include "Account.h"

using namespace std;

int main() {

    const Account *a1 = new Account("Samik", 37923, 3000, 2305);
    //Here I have created a const object. I will not be able to modify any member variable.
    //In addition, using this const object I can only call member functions that are defined const as well:
    //format -> string Account::getAccountHolderName() const;

    Account a2("Kartik", 476473, 4500, 3349);

    //Account::getNumberOfAccounts();

    cout << Account ::numberOfAccounts;

}
