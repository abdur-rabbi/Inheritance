/*In exercise 8.3, the classes tercher, officer, and typist are deriver form the class staff. As we know, we can use contioner classes in place of inheritance in some situations. Redesign the program of Exercise 8.3 such that the classes teacher, officer, and typist contain the objects of staff*/
#include <iostream>
#include <math.h>
using namespace std;
class accout
{
protected:
    string name, gen;
    int accNum;
    float balence;

public:
    void input()
    {    cin.ignore();  
        cout << "Account holder name: ";
        getline(cin, name);
        cout << "Account holder gender: ";
        getline(cin, gen);
        cout << "Input account number: ";
        cin >> accNum;
        cout << "Input initial balance: ";
        cin >> balence;
    }
    void output()
    {
        cout << "Name\t\t:" << name << "\nAccount number\t:" << accNum << "\nBalance\t\t:" <<balence<< "\nGender\t\t:" << gen << endl;
    }
};
class saving_accout : public accout
{
    float interest, rate;
    int time;

public:
    void get_interest()
    {
        cout << "Input rate: ";
        cin >> rate;
        cout << "Input time in years: ";
        cin >> time;
        interest = balence * pow((1 + rate / 100), time) - balence;
        balence += interest;
        cout << "Adden interest: " << interest << endl;
    }
    bool withdraw()
    {
        int x;
        cout << "Withdraw balance: ";
        cin >> x;
        if (x < balence)
        {
            balence -= x;
            cout << "Withdraw successful. New balance is: " << balence << endl;
            return true;
        }
        else
        {
            cout << "Insuficenf balance." << endl;
            return false;
        }
    }
    void sirvice()
    {
        cout << "Cheque book not aviable." << endl;
    }
};
class currect_account : public accout
{
    int minBalance = 500, penaltyCharge = 50;

public:
    void balance_check()
    {
        if (minBalance >= balence)
        {
            balence -= penaltyCharge;
            cout << "Account balance is below minimum balance." << penaltyCharge << " penalty charge is imposde." << endl;
        }
        else
        {
            cout << "Balance is sufficent." << endl;
        }
    }
    void c_sirvice()
    {
        cout << "Cheque book is avialable." << endl;
    }
};
int main()
{
    saving_accout sa;
    cout << ".................Saving Account Information...................." << endl;
    sa.input();
    sa.get_interest();
    sa.withdraw();
    sa.output();
    sa.sirvice();
    cout << endl;
    cout << ".................Current Account Information...................." << endl;
    currect_account ca;
    ca.input();
    ca.balance_check();
    ca.output();
    ca.c_sirvice();
}
