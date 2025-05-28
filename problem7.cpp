                                       /*example of heirarchical inheritance using constructor*/

#include <iostream>
using namespace std;
class person
{
private:
    string name;
    int id, age;

public:
    person(string n, int d, int a)
    {
        name = n, id = d, age = a;
    }
    void output()
    {
        cout << "NAME\t\t:" << name << "\nID\t\t:" << id << "\nAGE\t\t:" << age << endl;
    }
};
class student : public person
{
private:
    string dept;
    float cg;

public:
    student(string n, int d, int a, string de, float f) : person(n, d, a)
    {
        dept = de, cg = f;
    }
    void s_output()
    {
        cout << "Depertment\t:" << dept << "\nCgpa\t\t:" << cg << endl;
    }
};
class employe : public person
{
private:
    float sal;

public:
    employe(string n, int d, int a, float s) : person(n, d, a)
    {
        sal = s;
    }
    void e_output()
    {
        cout << "Salary\t\t:" << sal << endl;
    }
};
int main()
{
    string n, dept;
    int d, a;
    float cg, sal;
    cout<<".............Input studnt information................."<<endl;
    cout << "Input name: ";
    getline(cin, n);
    cout << "Input id: ";
    cin >> d;
    cout << "Input age: ";
    cin >> a;
    cin.ignore();
    cout << "Input depertment: ";
    getline(cin, dept);
    cout << "Input cgpa: ";
    cin >> cg;
    student x(n, d, a, dept, cg);
    cout<<"\n..................Output student information..................."<<endl;
    x.output();
    x.s_output();
    cout<<"\n..................Input employe information..................."<<endl;
     cin.ignore();
    cout << "Input employe name: ";
    getline(cin, n);
    cout << "Input employe id: ";
    cin >> d;
    cout << "Input employe age: ";
    cin >> a;
    cout << "Input employe salary: ";
    cin >> sal;
    employe em(n, d, a, sal);
    cout<<"\n..................Output employe information..................."<<endl;
    em.output();
    em.e_output();
}