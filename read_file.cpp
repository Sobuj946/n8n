#include <iostream>
#include <fstream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int phone;
    string study_palce;
    void input()
    {
        cout << "Enter student Name:";
        getline(cin, name);
        cout << "Enter student Roll:";
        cin >> roll;
        cout << "Enter student phone Number:";
        cin >> phone;
        cout << "Enter student study place:";
        getline(cin, study_palce);
    }
    void output()
    {
        cout << "The student name:" << name << endl;
        cout << "The student Roll is:" << roll << endl;
        cout << "The student phone:" << phone << endl;
        cout << "The student study place:" << study_palce << endl;
    }
    void file_maker()
    {
        ofstream file("file1.txt");//file open
        file << "The student name:" << name << endl;
        file << "The student Roll is:" << roll << endl;
        file << "The student phone:" << phone << endl;
        file << "The student study place:" << study_palce << endl;
        file.close();
    }
    void file_read()
    {

    }
};

int main()
{
    Student s;
    s.input();
    s.output();
    s.file_maker();

    return 0;
}