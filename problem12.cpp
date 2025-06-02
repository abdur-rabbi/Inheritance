#include <iostream>
using namespace std;
class base
{
public:
    virtual void a() {}
};
class derived : public base
{
public:
    void a() {}
};
int main()
{
    derived d;
    d.a();
}