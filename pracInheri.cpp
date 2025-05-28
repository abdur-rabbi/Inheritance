#include <iostream>
#define PI 3.1416
using namespace std;
class shape
{
public:
    float area, paramiter;
    void display()
    {
        cout << "Area\t\t:" << area << "\nParamiter\t:" << paramiter << endl<<endl;
    }
};
class rectangle : public shape
{
public:
    float h, w;
    void input()
    {
        cout << "Input height: ";
        cin >> h;
        cout << "Input weidth: ";
        cin >> w;
        area = h * w;
        paramiter = 2 * (h + w);
    }
};
class circle : public shape
{
public:
    float d;
    void cinput()
    {
        cout << "Input diamiter: ";
        cin >> d;
        area = PI * d * d;
        paramiter = 2 * PI * d;
    }
};
int main()
{
    rectangle r1;
    circle c1;
    r1.input();
    r1.display();
    c1.cinput();
    c1.display();
}
