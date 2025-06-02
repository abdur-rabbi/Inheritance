/*Dfine all the function and classes as per the relationship for a shopkeeper of following type of items,(a) Two wheeler manual, electric and automatic
(b) Three wheeler manual, electric and automatic
(c) Four wheeler automatic*/
#include <iostream>
using namespace std;
class vehicle
{
    string brNum;
    int modNum;
    float pri;

public:
    void input()
    {
        cin.ignore();
        cout << "Brand name: ";
        getline(cin, brNum);
        cout << "Model number: ";
        cin >> modNum;
        cout << "Vehicle price: ";
        cin >> pri;
    }
    void output()
    {
        cout << "Brand Name\t:" << brNum << "\nModel number\t:" << modNum << "\nVehicle price\t:" << pri << endl;
    }
};
class twoWheeler : public vehicle{};
class twoManu : public twoWheeler
{
public:
    void get_twoManu_infor()
    {
        cout<<"----Input Two wheeler(Manual)----"<<endl;
        input();
    }
    void dis_twoManu_infor()
    {
        cout<<"----Two wheeler(Manual)----"<<endl;
        output();
    }
};

class twoElec : public twoWheeler
{
public:
    void get_twoElec_infor()
    {
        cout<<"----Two wheeler(Electric)----"<<endl;
        input();
    }
    void dis_twoElec_infor()
    {
        cout<<"----Two wheeler(Electric)----"<<endl;
        output();
    }
};

class twoAuto : public twoWheeler
{
public:
    void get_twoAuto_infor()
    {
        cout<<"----Input Two wheeler(Automatic)----"<<endl;
        input();
    }
    void dis_twoAuto_infor()
    {
        cout<<"----Two wheeler(Automatic)----"<<endl;
        output();
    }
};
class threeWheeler : public vehicle{};
class threeManu : public threeWheeler
{
public:
    void get_threeManu_infor()
    {
        cout<<"----Input Three wheeler(Manual)----"<<endl;
        input();
    }
    void dis_threeManu_infor()
    {
        cout<<"----Three wheeler(Manual)----"<<endl;
        output();
    }
};

class threeElec : public threeWheeler
{
public:
    void get_threeElec_infor()
    {
        cout<<"----Input Three wheeler(Electric)----"<<endl;
        input();
    }
    void dis_threeElec_infor()
    {
        cout<<"----Three wheeler(Electric)----"<<endl;
        output();
    }
};
class threeAuto : public threeWheeler
{
public:
    void get_threeAuto_infor()
    {
        cout<<"----Input Three wheeler(Automatic)----"<<endl;
        input();
    }
    void dis_threeAuto_infor()
    {
        cout<<"----Three wheeler(Automatic)----"<<endl;
        output();
    }
};
class fourWheeler : public vehicle{};
class fourAuto : public fourWheeler
{
public:
    void get_forAuto_infor()
    {
        cout<<"----Input Four wheeler(Automatic)----"<<endl;
        input();
    }
    void dis_forAuto_infor()
    {
        cout<<"----Four wheeler(Automatic)----"<<endl;
        output();
    }
};
int main()
{
    twoManu twm;
    twm.get_twoManu_infor();
    twm.dis_twoManu_infor();
    cout << endl;

    twoElec twe;
    twe.get_twoElec_infor();
    twe.dis_twoElec_infor();
    cout << endl;

    twoAuto twa;
    twa.get_twoAuto_infor();
    twa.dis_twoAuto_infor();
    cout << endl;

    threeManu tm;
    tm.get_threeManu_infor();
    tm.dis_threeManu_infor();
    cout << endl;

    threeElec te;
    te.get_threeElec_infor();
    te.dis_threeElec_infor();
    cout << endl;

    threeAuto ta;
    ta.get_threeAuto_infor();
    ta.dis_threeAuto_infor();
    cout << endl;
    
    fourAuto fow;
    fow.get_forAuto_infor();
    fow.dis_forAuto_infor();
}