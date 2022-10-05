#include<fstream>
#include<iostream>
using namespace std;
main()
{
    float cgpa;
    int rollnum;
    string name;
    char grade;
    fstream newfile;
    newfile.open("result_card.txt" , ios::out);
    cout <<"Enter Roll Number : "<<endl;
    cin >> rollnum;
    cout <<"Enter name : "<<endl;
    cin >> name;
    cout <<"Enter cgpa : ";
    cin >> cgpa;
    cout <<"Enter grade : "<<endl;
    cin >> grade;
    newfile << "Roll Number"<<"\t"<<"Name"<<"\t"<<"CGPA"<<"\t"<<"Grade"<<endl;
    newfile<<rollnum<<"\t\t"<<name<<"\t"<<cgpa<<"\t"<<grade<<endl;
    newfile.close();
}