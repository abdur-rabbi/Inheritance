/*account login interface*/

#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int accNum;

public:
    person(string n, int ac) : name(n), accNum(ac) {}
    void display()
    {
        cout << "Name\t\t:" << name << "\nAccount Number\t:" << accNum << endl;
    }
};
class createAcc : public person
{
private:
    int pin;

public:
    createAcc(string n, int ac, int p) : person(n, ac), pin(p) {}
    void display_2()
    {
        display();
        cout << "Password\t:" << pin;
    }
    bool login()
    {
        int accnum, accpin;
        cout << "Account number: ";
        cin >> accnum;
        cout << "Account password: ";
        cin >> accpin;
        if (accnum == accNum && accpin == pin)
        {
            cout << "Account login successfull." << endl;
            return 1;
        }
        else
        {
            cout << "Invalid password or account number!" << endl;
            return 0;
        }
    }
};
int main()
{
    string n;
    int ac, p;
    cout << "Create Account." << endl;
    cout << "Input name: ";
    getline(cin, n);
    cout << "Input account number: ";
    cin >> ac;
    cout << "Input password: ";
    cin >> p;
    createAcc a(n, ac, p);
    cout << "\nAccount create successfully." << endl;
    a.display_2();
    bool logiend = 0;
    cout << "\n\nNow, please login your account. You can try only three times." << endl;
    for (int i = 1; i <= 3; i++)
    {
        if (a.login())
        {
            logiend = 1;
            a.display_2();
            break;
        }
        else
        {
            cout << "\nAttempts left: " << 3 - i << endl;
        }
    }
    if (logiend == 0)
    {
        cout << "\nLogin failed, try again leter." << endl;
        return 0;
    }
}
