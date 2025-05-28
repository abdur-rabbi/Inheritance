#include <iostream>
#define PI 3.1416
using namespace std;
class shape
{
public:
    float area, volume;
};
class rectangle : public shape
{
public:
    int length, width;
    float calculation;
    void input1()
    {
        cout << "Input length: ";
        cin >> length;
        cout << "Input width: ";
        cin >> width;
        area = length * width;
        volume = 2 * (length + width);
    }
    void display()
    {
        cout << "Area is: " << area << "\nVolume is: " << volume << endl;
    }
};
class circle : public shape
{
public:
    float r;
    void input2()
    {
        cout << "Input diamiter: ";
        cin >> r;
        area = PI * r * r;
        volume = 2 * PI * r;
    }
    void display2()
    {
        cout << "Circle Area is: " << area << "\nCircle Volume is: " << volume << endl;
    }
};
int main()
{
    rectangle r1;
    circle c1;
    r1.input1();
    r1.display();
    c1.input2();
    c1.display2();
}