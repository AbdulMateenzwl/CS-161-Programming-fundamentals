#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int num_rec=1;

void header()
{
    cout << "*********************************************************" << endl;
    cout << "*        University Admission Management System         *" << endl;
    cout << "*********************************************************" << endl;
}
char menu()
{
    char option;
    cout << "Main Menu  >" << endl;
    cout << "-------------------" << endl;
    cout << "Select one of the following options number - - -" << endl;
    cout << "1. Add New Student Record" << endl;
    cout << "2. View all Records " << endl;
    cout << "3. print in merit order " << endl;
    cout << "4. Generate Merit List " << endl;
    cout << "5. Exit" << endl;
    cout << "Your OPtion ..... ";
    cin >> option;

    return option;
}
void view_record(string st_name, float st_matric, float st_fsc, float st_ecat)
{
    if (st_fsc > 0 )
    {
        cout << "Name of student "<<num_rec<<": " << st_name << endl;
        cout << "Matric Marks : " << st_matric << endl;
        cout << "Fsc Marks : " << st_fsc << endl;
        cout << "Ecat Marks : " << st_ecat << endl;
        num_rec=num_rec+1;
    }
}
void clear_screen()
{
    cout << "Enter any key to continue :";
    getch();
    system("cls");
}
float aggrigate(string name, float matric, float fsc, float ecat)
{
    float per;
    if (fsc > 0)
    {
        per = (fsc / 1100 * 100 * 0.45) + (ecat / 400 * 100 * 0.3) + (matric / 1100 * 100 * 0.25);
    }
    return per;
}
void sorting(float a1, float a2, float a3, float a4,string s1_name,string s2_name,string s3_name,string s4_name,float s1_matric,float s2_matric,float s3_matric,float s4_matric,float s1_fsc,float s2_fsc,float s3_fsc,float s4_fsc,float s1_ecat,float s2_ecat,float s3_ecat,float s4_ecat,float s1_agr,float s2_agr,float s3_agr,float s4_agr)
{
    if (s1_fsc > 0)
    {
        if (a1 > a2 && a1 > a3 && a1 > a4)
        {
            cout << "Name of Student = " << s1_name << endl;
            cout << "Matric Marks = " << s1_matric << endl;
            cout << "Inter Marks = " << s1_fsc << endl;
            cout << "Ecat Marks = " << s1_ecat << endl;
            cout << "Aggrigate = " << s1_agr << endl;
            if (a2 > a3 && a2 > a4)
            {
                cout << "Name = " << s2_name << endl;
                cout << "Matric Marks = " << s2_matric << endl;
                cout << "Inter Marks = " << s2_fsc << endl;
                cout << "Ecat Marks = " << s2_ecat << endl;
                cout << "Aggrigate = " << s2_agr << endl;
                if (a3 > a4)
                {
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                }
                else
                {
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                }
            }
            if (a3 > a2 && a3 > a4)
            {
                cout << "Name = " << s3_name << endl;
                cout << "Matric Marks = " << s3_matric << endl;
                cout << "Inter Marks = " << s3_fsc << endl;
                cout << "Ecat Marks = " << s3_ecat << endl;
                cout << "Aggrigate = " << s3_agr << endl;

                if (a2 > a4)
                {
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                }
                else
                {
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                }
            }
            if (a4 > a2 && a4 > a3)
            {
                cout << "Name = " << s4_name << endl;
                cout << "Inter Marks = " << s4_fsc << endl;
                cout << "Matric Marks = " << s4_matric << endl;
                cout << "Ecat Marks = " << s4_ecat << endl;
                cout << "Aggrigate = " << s4_agr << endl;
                if (a2 > a3)
                {
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                }
                else
                {
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                }
            }
        }
        if (a2 > a1 && a2 > a3 && a2 > a4)
        {
            cout << "Name = " << s2_name << endl;
            cout << "Matric Marks = " << s2_matric << endl;
            cout << "Inter Marks = " << s2_fsc << endl;
            cout << "Ecat Marks = " << s2_ecat << endl;
            cout << "Aggrigate = " << s2_agr << endl;
            if (a1 > a3 && a1 > a4)
            {
                cout << "Name of Student = " << s1_name << endl;
                cout << "Matric Marks = " << s1_matric << endl;
                cout << "Inter Marks = " << s1_fsc << endl;
                cout << "Ecat Marks = " << s1_ecat << endl;
                cout << "Aggrigate = " << s1_agr << endl;
                if (a3 > a4)
                {
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                }
                else
                {
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                }
            }
            if (a3 > a1 && a3 > a4)
            {
                cout << "Name = " << s3_name << endl;
                cout << "Matric Marks = " << s3_matric << endl;
                cout << "Inter Marks = " << s3_fsc << endl;
                cout << "Ecat Marks = " << s3_ecat << endl;
                cout << "Aggrigate = " << s3_agr << endl;
                if (a1 > a4)
                {
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                }
                else
                {
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                }
            }
            if (a4 > a1 && a4 > a3)
            {
                cout << "Name = " << s4_name << endl;
                cout << "Inter Marks = " << s4_fsc << endl;
                cout << "Matric Marks = " << s4_matric << endl;
                cout << "Ecat Marks = " << s4_ecat << endl;
                cout << "Aggrigate = " << s4_agr << endl;

                if (a1 > a3)
                {
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                }
                else
                {
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                }
            }
        }
        if (a3 > a1 && a3 > a2 && a3 > a4)
        {
            cout << "Name = " << s3_name << endl;
            cout << "Matric Marks = " << s3_matric << endl;
            cout << "Inter Marks = " << s3_fsc << endl;
            cout << "Ecat Marks = " << s3_ecat << endl;
            cout << "Aggrigate = " << s3_agr << endl;

            if (a1 > a2 && a1 > a4)
            {
                cout << "Name of Student = " << s1_name << endl;
                cout << "Matric Marks = " << s1_matric << endl;
                cout << "Inter Marks = " << s1_fsc << endl;
                cout << "Ecat Marks = " << s1_ecat << endl;
                cout << "Aggrigate = " << s1_agr << endl;

                if (a2 > a4)
                {
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                }
                else
                {
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                }
            }
            if (a2 > a1 && a2 > a4)
            {
                cout << "Name = " << s2_name << endl;
                cout << "Matric Marks = " << s2_matric << endl;
                cout << "Inter Marks = " << s2_fsc << endl;
                cout << "Ecat Marks = " << s2_ecat << endl;
                cout << "Aggrigate = " << s2_agr << endl;

                if (a1 > a4)
                {
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                }
                else
                {
                    cout << "Name = " << s4_name << endl;
                    cout << "Inter Marks = " << s4_fsc << endl;
                    cout << "Matric Marks = " << s4_matric << endl;
                    cout << "Ecat Marks = " << s4_ecat << endl;
                    cout << "Aggrigate = " << s4_agr << endl;
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                }
            }
            if (a4 > a1 && a4 > a2)
            {
                cout << "Name = " << s4_name << endl;
                cout << "Inter Marks = " << s4_fsc << endl;
                cout << "Matric Marks = " << s4_matric << endl;
                cout << "Ecat Marks = " << s4_ecat << endl;
                cout << "Aggrigate = " << s4_agr << endl;

                if (a1 > a2)
                {
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                }
                else
                {
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                }
            }
        }
        if (a4 > a1 && a4 > a2 && a4 > a3)
        {
            cout << "Name = " << s4_name << endl;
            cout << "Inter Marks = " << s4_fsc << endl;
            cout << "Matric Marks = " << s4_matric << endl;
            cout << "Ecat Marks = " << s4_ecat << endl;
            cout << "Aggrigate = " << s4_agr << endl;

            if (a1 > a2 && a1 > a3)
            {
                cout << "Name of Student = " << s1_name << endl;
                cout << "Matric Marks = " << s1_matric << endl;
                cout << "Inter Marks = " << s1_fsc << endl;
                cout << "Ecat Marks = " << s1_ecat << endl;
                cout << "Aggrigate = " << s1_agr << endl;

                if (a2 > a3)
                {
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                }
                else
                {
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                }
            }
            if (a2 > a1 && a2 > a3)
            {
                cout << "Name = " << s2_name << endl;
                cout << "Matric Marks = " << s2_matric << endl;
                cout << "Inter Marks = " << s2_fsc << endl;
                cout << "Ecat Marks = " << s2_ecat << endl;
                cout << "Aggrigate = " << s2_agr << endl;

                if (a1 > a3)
                {
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                }
                else
                {
                    cout << "Name = " << s3_name << endl;
                    cout << "Matric Marks = " << s3_matric << endl;
                    cout << "Inter Marks = " << s3_fsc << endl;
                    cout << "Ecat Marks = " << s3_ecat << endl;
                    cout << "Aggrigate = " << s3_agr << endl;
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                }
            }
            if (a3 > a1 && a3 > a2)
            {
                cout << "Name = " << s3_name << endl;
                cout << "Matric Marks = " << s3_matric << endl;
                cout << "Inter Marks = " << s3_fsc << endl;
                cout << "Ecat Marks = " << s3_ecat << endl;
                cout << "Aggrigate = " << s3_agr << endl;

                if (a1 > a2)
                {
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                }
                else
                {
                    cout << "Name = " << s2_name << endl;
                    cout << "Matric Marks = " << s2_matric << endl;
                    cout << "Inter Marks = " << s2_fsc << endl;
                    cout << "Ecat Marks = " << s2_ecat << endl;
                    cout << "Aggrigate = " << s2_agr << endl;
                    cout << "Name of Student = " << s1_name << endl;
                    cout << "Matric Marks = " << s1_matric << endl;
                    cout << "Inter Marks = " << s1_fsc << endl;
                    cout << "Ecat Marks = " << s1_ecat << endl;
                    cout << "Aggrigate = " << s1_agr << endl;
                }
            }
        }
    }
}

