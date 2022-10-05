#include <iostream>
#include <stdlib.h>
using namespace std;
void Header()
{
    system("cls");
    cout << "****************************************************************************" << endl;
    cout << "**                      University Management System                      **" << endl;
    cout << "****************************************************************************" << endl;
    cout << "" << endl;
    cout << "" << endl;
} // Header of UMS
int MainMenu()
{

    cout << "Main Menu >" << endl;
    cout << "---------------------------------------------------" << endl;

    // options
    cout << "Select one of the following options number..." << endl;
    cout << "1. Add New Student Record" << endl;
    cout << "2. View All Records" << endl;
    cout << "3. Print the Record in Merit Order" << endl;
    cout << "0. Exit" << endl;
    cout << "Your Option.." << endl;
    int option;
    cin >> option; // This takes option from user
    return option;
} // Main Menu
float Merit(int matricMarks, int interMarks, float ecatMarks)
{
    float merit = (matricMarks / 1100.0 * 0.25 * 100) + (interMarks / 1100.0 * 0.45 * 100) + (ecatMarks / 400.0 * 0.30 * 100);
    return merit;
}
void View(string name, float matric, float inter, float ecat, float merit, string pref1, string pref2, string pref3)
{

    cout << name << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << merit << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
}

void Order(string name, float merit)
{
    cout << name << "\t\t" << merit << endl;
}
main()
{
    int option, option0, option1, option2, option3, option4;
    float matricMarks1, interMarks1, ecatMarks1; // For student 1
    string name1, _1Pref1, _1Pref2, _1Pref3;
    float matricMarks2, interMarks2, ecatMarks2; // For student 2
    string name2, _2Pref1, _2Pref2, _2Pref3;
    float matricMarks3, interMarks3, ecatMarks3; // For student 3
    string name3, _3Pref1, _3Pref2, _3Pref3;
    float matricMarks4, interMarks4, ecatMarks4; // For student 4
    string name4, _4Pref1, _4Pref2, _4Pref3;
    float merit1 = 0, merit2 = 0, merit3 = 0, merit4 = 0; // Agregate for all students
    int exit = 0, count = 0;
    Header();
    option = MainMenu();
    if (option == 1)
    {
        Header();
        cout << "Main Menu > Add Student" << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Enter Student Name...........................";
        cin >> name1;
        cout << "Enter Obtained Marks in Matric...............";
        cin >> matricMarks1;
        cout << "Enter Obtained Marks in Inter................";
        cin >> interMarks1;
        cout << "Enter Obtained Marks in Ecat.................";
        cin >> ecatMarks1;
        cout << "" << endl;
        cout << "********** Enter The Name From Following Programs **********" << endl;
        cout << "CS              SE              IT" << endl;
        cout << "************************************************************" << endl;
        cout << "" << endl;
        cout << "Enter First Preference.......................";
        cin >> _1Pref1;
        cout << "Enter Second Preference......................";
        cin >> _1Pref2;
        cout << "Enter Third Preference.......................";
        cin >> _1Pref3;
        merit1 = Merit(matricMarks1, interMarks1, ecatMarks1);
        cout << "" << endl;
        cout << "Student Details Saved" << endl;
        cout << "Your Aggregate is " << merit1 << endl;
        count = count + 1;

        cout << "" << endl;
        cout << "Press 0 to Go Back...";
        cin >> option0;
        system("cls");
    }
    else if (option == 2)
    {
        cout << "You donot have any Record Yet";
        cout << endl;
        cout << "Press 0 to go back";
        cin >> option0;
        system("cls");
    }
    else if (option == 3)
    {
        cout << "You donot have any Record Yet";
        cout << endl;
        cout << "Press 0 to go back";
        cin >> option0;
        system("cls");
    }
    else if (option == 0)
    {
        system("cls");
        cout << "Thanks For Using our Application";
        exit = 1;
    }

    if (option0 == 0 && exit != 1)
    {
        Header();
        option = MainMenu();
        if (option == 1)
        {
            Header();
            cout << "Main Menu > Add Student" << endl;
            cout << "---------------------------------------------------" << endl;
            if (count == 0)
            {
                cout << "Enter Student Name...........................";
                cin >> name1;
                cout << "Enter Obtained Marks in Matric...............";
                cin >> matricMarks1;
                cout << "Enter Obtained Marks in Inter................";
                cin >> interMarks1;
                cout << "Enter Obtained Marks in Ecat.................";
                cin >> ecatMarks1;
                cout << "" << endl;
                cout << "********** Enter The Name From Following Programs **********" << endl;
                cout << "CS              SE              IT" << endl;
                cout << "************************************************************" << endl;
                cout << "" << endl;
                cout << "Enter First Preference.......................";
                cin >> _1Pref1;
                cout << "Enter Second Preference......................";
                cin >> _1Pref2;
                cout << "Enter Third Preference.......................";
                cin >> _1Pref3;
                merit1 = Merit(matricMarks1, interMarks1, ecatMarks1);
                cout << "" << endl;
                cout << "Student Details Saved" << endl;
                cout << "Your Aggregate is " << merit1 << endl;
                count = count + 1;
            }

            if (count == 1)
            {
                cout << "Enter Student Name...........................";
                cin >> name2;
                cout << "Enter Obtained Marks in Matric...............";
                cin >> matricMarks2;
                cout << "Enter Obtained Marks in Inter................";
                cin >> interMarks2;
                cout << "Enter Obtained Marks in Ecat.................";
                cin >> ecatMarks2;
                cout << "" << endl;
                cout << "********** Enter The Name From Following Programs **********" << endl;
                cout << "CS              SE              IT" << endl;
                cout << "************************************************************" << endl;
                cout << "" << endl;
                cout << "Enter First Preference.......................";
                cin >> _2Pref1;
                cout << "Enter Second Preference......................";
                cin >> _2Pref2;
                cout << "Enter Third Preference.......................";
                cin >> _2Pref3;
                merit2 = Merit(matricMarks2, interMarks2, ecatMarks2);
                cout << "" << endl;
                cout << "Student Details Saved" << endl;
                cout << "Your Aggregate is " << merit2 << endl;
                count = count + 1;
            }
            if (count == 2)
            {
                cout << "Main Menu > Add Student" << endl;
                cout << "---------------------------------------------------" << endl;
                cout << "Enter Student Name...........................";
                cin >> name3;
                cout << "Enter Obtained Marks in Matric...............";
                cin >> matricMarks3;
                cout << "Enter Obtained Marks in Inter................";
                cin >> interMarks3;
                cout << "Enter Obtained Marks in Ecat.................";
                cin >> ecatMarks3;
                cout << "" << endl;
                cout << "********** Enter The Name From Following Programs **********" << endl;
                cout << "CS              SE              IT" << endl;
                cout << "************************************************************" << endl;
                cout << "" << endl;
                cout << "Enter First Preference.......................";
                cin >> _3Pref1;
                cout << "Enter Second Preference......................";
                cin >> _3Pref2;
                cout << "Enter Third Preference.......................";
                cin >> _3Pref3;
                merit3 = Merit(matricMarks3, interMarks3, ecatMarks3);
                cout << "" << endl;
                cout << "Student Details Saved" << endl;
                cout << "Your Aggregate is " << merit3 << endl;
                count = count + 1;
            }
            else
            {
                cout << "Enter Student Name...........................";
                cin >> name4;
                cout << "Enter Obtained Marks in Matric...............";
                cin >> matricMarks4;
                cout << "Enter Obtained Marks in Inter................";
                cin >> interMarks4;
                cout << "Enter Obtained Marks in Ecat.................";
                cin >> ecatMarks4;
                cout << "" << endl;
                cout << "********** Enter The Name From Following Programs **********" << endl;
                cout << "CS              SE              IT" << endl;
                cout << "************************************************************" << endl;
                cout << "" << endl;
                cout << "Enter First Preference.......................";
                cin >> _4Pref1;
                cout << "Enter Second Preference......................";
                cin >> _4Pref2;
                cout << "Enter Third Preference.......................";
                cin >> _4Pref3;
                merit4 = Merit(matricMarks4, interMarks4, ecatMarks4);
                cout << "" << endl;
                cout << "Student Details Saved" << endl;
                cout << "Your Aggregate is " << merit4 << endl;
                count = count + 1;
            }

            cout << "" << endl;
            cout << "Press 0 to Go Back...";
            cin >> option1;
            system("cls");
        }
        else if (option == 2)
        {
            Header();
            // Main Menu
            cout << "Main Menu > View All Record" << endl;
            cout << "---------------------------------------------------" << endl;
            if (count == 0)
            {
                cout << "You donot have any Record Yet";
                cout << endl;
            }
            else if (count == 1)
            {
                cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
                View(name1, matricMarks1, interMarks1, ecatMarks2, merit1, _1Pref1, _1Pref2, _1Pref3);
            }
            else if (count == 2)
            {
                cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
                View(name1, matricMarks1, interMarks1, ecatMarks1, merit1, _1Pref1, _1Pref2, _1Pref3);
                View(name2, matricMarks2, interMarks2, ecatMarks2, merit2, _2Pref1, _2Pref2, _2Pref3);
            }
            else if (count == 3)
            {
                cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
                View(name1, matricMarks1, interMarks1, ecatMarks1, merit1, _1Pref1, _1Pref2, _1Pref3);
                View(name2, matricMarks2, interMarks2, ecatMarks2, merit2, _2Pref1, _2Pref2, _2Pref3);
                View(name3, matricMarks3, interMarks3, ecatMarks3, merit3, _3Pref1, _3Pref2, _3Pref3);
            }
            else
            {
                cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
                View(name1, matricMarks1, interMarks1, ecatMarks1, merit1, _1Pref1, _1Pref2, _1Pref3);
                View(name2, matricMarks2, interMarks2, ecatMarks2, merit2, _2Pref1, _2Pref2, _2Pref3);
                View(name3, matricMarks3, interMarks3, ecatMarks3, merit3, _3Pref1, _3Pref2, _3Pref3);
                View(name4, matricMarks4, interMarks4, ecatMarks4, merit4, _4Pref1, _4Pref2, _4Pref3);
            }

            cout << "" << endl;
            cout << "Press 0 to Go Back...";
            cin >> option1;
            system("cls");
        }
        else if (option == 3)
        {
            Header();
            // Main Menu
            cout << "Main Menu > Print Record in Merit Order" << endl;
            cout << "---------------------------------------------------" << endl;

            if (count == 0)
            {
                cout << "You donot have any Record Yet";
                cout << endl;
                cout << "Name\t\tAggregate" << endl;
                Order(name1, merit1);
                Order(name2, merit2);
                Order(name3, merit3);
                Order(name4, merit4);
            }
            else if (count == 1)
            {
                cout << "Name\t\tAggregate" << endl;
                Order(name1, merit1);
            }
            else if (count == 2)
            {
                if (merit1 > merit2)
                {

                    cout << "Name\t\tAggregate" << endl;
                    Order(name1, merit1);
                    Order(name2, merit2);
                }

                if (merit2 > merit1)
                {
                    cout << "Name\t\tAggregate" << endl;
                    Order(name2, merit2);
                    Order(name1, merit1);
                }
            }
            else if (count == 3)
            {
                if (merit1 > merit2)
                {
                    if (merit1 > merit3 && merit2 > merit3)
                    {

                        cout << "Name\t\tAggregate" << endl;
                        Order(name1, merit1);
                        Order(name2, merit2);
                        Order(name3, merit3);
                    }
                    else if (merit1 > merit3 && merit3 > merit2)
                    {
                        cout << "Name\t\tAggregate" << endl;
                        Order(name1, merit1);
                        Order(name3, merit3);
                        Order(name2, merit2);
                    }
                    else if (merit3 > merit1)
                    {
                        cout << "Name\t\tAggregate" << endl;
                        Order(name3, merit3);
                        Order(name1, merit1);
                        Order(name2, merit2);
                    }
                }

                else if (merit2 > merit1)
                {
                    if (merit2 > merit3 && merit1 > merit3)
                    {
                        cout << "Name\t\tAggregate" << endl;
                        Order(name2, merit2);
                        Order(name1, merit1);
                        Order(name3, merit3);
                    }
                    else if (merit1 < merit3 && merit3 > merit2)
                    {
                        cout << "Name\t\tAggregate" << endl;
                        Order(name3, merit3);
                        Order(name2, merit2);
                        Order(name1, merit1);
                    }
                    else if (merit3 > merit1 && merit2 > merit3)
                    {
                        cout << "Name\t\tAggregate" << endl;
                        Order(name2, merit2);
                        Order(name3, merit3);
                        Order(name1, merit1);
                    }
                }
            }

            else if (count == 4)
            {
                if (merit1 > merit2 && merit1 > merit3 && merit1 > merit4)
                {
                    if (merit2 > merit3)
                    {
                        if (merit3 > merit4)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name1, merit1);
                            Order(name2, merit2);
                            Order(name3, merit3);
                            Order(name4, merit4);
                        }
                        else if (merit4 > merit3)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name1, merit1);
                            Order(name2, merit2);
                            Order(name4, merit4);
                            Order(name3, merit3);
                        }
                    }
                    else if (merit3 > merit2)
                    {
                        if (merit2 > merit4)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name1, merit1);
                            Order(name3, merit3);
                            Order(name2, merit2);
                            Order(name4, merit4);
                        }
                        if (merit4 > merit2)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name1, merit1);
                            Order(name3, merit3);
                            Order(name4, merit4);
                            Order(name2, merit2);
                        }
                    }
                    else if (merit4 > merit2)
                    {
                        if (merit2 > merit3)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name1, merit1);
                            Order(name4, merit4);
                            Order(name2, merit2);
                            Order(name3, merit3);
                        }
                        else if (merit3 > merit2)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name1, merit1);
                            Order(name4, merit4);
                            Order(name3, merit3);
                            Order(name2, merit2);
                        }
                    }
                }

                else if (merit2 > merit1 && merit2 > merit3 && merit2 > merit4)
                {
                    if (merit1 > merit3)
                    {
                        if (merit3 > merit4)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name2, merit2);
                            Order(name1, merit1);
                            Order(name3, merit3);
                            Order(name4, merit4);
                        }
                        else if (merit4 > merit3)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name2, merit2);
                            Order(name1, merit1);
                            Order(name4, merit4);
                            Order(name3, merit3);
                        }
                    }
                    else if (merit3 > merit1)
                    {
                        if (merit1 > merit4)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name2, merit2);
                            Order(name3, merit3);
                            Order(name1, merit1);
                            Order(name4, merit4);
                        }
                        if (merit4 > merit1)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name2, merit2);
                            Order(name3, merit3);
                            Order(name4, merit4);
                            Order(name1, merit1);
                        }
                    }
                    else if (merit4 > merit1)
                    {
                        if (merit1 > merit3)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name2, merit2);
                            Order(name4, merit4);
                            Order(name1, merit1);
                            Order(name3, merit3);
                        }
                        else if (merit3 > merit1)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name2, merit2);
                            Order(name4, merit4);
                            Order(name3, merit3);
                            Order(name1, merit1);
                        }
                    }
                }
                else if (merit3 > merit1 && merit3 > merit2 && merit3 > merit4)
                {
                    if (merit1 > merit2)
                    {
                        if (merit2 > merit4)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name3, merit3);
                            Order(name1, merit1);
                            Order(name2, merit2);
                            Order(name4, merit4);
                        }
                        else if (merit4 > merit2)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name3, merit3);
                            Order(name1, merit1);
                            Order(name4, merit4);
                            Order(name2, merit2);
                        }
                    }
                    else if (merit2 > merit1)
                    {
                        if (merit1 > merit4)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name3, merit3);
                            Order(name2, merit2);
                            Order(name1, merit1);
                            Order(name4, merit4);
                        }
                        if (merit4 > merit1)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name3, merit3);
                            Order(name2, merit2);
                            Order(name4, merit4);
                            Order(name1, merit1);
                        }
                    }
                    else if (merit4 > merit1)
                    {
                        if (merit1 > merit2)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name3, merit3);
                            Order(name4, merit4);
                            Order(name1, merit1);
                            Order(name2, merit2);
                        }
                        else if (merit2 > merit1)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name3, merit3);
                            Order(name4, merit4);
                            Order(name2, merit2);
                            Order(name1, merit1);
                        }
                    }
                }
                else if (merit4 > merit1 && merit4 > merit2 && merit4 > merit3)
                {
                    if (merit1 > merit2)
                    {
                        if (merit2 > merit3)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name4, merit4);
                            Order(name1, merit1);
                            Order(name2, merit2);
                            Order(name3, merit3);
                        }
                        else if (merit3 > merit2)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name4, merit4);
                            Order(name1, merit1);
                            Order(name3, merit3);
                            Order(name2, merit2);
                        }
                    }
                    else if (merit2 > merit1)
                    {
                        if (merit1 > merit3)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name4, merit4);
                            Order(name2, merit2);
                            Order(name1, merit1);
                            Order(name3, merit3);
                        }
                        if (merit3 > merit1)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name4, merit4);
                            Order(name2, merit2);
                            Order(name3, merit3);
                            Order(name1, merit1);
                        }
                    }
                    else if (merit3 > merit1)
                    {
                        if (merit1 > merit2)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name4, merit4);
                            Order(name3, merit3);
                            Order(name1, merit1);
                            Order(name2, merit2);
                        }
                        else if (merit2 > merit1)
                        {
                            cout << "Name\t\tAggregate" << endl;
                            Order(name4, merit4);
                            Order(name3, merit3);
                            Order(name2, merit2);
                            Order(name1, merit1);
                        }
                    }
                }
            }

            cout << "Press 0 to exit the program";
            cin >> option;
        }
        else if (option == 0)
        {
            system("cls");
            cout << "Thanks For Using our Application";
            exit = 1;
        }
    }

    if (option1 = 0 && exit != 1)
    {
        Header();
        option = MainMenu();
        if (option == 1)
        {
            Header();
            cout << "Main Menu > Add Student" << endl;
            cout << "---------------------------------------------------" << endl;
            cout << "Enter Student Name...........................";
            cin >> name3;
            cout << "Enter Obtained Marks in Matric...............";
            cin >> matricMarks3;
            cout << "Enter Obtained Marks in Inter................";
            cin >> interMarks3;
            cout << "Enter Obtained Marks in Ecat.................";
            cin >> ecatMarks3;
            cout << "" << endl;
            cout << "********** Enter The Name From Following Programs **********" << endl;
            cout << "CS              SE              IT" << endl;
            cout << "************************************************************" << endl;
            cout << "" << endl;
            cout << "Enter First Preference.......................";
            cin >> _3Pref1;
            cout << "Enter Second Preference......................";
            cin >> _3Pref2;
            cout << "Enter Third Preference.......................";
            cin >> _3Pref3;
        }
        else if (option == 2)
        {
        }
        else if (option == 3)
        {
        }
        else if (option == 0)
        {
            system("cls");
            cout << "Thanks For Using our Application";
            exit = 1;
        }
    }
}