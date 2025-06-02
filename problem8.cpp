/*A shopkeeper wants to maintain the stock database category wise(electronics appliances, foof items, clothing, milk product, kitchen product). Specify all the classes and function as per the relationship between different products.*/
#include <iostream>
using namespace std;
class product
{
protected:
    string name;
    int price, quantity;

public:
    void input()
    {
        cout << "Product name: ";
        getline(cin, name);
        cout << "Product price: ";
        cin >> price;
        cout << "Product quantity: ";
        cin >> quantity;
    }
    void output()
    {
        cout << "Product name\t\t:" << name << "\nProduct price\t\t:" << price << "\nProduct quantity\t:" << quantity << endl;
    }
};
class electronics : private product
{
public:
    void get_elec()
    {
        cout << "----Input electronic information----" << endl;
        input();
    }
    void dis_elec()
    {
        cout << "---- electronic information----" << endl;
        output();
    }
};
class food_item : private product
{
public:
    void get_food()
    {
        cout << "----Input food information----" << endl;
        input();
    }
    void dis_food()
    {
        cout << "----Food information----" << endl;
        output();
    }
};
class clothing : private product
{
public:
    void get_clo()
    {
        cout << "----Input clothig information----" << endl;
        input();
    }
    void dis_clo()
    {
        cout << "----Clothing information----" << endl;
        output();
    }
};
class milk : private product
{
public:
    void get_milk()
    {
        cout << "----Input milk information----" << endl;
        input();
    }
    void dis_milk()
    {
        cout << "----Milk information----" << endl;
        output();
    }
};
class kichen : private product
{
public:
    void get_kichen()
    {
        cout << "----Input kichenPro information----" << endl;
        input();
    }
    void dis_kichen()
    {
        cout << "----Kichen product information----" << endl;
        output();
    }
};
int main()
{
    electronics el;
    el.get_elec();
    el.dis_elec();
    cout << endl;

    food_item fi;
    fi.get_food();
    fi.dis_food();
    cout << endl;

    clothing cl;
    cl.get_clo();
    cl.dis_clo();
    cout << endl;

    milk mi;
    mi.get_milk();
    mi.dis_milk();
    cout << endl;
    
    kichen ki;
    ki.get_kichen();
    ki.dis_kichen();
}