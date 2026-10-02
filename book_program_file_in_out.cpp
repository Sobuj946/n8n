#include<iostream>
#include<fstream>
using namespace std;
class Businessman
{
    public:
    string Item_name;
    double cost;
    void input()
    {
        cout<<"Enter the item name:";
        getline(cin,Item_name);
        cout<<"Enter the item cost:";
        cin>>cost;
    }
    void file_out()//file write
    {
        ofstream outfile("Item");
        outfile<<Item_name<<endl;
        outfile<<cost<<endl;
        outfile.close();
    }
    void file_in()//read file
    {
        ifstream Infile("Item");
        Infile>>Item_name;
        Infile>>cost;
        cout<<"The item name is:"<<Item_name<<endl;
        cout<<"The item cost is:"<<cost<<endl;
        Infile.close();
    }

};
int main(){

    Businessman b;
    b.input();
    b.file_out();
    b.file_in();
    return 0;
}