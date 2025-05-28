                          /*input mark and define grading system with two different type*/

#include <iostream>
using namespace std;
class uni
{
protected:
    float x;

public:
    void input()
    {
        cout << "Input mark: ";
        cin >> x;
    }
    virtual void grade(){};
};
class RU : public uni
{

public:
    void grade()
    {
        if (x >= 80)
        {
            cout << "A+";
        }
        else if (x >= 70)
        {
            cout << "A";
        }
        else if (x >= 60)
        {
            cout << "A-";
        }
        else if (x >= 50)
        {
            cout << "B+";
        }
        else if (x >= 40)
        {
            cout << "B-";
        }
        else if (x >= 33)
        {
            cout << "C";
        }
        else
        {
            cout << "Fail.";
        }
    }
};
class VU : public uni
{

public:
    void grade()
    {
        if (x >= 85)
        {
            cout << "A+";
        }
        else if (x >= 75)
        {
            cout << "A";
        }
        else if (x >= 65)
        {
            cout << "A-";
        }
        else if (x >= 55)
        {
            cout << "B+";
        }
        else if (x >= 45)
        {
            cout << "B-";
        }
        else if (x >= 33)
        {
            cout << "C";
        }
        else
        {
            cout << "Fail.";
        }
    }
};
int main()
{
    VU v;
    RU r;
    cout<<"..................Input mark for VU.................."<<endl;
    v.input();
    v.grade();

    cout<<"\n..................Input mark for RU.................."<<endl;
    r.input();
    r.grade();
}