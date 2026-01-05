#include <iostream>
#include <string>
using namespace std;

// Your class (unchanged)
class bankAcount {
private:
    int balance;

public:
    string AcountHolderName;
    string TypeOfAcount;

    bankAcount(int rupees, string Name, string AcountType)
        : balance(rupees), AcountHolderName(Name), TypeOfAcount(AcountType) {}

    void deposit(int rs) {
        balance += rs;
        cout << "The current balance in the account is: " << balance << endl;
    }

    void withdraw_amount(int amount) {
        if (balance > amount) {
            balance -= amount;
            cout << "Available balance is: " << balance << endl;
        } else {
            cout << "Insufficient balance" << endl;
        }
    }

    void account_detailes() {
        cout << "The name of the holder is: " << AcountHolderName << endl;
        cout << "The type of account is: " << TypeOfAcount << endl;
    }

    int check_balance() {
        return balance;
    }
};

// Driver code
int main() {
    bankAcount acc1(5000, "Pramod Yadav", "Savings");

    acc1.account_detailes();

    cout << "Initial balance: " << acc1.check_balance() << endl;

    acc1.deposit(2000);
    acc1.withdraw_amount(3000);
    acc1.withdraw_amount(6000);

    cout << "Final balance: " << acc1.check_balance() << endl;

    return 0;
}
