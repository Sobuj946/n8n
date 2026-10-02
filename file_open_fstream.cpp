#include<iostream>
#include<fstream>
using namespace std;
class Filopen{
    public:
    string name;
    string home;
    int id;
    void input()
    {
        cout<<"Enter Name:";
        getline(cin,name);
        cout<<"Enter home:";
        getline(cin,home);
        cout<<"Enter ID:";
        cin>>id;
    }
    void fileopen()
    {
        fstream file;
        file.open("ronjit.txt",ios::out|ios::app);//file open and file 
        //push the file name and home and id
        //this help the out mode
        if(!file.is_open())
        {
            cout<<"Error open  file.\n";
        }
        else
        {
            cout<<"File is open  successfull.\n";
            file<<"Enter Name:"<<name<<endl;
            file<<"Enter home:"<<home<<endl;

            file<<"Enter Id:"<<id<<endl;
            file.close();
        }
    }
    void read()
    {
        fstream file("ronjit.txt",ios::in);//
        string s;
        while(getline(file,s))//
        {
            cout<<s<<endl;
        }
    }
};
// 👇 operator overload korlam
ostream& operator<<(ostream& out, const Filopen& f) {
    out << "Enter Name:" << f.name << endl;
    out << "Enter home:" << f.home << endl;
    out << "Enter Id:" << f.id << endl;
    return out;
}
int main(){
    Filopen f;
    f.input();
    f.fileopen();
    f.read();
    fstream file("student.txt",ios::in|ios::out|ios::app);
    file<<f<<endl;
    
    return 0;
}