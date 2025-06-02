#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int age;

public:
    void input()
    {
        cout << "input name: ";
        getline(cin, name);
        cout << "input age: ";
        cin >> age;
    }
    void output()
    {
        cout << "Name\t:" << name << "\nAge\t:" << age << endl;
    }
};
class student : public person
{
private:
    float g;

public:
    void s_input()
    {
        cout << "input grade: ";
        cin >> g;
    }
    void display()
    {
        cout << "Grade\t:" << g << endl;
    }
    void r()
    {
        input();
        s_input();
        output();
        display();
    }
};
int main()
{
    student s;
    s.r();
}
