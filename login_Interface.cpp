#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int accNum, pin;

public:
    person(string n, int ac, int p) : name(n), accNum(ac), pin(p) {}
    void display()
    {
        cout << "Account holder name\t:" << name << "\nAccount number\t\t:" << accNum << "\nPassword\t\t:" << pin << endl;
    }
};
class create_Account : public person
{
private:
    int accnum, pass;

public:
    create_Account(string n, int ac, int p) : person(n, ac, p) {}
    bool logined()
    {

        cout << "Input account number: ";
        cin >> accnum;
        cout << "Input password: ";
        cin >> pass;
        if (accNum == accnum && pin == pass)
        {
            cout << "\nAccount login successfull." << endl;
            return 1;
        }
        else
        {
            cout << "\nInvalid account number or password. Please try again." << endl;
            return 0;
        }
    }
};
int main()
{
    string n;
    int ac, p;
    cout << "\n.....................Create Your Account...................." << endl;
    cout << "Input account holder name: ";
    getline(cin, n);
    cout << "Input account number: ";
    cin >> ac;
    cout << "Input password: ";
    cin >> p;
    create_Account ca(n, ac, p);
    cout << "\n..................... Account Create Successfull...................." << endl;
    ca.display();

    cout << "\n\n...Now pleasse login your account, You can try only three times......." << endl;
    bool logined = 0;
    for (int i = 1; i <= 3; i++)
    {
        if (ca.logined())
        {
            logined = 1;
            ca.display();
            break;
        }
        else
        {
            cout << "\n................Your attempts lefts...................: " << 3 - i << endl;
        }
    }
    if (logined == 0)
    {
        cout << "\n#.......Login failed, Please try after sometime.............!" << endl;
    }
}