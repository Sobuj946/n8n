#include<bits/stdc++.h>
#include<ostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outf("Item");
    cout<<"Enter your name:";
    char name[30];
    cin>>name;
    outf<<name<<"\n";
    cout<<"Enter your cost:";
    double cost;
    cin>>cost;
    outf<<cost<<"\n";
    outf.close();
    ifstream inf("item");
    inf>>name;
    inf>>cost;
    cout<<"Item name:"<<name<<endl;
    cout<<"Item cost:"<<cost<<endl;
    inf.close();
    
    return 0;
}