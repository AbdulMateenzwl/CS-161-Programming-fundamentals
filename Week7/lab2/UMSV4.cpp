#include <iostream>
#include <conio.h>
using namespace std;
void Header() // Header
{
    system("cls");
    cout << "****************************************************************************" << endl;
    cout << "**                      University Management System                      **" << endl;
    cout << "****************************************************************************" << endl;
    cout << "" << endl;
    cout << "" << endl;
} // End of Header of UMS

char MainMenu() // Main Menu
{
    Header();
    cout << "Main Menu >" << endl;
    cout << "---------------------------------------------------" << endl;

    // options
    cout << "Select one of the following options number..." << endl;
    cout << "1. Add New Student Record" << endl;
    cout << "2. View All Records" << endl;
    cout << "3. Print the Record in Merit Order" << endl;
    cout << "0. Exit" << endl;
    cout << "Your Option.." << endl;
    char option;
    cin >> option; // This takes option from user
    return option;
} // End of Main Menu
float Merit(int matricMarks, int interMarks, float ecatMarks)
{
    float merit = (matricMarks / 1100.0 * 0.25 * 100) + (interMarks / 1100.0 * 0.45 * 100) + (ecatMarks / 400.0 * 0.30 * 100);
    return merit;
} // To calculate merit
void View(string name, float matric, float inter, float ecat, float merit, string pref1, string pref2, string pref3)
{

    cout << name << "\t" << matric << "\t" << inter << "\t" << ecat << "\t" << merit << "\t" << pref1 << "\t" << pref2 << "\t" << pref3 << endl;
} // To show student record
void Order(string name, float merit)
{
    cout << name << "\t\t" << merit << endl;
} // To print student record in merit order
void Screen() // To clear screen
{
    cout << "Press any key to go back" << endl;
    getch();
    system("cls");
}
main()
{
    char option = ' ';
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

    while (exit == 0)
    {
        option = MainMenu();
        if (option == '1') // If user wants to enter students record
        {
            Header();
            cout << "Main Menu > Add Student" << endl;
            cout << "---------------------------------------------------" << endl;
            if (count == 0) // User will enter 1st student
            {
                cout << "Enter Student 1 Name...........................";
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

            else if (count == 1) // User will enter 2nd student
            {
                cout << "Enter Student 2 Name...........................";
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
            else if (count == 2) // User will enter 3rd student
            {
                cout << "Main Menu > Add Student" << endl;
                cout << "---------------------------------------------------" << endl;
                cout << "Enter Student 3 Name...........................";
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
            else if (count == 3) // User will enter 4th student
            {
                cout << "Enter Student 4 Name...........................";
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
            else // If user has already entered 4 students
            {
                cout << "You donot have enough space to enter further students" << endl;
            }
            Screen();
        }                       // End of option1
        else if (option == '2') // If user selects to view all record
        {
            Header();
            cout << "Main Menu > Show Record" << endl;
            cout << "---------------------------------------------------" << endl;
            if (count == 0) // If user hasnot entered any students yet
            {
                cout << "You donot have entered any student data yet" << endl;
            }
            else if (count != 0)
            {
                cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
                if (count == 1) // If user has entered 1  students
                {
                    View(name1, matricMarks1, interMarks1, ecatMarks2, merit1, _1Pref1, _1Pref2, _1Pref3);
                }
                else if (count == 2) // If user has entered 2  students
                {
                    View(name1, matricMarks1, interMarks1, ecatMarks1, merit1, _1Pref1, _1Pref2, _1Pref3);
                    View(name2, matricMarks2, interMarks2, ecatMarks2, merit2, _2Pref1, _2Pref2, _2Pref3);
                }
                else if (count == 3) // If user has entered 3  students
                {
                    View(name1, matricMarks1, interMarks1, ecatMarks1, merit1, _1Pref1, _1Pref2, _1Pref3);
                    View(name2, matricMarks2, interMarks2, ecatMarks2, merit2, _2Pref1, _2Pref2, _2Pref3);
                    View(name3, matricMarks3, interMarks3, ecatMarks3, merit3, _3Pref1, _3Pref2, _3Pref3);
                }
                else // If user has entered 4  students
                {
                    View(name1, matricMarks1, interMarks1, ecatMarks1, merit1, _1Pref1, _1Pref2, _1Pref3);
                    View(name2, matricMarks2, interMarks2, ecatMarks2, merit2, _2Pref1, _2Pref2, _2Pref3);
                    View(name3, matricMarks3, interMarks3, ecatMarks3, merit3, _3Pref1, _3Pref2, _3Pref3);
                    View(name4, matricMarks4, interMarks4, ecatMarks4, merit4, _4Pref1, _4Pref2, _4Pref3);
                }
            }

            Screen();
        }                       // End of option2
        else if (option == '3') // If user selects to print record in merit order
        {
            Header();
            // Main Menu
            cout << "Main Menu > Print Record in Merit Order" << endl;
            cout << "---------------------------------------------------" << endl;
            if (count == 0) // If no students has been entered yet
            {
                cout << "You donot have entered any student data yet" << endl;
            }
            else if (count != 0)
            {
                cout << "Name\t\tAggregate" << endl;
                if (count == 1) // If user has entered 1 student
                {
                    Order(name1, merit1);
                }
                else if (count == 2) // If user has entered 2 students
                {
                    if (merit1 > merit2)
                    {
                        Order(name1, merit1);
                        Order(name2, merit2);
                    }

                    if (merit2 > merit1)
                    {
                        Order(name2, merit2);
                        Order(name1, merit1);
                    }
                }
                else if (count == 3) // If user has entered 3 students
                {
                    if (merit1 > merit2)
                    {
                        if (merit1 > merit3 && merit2 > merit3)
                        {
                            Order(name1, merit1);
                            Order(name2, merit2);
                            Order(name3, merit3);
                        }
                        else if (merit1 > merit3 && merit3 > merit2)
                        {
                            Order(name1, merit1);
                            Order(name3, merit3);
                            Order(name2, merit2);
                        }
                        else if (merit3 > merit1)
                        {
                            Order(name3, merit3);
                            Order(name1, merit1);
                            Order(name2, merit2);
                        }
                    }

                    else if (merit2 > merit1)
                    {
                        if (merit2 > merit3 && merit1 > merit3)
                        {
                            Order(name2, merit2);
                            Order(name1, merit1);
                            Order(name3, merit3);
                        }
                        else if (merit1 < merit3 && merit3 > merit2)
                        {
                            Order(name3, merit3);
                            Order(name2, merit2);
                            Order(name1, merit1);
                        }
                        else if (merit3 > merit1 && merit2 > merit3)
                        {
                            Order(name2, merit2);
                            Order(name3, merit3);
                            Order(name1, merit1);
                        }
                    }
                }

                else if (count == 4) // If user has entered 4 students
                {
                    if (merit1 > merit2 && merit1 > merit3 && merit1 > merit4)
                    {
                        if (merit2 > merit3)
                        {
                            if (merit3 > merit4)
                            {
                                Order(name1, merit1);
                                Order(name2, merit2);
                                Order(name3, merit3);
                                Order(name4, merit4);
                            }
                            else if (merit4 > merit3)
                            {
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
                                Order(name1, merit1);
                                Order(name3, merit3);
                                Order(name2, merit2);
                                Order(name4, merit4);
                            }
                            if (merit4 > merit2)
                            {
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
                                Order(name1, merit1);
                                Order(name4, merit4);
                                Order(name2, merit2);
                                Order(name3, merit3);
                            }
                            else if (merit3 > merit2)
                            {
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
                                Order(name2, merit2);
                                Order(name1, merit1);
                                Order(name3, merit3);
                                Order(name4, merit4);
                            }
                            else if (merit4 > merit3)
                            {
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
                                Order(name2, merit2);
                                Order(name3, merit3);
                                Order(name1, merit1);
                                Order(name4, merit4);
                            }
                            if (merit4 > merit1)
                            {
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
                                Order(name2, merit2);
                                Order(name4, merit4);
                                Order(name1, merit1);
                                Order(name3, merit3);
                            }
                            else if (merit3 > merit1)
                            {
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
                                Order(name3, merit3);
                                Order(name1, merit1);
                                Order(name2, merit2);
                                Order(name4, merit4);
                            }
                            else if (merit4 > merit2)
                            {
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
                                Order(name3, merit3);
                                Order(name2, merit2);
                                Order(name1, merit1);
                                Order(name4, merit4);
                            }
                            if (merit4 > merit1)
                            {
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
                                Order(name3, merit3);
                                Order(name4, merit4);
                                Order(name1, merit1);
                                Order(name2, merit2);
                            }
                            else if (merit2 > merit1)
                            {
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
                                Order(name4, merit4);
                                Order(name1, merit1);
                                Order(name2, merit2);
                                Order(name3, merit3);
                            }
                            else if (merit3 > merit2)
                            {
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
                                Order(name4, merit4);
                                Order(name2, merit2);
                                Order(name1, merit1);
                                Order(name3, merit3);
                            }
                            if (merit3 > merit1)
                            {
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
                                Order(name4, merit4);
                                Order(name3, merit3);
                                Order(name1, merit1);
                                Order(name2, merit2);
                            }
                            else if (merit2 > merit1)
                            {
                                Order(name4, merit4);
                                Order(name3, merit3);
                                Order(name2, merit2);
                                Order(name1, merit1);
                            }
                        }
                    }
                }
            }
            Screen();
        }                       // End of option3
        else if (option == '0') // If user wants to exit the application
        {
            system("cls");
            cout << "Thanks For Using our Application";
            exit = 1;
        }    // End of option0
        else // If user enter wrong information
        {
            cout << "You have entered wrong input";
            Screen();
        } // End of Wrong input
    }
} // End of main

// LINE 12