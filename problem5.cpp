/*Consider a class network. The class master derives information form both account and admin classes which in turn derive information from the class person. Define all the four classes and write a program to create, update and dilplay the information contained in master objects*/
#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int code;

public:
    void input()
    {
        cin.ignore();
        cout << "Input name: ";
        getline(cin, name);
        cout << "Input code: ";
        cin >> code;
    }
    void output()
    {
        cout << "Name\t\t:" << name << "\nCode\t\t:" << code << endl;
    }
};
class account : virtual public person
{
private:
    float pay;

public:
    void get_pay()
    {
        cout << "Input payment money: ";
        cin >> pay;
    }
    void dis_pay()
    {
        cout << "Payment money\t:" << pay << endl;
    }
};
class admin : virtual public person
{
private:
    string exp;

public:
    void get_exp()
    {
        cin.ignore();
        cout << "Input experience: ";
        getline(cin, exp);
    }
    void dis_exp()
    {
        cout << "Experience in years\t:" << exp << endl;
    }
};
class master : public account, public admin
{
public:
    void create()
    {
        input();
        get_pay();
        get_exp();
    }
    void update()
    {
        int x;
        cout << "I want to update: 1(Person information). 2(Account information). 3(Admin information):";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "Update person information." << endl;
            input();
            break;
        case 2:
            cout << "Update account information." << endl;
            get_pay();
            break;
        case 3:
            cout << "Update admin information." << endl;
            get_exp();
            break;

        default:
            cout << "Invalid." << endl;
            break;
        }
    }
    void dis_all()
    {
        output();
        dis_exp();
        dis_pay();
    }
};
int main()
{
    master ma;
    ma.create();
    cout<<endl;
    ma.dis_all(); 
    ma.update();
    cout<<"...................Update Information................"<<endl;
    ma.dis_all();
}