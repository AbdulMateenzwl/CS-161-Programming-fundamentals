#include<fstream>
#include<iostream>
using namespace std;


void name()
{
    string name;
    int age,matric,fsc,ecat;
    string school,clg;
    fstream newfile;
    char k =' ';
    newfile.open("result_card.txt" , ios::out);
    newfile << "Name"<<"\t"<<"Age"<<"\t"<<"School"<<"\t"<<"Matric"<<"\t"<<"College"<<"\t"<<"Fsc"<<"\t"<<"Ecat"<<endl;
    newfile.close();
    while (k !='e')
    {
        newfile.open("result_card.txt", ios::app);
        cout << "Enter name : " << endl;
        cin >> name;
        cout << "Enter age : " << endl;
        cin >> age;
        cout << "Enter School : " << endl;
        cin >> school;
        cout << "Enter Matric Marks : " << endl;
        cin >> matric;
        cout << "Enter College : " << endl;
        cin >> clg;
        cout << "Enter Fsc Marks : " << endl;
        cin >> fsc;
        cout << "Enter Ecat Marks : " << endl;
        cin >> ecat;
        newfile << name << "\t" << age << "\t" << school << "\t" << matric << "\t" << clg << "\t" << fsc << "\t" << ecat << endl;
        cout <<"Press E to exit";
        cin >> k;
        newfile.close();
    }
    
}
main()
{
    name();
}