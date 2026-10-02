#include<iostream>
#include<fstream>
using namespace std;
class Multiple
{
    public:
    void file_open()
    {
        ofstream fout;
        fout.open("country");
        fout<<"United state of America\n";
        fout<<"United Kingdom\n";
        fout<<"South Korea\n";
        fout.close();
        fout.open("capital");
        fout<<"Washigton\n";
        fout<<"London\n";
        fout<<"Seoul\n";
        fout.close();
    }
    void file_read()
    {
        ifstream fin;
        string s;
        fin.open("country");
        while(getline(fin,s))
        {
            cout<<s<<endl;
        }
        fin.close();
        string s1;
        fin.open("capital");
        while(getline(fin,s1))
        {
            cout<<s1<<endl;
        }
        fin.close();
    }

};
int main(){
    Multiple m;
    m.file_open();
    m.file_read();

    
    return 0;
}