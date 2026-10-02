#include<iostream>
#include<fstream>
using namespace std;
class Info{
    public:
    string name,email;
    int number;
    void input()
    {
        cout<<"Enter your name:";
        getline(cin,name);
        cout<<"Enter your Email:";
        getline(cin,email);
        cout<<"Enter your phone nu  mber:";
        cin>>number;
    }
    void output()
    {
        cout<<"The name is:"<<name<<endl;
        cout<<"The Email is:"<<email<<endl;
        cout<<"The Number is:"<<number<<endl;

    }
    void file_maker()
    {
        ofstream file("info.txt");
        file<<"The name is:"<<name<<endl;
        file<<"The Email is:"<<email<<endl;
        file<<"The Number is:"<<number<<endl;
        file.close();
    }
};
int main(){
//  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    Info a;
    a.input();
    a.output();
    a.file_maker();
    
    return 0;
}