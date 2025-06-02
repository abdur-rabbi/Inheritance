/*The database created in exersice 8.3 does not include educationl information of the staff. It has been dicided to added this information to teachers and officers(and not for typist) which will help the management in decision making with regrad to training, promotion, etc. Add anotherr class callde education that holds two pieces of education information, namely, height qualification in general education and highest professional qualification. This class should be inherited by yhe classes tercher and officer. Modigy the program of Exercise 8.19 to incorporate these additions.*/
/*An educational institution wishes to maintain a database of its employees. The database is divided into a number os classes whose hierarchical relationships are shown in 8.14. The figure also shows the minimum information requred for each class. Specify all the classes and define functions to create the database and retrieve individual information as and when required*/
#include <iostream>
using namespace std;
class staff
{
protected:
    string name;
    int code;

public:
    void input()
    {
        cout << "Input Staff name: ";
        getline(cin, name);
        cout << "Input Staff code: ";
        cin >> code;
    }
    void output()
    {
        cout << "The staff name is\t:" << name << "\nCode is\t\t\t:" << code << endl;
    }
};
class education
{
private:
    string hqge, hpe;

public:
    void get_edu_infor()
    {
        cin.ignore();
        cout << "Height qualification in general education: ";
        getline(cin, hqge);
        cout << "Height professional education: ";
        getline(cin, hpe);
    }
    void dis_edu_info()
    {
        cout << "Height qualification in general education: " << hqge << "\nHeight professional education: " << hpe << endl;
    }
};
class teacher : public staff, public education
{
private:
    string sub, publication;

public:
    void get_publication()
    {
        cin.ignore();
        cout << "The subject name: ";
        getline(cin, sub);
        cout << "Publication name: ";
        getline(cin, publication);
    }
    void display_teacher_information()
    {
        cout << "Subject Name\t\t:" << sub << "\nPublication Name\t:" << publication << endl;
    }
};
class officer : public staff, public education
{
    string grade;

public:
    void officer_grade()
    {
        cin.ignore();
        cout << "Enter grade: ";
        getline(cin, grade);
    }
    void display_officer_information()
    {
        cout << "Officer grade is\t:" << grade << endl;
    }
};
class typist : public staff
{
    float speed;

public:
    void typist_information()
    {
        cout << "Enter type speed per second: ";
        cin >> speed;
    }
    void display_typist_information()
    {
        cout << "Typing speed is " << speed << " wps." << endl;
    }
};
class reguler : public typist
{
public:
    void get_reguler()
    {
        typist_information();
    }
    void display_reguler()
    {
        display_typist_information();
    }
};
class casual : public typist
{
private:
    float w;

public:
    void get_daily_wages()
    {
        cout << "Input daily Wages: ";
        cin >> w;
    }
    void display_daily_wages()
    {
        cout << "Daily wages\t:" << w << endl;
    }
};
int main()
{
    cout << "...............Teacher Information..............." << endl;
    teacher ta;
    ta.input();
    ta.get_edu_infor();
    ta.get_publication();
    ta.output();
    ta.dis_edu_info();
    ta.display_teacher_information();
    cout << endl;

    cout << "...............Officer Information..............." << endl;
    officer of;
    of.input();
    of.get_edu_infor();
    of.officer_grade();
    cout<<endl;
    of.output();
    of.dis_edu_info();
    of.display_officer_information();
    cout << endl;

    cout << "...............Typist Information..............." << endl;
    typist tp;
    tp.input();
    tp.typist_information();
    tp.output();
    tp.display_typist_information();
    cout << endl;

    cout << "...............Reguler Typist Information..............." << endl;

    reguler rg;
    rg.input();
    rg.get_reguler();
    rg.output();
    rg.display_reguler();
    cout<<endl;

    cout << "...............Casula Typist Information..............." << endl;
    casual ca;
    ca.input();
    ca.typist_information();
    ca.get_daily_wages();
    ca.output();
    ca.display_typist_information();
    ca.display_daily_wages();
    cout << endl;
}
