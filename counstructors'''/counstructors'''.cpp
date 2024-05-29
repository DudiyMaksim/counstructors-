#include <iostream>
#include <cstring>
using namespace std;


class telephone_book {
private:
    string fullname;
    int homephone;
    int workphone;
    int mobilephone;
    string add_info;
public:
    telephone_book();
    telephone_book(string fn, int hpho, int wpho, int mpho, string addinfo);
    void Show() {
        cout << "fullname : " << fullname << endl;
        cout << "homephone : " << homephone << endl;
        cout << "workphone : " << workphone << endl;
        cout << "mobilephone : " << mobilephone << endl;
        cout << "add_info : " << add_info << endl;
    }
    void setfullname(string fullname);
    void sethomephone(int homep);
    void setworkphone(int workp);
    void setmobilephone(int mobilep);
    void setadd_info(string addinfo);
};











int main()
{
    telephone_book book1("Iliya", 011123, 123123, 1252, "add info");
    book1.Show();
}

telephone_book::telephone_book()
{
    fullname = "No name";
    homephone = 0;
    workphone = 0;
    mobilephone = 0;
    add_info = "None additional information";
}

telephone_book::telephone_book(string fn, int hpho, int wpho, int mpho, string addinfo)
{
    fullname = fn;
    homephone = hpho;
    workphone = wpho;
    mobilephone = mpho;
    add_info = addinfo;
}

void telephone_book::setfullname(string fulln)
{
    fullname = fulln;
}

void telephone_book::sethomephone(int homep)
{
    homephone = homep;
}

void telephone_book::setworkphone(int workp)
{
    workphone = workp;
}

void telephone_book::setmobilephone(int mobilep)
{
    mobilephone = mobilep;
}

void telephone_book::setadd_info(string addinfo)
{
    add_info = addinfo;
}   