main()
{
    string st1_name="A", st2_name="A", st3_name="A", st4_name="A";
    float st1_matric = 0, st2_matric = 0, st3_matric = 0, st4_matric = 0;
    float st1_fsc = 0, st2_fsc = 0, st3_fsc = 0, st4_fsc = 0;
    float st1_ecat = 0, st2_ecat = 0, st3_ecat = 0, st4_ecat = 0;
    float st1_agr = 0, st2_agr = 0, st3_agr = 0, st4_agr = 0;
    int count = 0;
    char op = 'm';

    
    header();
    while (op != '5')
    {
        op = menu();
        if (op == '1')
        {
            if (count == 0)
            {
                cout << "Please Enter Your Name : ";
                cin >> st1_name;
                cout << "Please Enter Your Matric Marks : ";
                cin >> st1_matric;
                cout << "Please Enter Your FSc Marks : ";
                cin >> st1_fsc;
                cout << "Please Enter Your ECAT Marks : ";
                cin >> st1_ecat;
                st1_agr = aggrigate(st1_name, st1_matric, st1_fsc, st1_ecat);
                count = count + 1;
            }
            else if (count == 1)
            {
                cout << "Please Enter Your Name : ";
                cin >> st2_name;
                cout << "Please Enter Your Matric Marks : ";
                cin >> st2_matric;
                cout << "Please Enter Your FSc Marks : ";
                cin >> st2_fsc;
                cout << "Please Enter Your ECAT Marks : ";
                cin >> st2_ecat;
                st2_agr = aggrigate(st2_name, st2_matric, st2_fsc, st2_ecat);
                count = count + 1;
            }
            else if (count == 2)
            {
                cout << "Please Enter Your Name : ";
                cin >> st3_name;
                cout << "Please Enter Your Matric Marks : ";
                cin >> st3_matric;
                cout << "Please Enter Your FSc Marks : ";
                cin >> st3_fsc;
                cout << "Please Enter Your ECAT Marks : ";
                cin >> st3_ecat;
                st3_agr = aggrigate(st3_name, st3_matric, st3_fsc, st3_ecat);
                count = count + 1;
            }
            else if (count == 3)
            {
                cout << "Please Enter Your Name : ";
                cin >> st4_name;
                cout << "Please Enter Your Matric Marks : ";
                cin >> st4_matric;
                cout << "Please Enter Your FSc Marks : ";
                cin >> st4_fsc;
                cout << "Please Enter Your ECAT Marks : ";
                cin >> st4_ecat;
                st4_agr = aggrigate(st4_name, st4_matric, st4_fsc, st4_ecat);
                count = count + 1;
            }
            clear_screen();
        }
        else if (op == '2')
        {
            if(count == 0)
            {
                cout<<"You have not entered any record"<<endl;
            }
            view_record(st1_name, st1_matric, st1_fsc, st1_ecat);
            view_record(st2_name, st2_matric, st2_fsc, st2_ecat);
            view_record(st3_name, st3_matric, st3_fsc, st3_ecat);
            view_record(st1_name, st4_matric, st4_fsc, st4_ecat);
            clear_screen();
        }
        else if (op == '3')
        {
            if(count == 0)
            {
                cout<<"You have not Entered any record"<<endl;
            }
            if(st1_agr > 0)
            {
                cout<<"Aggrigate of student 1: "<<st1_agr<<endl;
            }
            if(st2_agr > 0)
            {
                cout<<"Aggrigate of student 2: "<<st2_agr<<endl;
            }
            if(st3_agr > 0)
            {
                cout<<"Aggrigate of student 3: "<<st3_agr<<endl;
            }
            if(st4_agr > 0)
            {
                cout<<"Aggrigate of student 4: "<<st4_agr<<endl;
            }
            clear_screen();
        }
        else if (op == '4')
        {
            if(count == 0)
            {
                cout<<"You have not Entered any record"<<endl;
            }
            sorting(st1_agr, st2_agr, st3_agr, st4_agr,st1_name, st2_name, st3_name, st4_name,st1_matric, st2_matric, st3_matric, st4_matric,st1_fsc, st2_fsc, st3_fsc, st4_fsc,st1_ecat, st2_ecat, st3_ecat, st4_ecat,st1_agr, st2_agr, st3_agr, st4_agr);
            clear_screen();
        }
        else if (op == '5')
        {
            cout << "Thanks for using our UMS ...";
            clear_screen();
        }
        else
        {
            cout << "You have entered wrong input....";
            clear_screen();
        }
    }
}