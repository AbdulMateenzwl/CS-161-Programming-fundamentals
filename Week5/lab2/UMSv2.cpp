#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
    int option, option0, option1, option2, option3, option4;
    float matricMarks1, interMarks1, ecatMarks1;
    string name1, _1Pref1, _1Pref2, _1Pref3;
    float matricMarks2, interMarks2, ecatMarks2;
    string name2, _2Pref1, _2Pref2, _2Pref3;
    float matricMarks3, interMarks3, ecatMarks3;
    string name3, _3Pref1, _3Pref2, _3Pref3;
    float matricMarks4, interMarks4, ecatMarks4;
    string name4, _4Pref1, _4Pref2, _4Pref3;
    float merit1 = 0, merit2 = 0, merit3 = 0, merit4 = 0;
    int exit = 0;

    // Header For UMS
    cout << "****************************************************************************" << endl;
    cout << "**                      University Management System                      **" << endl;
    cout << "****************************************************************************" << endl;
    cout << "" << endl;
    cout << "" << endl;

    // Main Menu
    cout << "Main Menu >" << endl;
    cout << "---------------------------------------------------" << endl;

    // options
    cout << "Select one of the following options number..." << endl;
    cout << "1. Add New Student Record" << endl;
    cout << "2. View All Records" << endl;
    cout << "3. Print the Record in Merit Order" << endl;
    cout << "0. Exit" << endl;
    cout << "Your Option.." << endl;
    cin >> option; // This takes option from user

    if (option == 1)
    {
        system("cls");
        // Header For UMS
        cout << "****************************************************************************" << endl;
        cout << "**                      University Management System                      **" << endl;
        cout << "****************************************************************************" << endl;
        cout << "" << endl;
        cout << "" << endl;

        // Main Menu
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
        merit1 = (matricMarks1 / 1100 * 0.25 * 100) + (interMarks1 / 1100 * 0.45 * 100) + (ecatMarks1 / 400 * 0.30 * 100);
        cout << "" << endl;
        cout << "Student Details Saved" << endl;
        cout << "Your Aggregate is " << merit1 << endl;

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
    else if (option == 4)
    {
        cout << "You donot have any Record Yet";
        cout << endl;
        cout << "Press 0 to go back";
        cin >> option0;
        system("cls");
    }
    else if (option == 5)
    {
        cout << "You donot have any Record Yet";
        cout << endl;
        cout << "Press 0 to go back";
        cin >> option0;
        system("cls");
    }

    if (option0 == 0)
    {

        // Header For UMS
        cout << "****************************************************************************" << endl;
        cout << "**                      University Management System                      **" << endl;
        cout << "****************************************************************************" << endl;
        cout << "" << endl;
        cout << "" << endl;

        // Main Menu
        cout << "Main Menu >" << endl;
        cout << "---------------------------------------------------" << endl;

        // options
        cout << "Select one of the following options number..." << endl;
        cout << "1. Add New Student Record" << endl;
        cout << "2. View All Records" << endl;
        cout << "3. Print the Record in Merit Order" << endl;
        cout << "0. Exit" << endl;
        cout << "Your Option.." << endl;
        cin >> option; // This takes option from user

        if (option == 1)
        {

            system("cls");
            // Header For UMS
            cout << "****************************************************************************" << endl;
            cout << "**                      University Management System                      **" << endl;
            cout << "****************************************************************************" << endl;
            cout << "" << endl;
            cout << "" << endl;

            // Main Menu
            cout << "Main Menu > Add Student" << endl;
            cout << "---------------------------------------------------" << endl;
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
            merit2 = (matricMarks2 / 1100 * 0.25 * 100) + (interMarks2 / 1100 * 0.45 * 100) + (ecatMarks2 / 400 * 0.30 * 100);
            cout << "" << endl;
            cout << "Student Details Saved" << endl;
            cout << "Your Aggregate is " << merit2 << endl;

            cout << "" << endl;
            cout << "Press 0 to Go Back...";
            cin >> option1;
            system("cls");
        }
        else if (option == 2)
        {

            // Header For UMS
            cout << "****************************************************************************" << endl;
            cout << "**                      University Management System                      **" << endl;
            cout << "****************************************************************************" << endl;
            cout << "" << endl;
            cout << "" << endl;

            // Main Menu
            cout << "Main Menu > View All Record" << endl;
            cout << "---------------------------------------------------" << endl;

            cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
            cout << name1 << "\t" << matricMarks1 << "\t" << interMarks1 << "\t" << ecatMarks1 << "\t" << merit1 << "\t" << _1Pref1 << "\t" << _1Pref2 << "\t" << _1Pref3 << endl;
            // cout<<name2<<"\t"<<matricMarks2<<"\t"<<interMarks2<<"\t"<<ecatMarks2<<"\t"<<merit2<<"\t"<<_2Pref1<<"\t"<<_2Pref2<<"\t"<<_2Pref3<<endl;

            cout << "" << endl;
            cout << "Press 0 to Go Back...";
            cin >> option1;
            system("cls");
        }
        else if (option == 3)
        {
            // Header For UMS
            cout << "****************************************************************************" << endl;
            cout << "**                      University Management System                      **" << endl;
            cout << "****************************************************************************" << endl;
            cout << "" << endl;
            cout << "" << endl;

            // Main Menu
            cout << "Main Menu > Print Record in Merit Order" << endl;
            cout << "---------------------------------------------------" << endl;

            cout << "Name\t\tAggregate" << endl;
            cout << name1 << "\t\t" << merit1 << endl;
            cout << "" << endl;
            cout << "Press 0 to Go Back...";
            cin >> option1;
            system("cls");
        }
        else if (option == 0)
        {
            cout << "Thanks For Using our Application";
        }

        if (option1 == 0)
        {

            // Header For UMS
            cout << "****************************************************************************" << endl;
            cout << "**                      University Management System                      **" << endl;
            cout << "****************************************************************************" << endl;
            cout << "" << endl;
            cout << "" << endl;

            // Main Menu
            cout << "Main Menu >" << endl;
            cout << "---------------------------------------------------" << endl;

            // options
            cout << "Select one of the following options number..." << endl;
            cout << "1. Add New Student Record" << endl;
            cout << "2. View All Records" << endl;
            cout << "3. Print the Record in Merit Order" << endl;
            cout << "0. Exit" << endl;
            cout << "Your Option.." << endl;
            cin >> option; // This takes option from user

            if (option == 1)
            {
                system("cls");
                // Header For UMS
                cout << "****************************************************************************" << endl;
                cout << "**                      University Management System                      **" << endl;
                cout << "****************************************************************************" << endl;
                cout << "" << endl;
                cout << "" << endl;

                // Main Menu
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
                merit3 = (matricMarks3 / 1100 * 0.25 * 100) + (interMarks3 / 1100 * 0.45 * 100) + (ecatMarks3 / 400 * 0.30 * 100);
                cout << "" << endl;
                cout << "Student Details Saved" << endl;
                cout << "Your Aggregate is " << merit3 << endl;

                cout << "" << endl;
                cout << "Press 0 to Go Back...";
                cin >> option1;
                system("cls");
            }
            else if (option == 2)
            {

                // Header For UMS
                cout << "****************************************************************************" << endl;
                cout << "**                      University Management System                      **" << endl;
                cout << "****************************************************************************" << endl;
                cout << "" << endl;
                cout << "" << endl;

                // Main Menu
                cout << "Main Menu > View All Record" << endl;
                cout << "---------------------------------------------------" << endl;

                cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
                cout << name1 << "\t" << matricMarks1 << "\t" << interMarks1 << "\t" << ecatMarks1 << "\t" << merit1 << "\t" << _1Pref1 << "\t" << _1Pref2 << "\t" << _1Pref3 << endl;
                cout << name2 << "\t" << matricMarks2 << "\t" << interMarks2 << "\t" << ecatMarks2 << "\t" << merit2 << "\t" << _2Pref1 << "\t" << _2Pref2 << "\t" << _2Pref3 << endl;

                cout << "" << endl;
                cout << "Press 0 to Go Back...";
                cin >> option1;
                system("cls");
            }
            if (option == 3)
            {
                // Header For UMS
                cout << "****************************************************************************" << endl;
                cout << "**                      University Management System                      **" << endl;
                cout << "****************************************************************************" << endl;
                cout << "" << endl;
                cout << "" << endl;

                // Main Menu
                cout << "Main Menu > Print Record in Merit Order" << endl;
                cout << "---------------------------------------------------" << endl;

                if (merit1 > merit2)
                {
                    cout << "Name\t\tAggregate" << endl;
                    cout << name1 << "\t\t" << merit1 << endl;

                    cout << name2 << "\t\t" << merit2 << endl;
                }

                if (merit2 > merit1)
                {
                    cout << "Name\t \tAggregate" << endl;
                    cout << name2 << "\t \t" << merit2 << endl;
                    cout << name1 << "\t \t" << merit1 << endl;
                }
                cout << "Press 0 to Go Back...";
                cin >> option1;
                system("cls");
            }
            if (option1 == 0)
            {
                cout << "****************************************************************************" << endl;
                cout << "**                      University Management System                      **" << endl;
                cout << "****************************************************************************" << endl;
                cout << "" << endl;
                cout << "" << endl;

                // Main Menu
                cout << "Main Menu >" << endl;
                cout << "---------------------------------------------------" << endl;

                // options
                cout << "Select one of the following options number..." << endl;
                cout << "1. Add New Student Record" << endl;
                cout << "2. View All Records" << endl;
                cout << "3. Print the Record in Merit Order" << endl;
                cout << "0. Exit" << endl;
                cout << "Your Option.." << endl;
                cin >> option; // This takes option from user

                if (option == 1)
                {
                    system("cls");
                    // Header For UMS
                    cout << "****************************************************************************" << endl;
                    cout << "**                      University Management System                      **" << endl;
                    cout << "****************************************************************************" << endl;
                    cout << "" << endl;
                    cout << "" << endl;

                    // Main Menu
                    cout << "Main Menu > Add Student" << endl;
                    cout << "---------------------------------------------------" << endl;
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
                    merit4 = (matricMarks4 / 1100 * 0.25 * 100) + (interMarks4 / 1100 * 0.45 * 100) + (ecatMarks4 / 400 * 0.30 * 100);
                    cout << "" << endl;
                    cout << "Student Details Saved" << endl;
                    cout << "Your Aggregate is " << merit4 << endl;

                    cout << "" << endl;
                    cout << "Press 0 to Go Back...";
                    cin >> option2;
                    system("cls");
                    if (option2 == 0)
                    {
                        cout << "****************************************************************************" << endl;
                        cout << "**                      University Management System                      **" << endl;
                        cout << "****************************************************************************" << endl;
                        cout << "" << endl;
                        cout << "" << endl;

                        // Main Menu
                        cout << "Main Menu >" << endl;
                        cout << "---------------------------------------------------" << endl;

                        // options
                        cout << "Select one of the following options number..." << endl;
                        cout << "1. Add New Student Record" << endl;
                        cout << "2. View All Records" << endl;
                        cout << "3. Print the Record in Merit Order" << endl;
                        cout << "0. Exit" << endl;
                        cout << "Your Option.." << endl;
                        cin >> option; // This takes option from user

                        if (option == 1)
                        {
                            system("cls");
                            // Header For UMS
                            cout << "****************************************************************************" << endl;
                            cout << "**                      University Management System                      **" << endl;
                            cout << "****************************************************************************" << endl;
                            cout << "" << endl;
                            cout << "" << endl;

                            // Main Menu
                            cout << "Main Menu > Add Student" << endl;
                            cout << "---------------------------------------------------" << endl;
                            cout << "You donot have enough space to add more students";
                            cout << "Press 0 to Go Back...";
                            cin >> option2;
                            system("cls");
                        }
                        else if (option == 2)
                        {

                            // Header For UMS
                            cout << "****************************************************************************" << endl;
                            cout << "**                      University Management System                      **" << endl;
                            cout << "****************************************************************************" << endl;
                            cout << "" << endl;
                            cout << "" << endl;

                            // Main Menu
                            cout << "Main Menu > View All Record" << endl;
                            cout << "---------------------------------------------------" << endl;

                            cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
                            cout << name1 << "\t" << matricMarks1 << "\t" << interMarks1 << "\t" << ecatMarks1 << "\t" << merit1 << "\t" << _1Pref1 << "\t" << _1Pref2 << "\t" << _1Pref3 << endl;
                            cout << name2 << "\t" << matricMarks2 << "\t" << interMarks2 << "\t" << ecatMarks2 << "\t" << merit2 << "\t" << _2Pref1 << "\t" << _2Pref2 << "\t" << _2Pref3 << endl;
                            cout << name3 << "\t" << matricMarks3 << "\t" << interMarks3 << "\t" << ecatMarks3 << "\t" << merit3 << "\t" << _3Pref1 << "\t" << _3Pref2 << "\t" << _3Pref3 << endl;
                            cout << name4 << "\t" << matricMarks4 << "\t" << interMarks4 << "\t" << ecatMarks4 << "\t" << merit4 << "\t" << _4Pref1 << "\t" << _4Pref2 << "\t" << _4Pref3 << endl;

                            cout << "" << endl;
                            cout << "Press 0 to Go Back...";
                            cin >> option3;
                            system("cls");
                            if (option3 == 0)
                            {
                                cout << "****************************************************************************" << endl;
                                cout << "**                      University Management System                      **" << endl;
                                cout << "****************************************************************************" << endl;
                                cout << "" << endl;
                                cout << "" << endl;

                                // Main Menu
                                cout << "Main Menu >" << endl;
                                cout << "---------------------------------------------------" << endl;

                                // options
                                cout << "Select one of the following options number..." << endl;
                                cout << "1. Add New Student Record" << endl;
                                cout << "2. View All Records" << endl;
                                cout << "3. Print the Record in Merit Order" << endl;
                                cout << "0. Exit" << endl;
                                cout << "Your Option.." << endl;
                                cin >> option4; // This takes option from user

                                if (option4 == 3)
                                {

                                    if (merit1 > merit2 && merit1 > merit3 && merit1 > merit4)
                                    {
                                        if (merit2 > merit3)
                                        {
                                            if (merit3 > merit4)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;
                                            }
                                            else if (merit4 > merit3)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;
                                            }
                                        }
                                        else if (merit3 > merit2)
                                        {
                                            if (merit2 > merit4)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;
                                            }
                                            if (merit4 > merit2)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;
                                            }
                                        }
                                        else if (merit4 > merit2)
                                        {
                                            if (merit2 > merit3)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;
                                            }
                                            else if (merit3 > merit2)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;
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
                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;
                                            }
                                            else if (merit4 > merit3)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;
                                            }
                                        }
                                        else if (merit3 > merit1)
                                        {
                                            if (merit1 > merit4)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;
                                            }
                                            if (merit4 > merit1)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;
                                            }
                                        }
                                        else if (merit4 > merit1)
                                        {
                                            if (merit1 > merit3)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;
                                            }
                                            else if (merit3 > merit1)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;
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
                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;
                                            }
                                            else if (merit4 > merit2)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;
                                            }
                                        }
                                        else if (merit2 > merit1)
                                        {
                                            if (merit1 > merit4)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;
                                            }
                                            if (merit4 > merit1)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;
                                            }
                                        }
                                        else if (merit4 > merit1)
                                        {
                                            if (merit1 > merit2)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;
                                            }
                                            else if (merit2 > merit1)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;
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
                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;
                                            }
                                            else if (merit3 > merit2)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;
                                            }
                                        }
                                        else if (merit2 > merit1)
                                        {
                                            if (merit1 > merit3)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;
                                            }
                                            if (merit3 > merit1)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;
                                            }
                                        }
                                        else if (merit3 > merit1)
                                        {
                                            if (merit1 > merit2)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;
                                            }
                                            else if (merit2 > merit1)
                                            {
                                                cout << "Name\t\tAggregate" << endl;
                                                cout << name4 << "\t\t" << merit4 << endl;

                                                cout << name3 << "\t\t" << merit3 << endl;

                                                cout << name2 << "\t\t" << merit2 << endl;

                                                cout << name1 << "\t\t" << merit1 << endl;
                                            }
                                        }
                                    }
                                }
                            }

                            if (option == 3)
                            {
                                // Header For UMS
                                cout << "****************************************************************************" << endl;
                                cout << "**                      University Management System                      **" << endl;
                                cout << "****************************************************************************" << endl;
                                cout << "" << endl;
                                cout << "" << endl;

                                // Main Menu
                                cout << "Main Menu > Print Record in Merit Order" << endl;
                                cout << "---------------------------------------------------" << endl;

                                if (merit1 > merit2)
                                {
                                    if (merit1 > merit3 && merit2 > merit3)
                                    {
                                        cout << "Name\t\tAggregate" << endl;
                                        cout << name1 << "\t\t" << merit1 << endl;

                                        cout << name2 << "\t\t" << merit2 << endl;

                                        cout << name3 << "\t\t" << merit3 << endl;
                                    }
                                    else if (merit1 > merit3 && merit3 > merit2)
                                    {
                                        cout << "Name\t\tAggregate" << endl;
                                        cout << name1 << "\t\t" << merit1 << endl;

                                        cout << name3 << "\t\t" << merit3 << endl;

                                        cout << name2 << "\t\t" << merit2 << endl;
                                    }
                                    else if (merit3 > merit1)
                                    {
                                        cout << "Name\t\tAggregate" << endl;
                                        cout << name3 << "\t\t" << merit3 << endl;

                                        cout << name1 << "\t\t" << merit1 << endl;

                                        cout << name2 << "\t\t" << merit2 << endl;
                                    }
                                }

                                else if (merit2 > merit1)
                                {
                                    if (merit2 > merit3 && merit1 > merit3)
                                    {
                                        cout << "Name\t \tAggregate" << endl;
                                        cout << name2 << "\t \t" << merit2 << endl;

                                        cout << name1 << "\t \t" << merit1 << endl;

                                        cout << name3 << "\t\t" << merit3 << endl;
                                    }
                                    else if (merit1 < merit3 && merit3 > merit2)
                                    {
                                        cout << "Name\t\tAggregate" << endl;

                                        cout << name3 << "\t\t" << merit3 << endl;

                                        cout << name2 << "\t\t" << merit2 << endl;

                                        cout << name1 << "\t\t" << merit1 << endl;
                                    }
                                    else if (merit3 > merit1 && merit2 > merit3)
                                    {
                                        cout << "Name\t\tAggregate" << endl;

                                        cout << name2 << "\t\t" << merit2 << endl;

                                        cout << name3 << "\t\t" << merit3 << endl;

                                        cout << name1 << "\t\t" << merit1 << endl;
                                    }
                                }
                                // else if (merit3 > merit1 && merit3 > merit2 && merit1 > merit2)
                                // {
                                //     cout << "Name\t \tAggregate" << endl;
                                //     cout << name3 << "\t \t" << merit3 << endl;
                                //     cout << name1 << "\t \t" << merit1 << endl;
                                //     cout << name2 << "\t\t" << merit2 << endl;
                                // }
                                cout << "Press 0 to exit the program";
                                cin >> option;
                            }
                        }
                    }
                    else if (option == 2)
                    {

                        // Header For UMS
                        cout << "****************************************************************************" << endl;
                        cout << "**                      University Management System                      **" << endl;
                        cout << "****************************************************************************" << endl;
                        cout << "" << endl;
                        cout << "" << endl;

                        // Main Menu
                        cout << "Main Menu > View All Record" << endl;
                        cout << "---------------------------------------------------" << endl;

                        cout << "Name\tMatric\tInter\tEcat\tMerit\t1stPref\t2ndPref\t3rdPref" << endl;
                        cout << name1 << "\t" << matricMarks1 << "\t" << interMarks1 << "\t" << ecatMarks1 << "\t" << merit1 << "\t" << _1Pref1 << "\t" << _1Pref2 << "\t" << _1Pref3 << endl;
                        cout << name2 << "\t" << matricMarks2 << "\t" << interMarks2 << "\t" << ecatMarks2 << "\t" << merit2 << "\t" << _2Pref1 << "\t" << _2Pref2 << "\t" << _2Pref3 << endl;
                        cout << name3 << "\t" << matricMarks3 << "\t" << interMarks3 << "\t" << ecatMarks3 << "\t" << merit3 << "\t" << _3Pref1 << "\t" << _3Pref2 << "\t" << _3Pref3 << endl;

                        cout << "" << endl;
                        cout << "Press 0 to Go Back...";
                        cin >> option1;
                        system("cls");
                    }

                    else if (option == 3)
                    {
                        // Header For UMS
                        cout << "****************************************************************************" << endl;
                        cout << "**                      University Management System                      **" << endl;
                        cout << "****************************************************************************" << endl;
                        cout << "" << endl;
                        cout << "" << endl;

                        // Main Menu
                        cout << "Main Menu > Print Record in Merit Order" << endl;
                        cout << "---------------------------------------------------" << endl;

                        if (merit1 > merit2)
                        {
                            if (merit1 > merit3 && merit2 > merit3)
                            {
                                cout << "Name\t\tAggregate" << endl;
                                cout << name1 << "\t\t" << merit1 << endl;

                                cout << name2 << "\t\t" << merit2 << endl;

                                cout << name3 << "\t\t" << merit3 << endl;
                            }
                            else if (merit1 > merit3 && merit3 > merit2)
                            {
                                cout << "Name\t\tAggregate" << endl;
                                cout << name1 << "\t\t" << merit1 << endl;

                                cout << name3 << "\t\t" << merit3 << endl;

                                cout << name2 << "\t\t" << merit2 << endl;
                            }
                            else if (merit3 > merit1)
                            {
                                cout << "Name\t\tAggregate" << endl;
                                cout << name3 << "\t\t" << merit3 << endl;

                                cout << name1 << "\t\t" << merit1 << endl;

                                cout << name2 << "\t\t" << merit2 << endl;
                            }
                        }

                        else if (merit2 > merit1)
                        {
                            if (merit2 > merit3 && merit1 > merit3)
                            {
                                cout << "Name\t \tAggregate" << endl;
                                cout << name2 << "\t \t" << merit2 << endl;

                                cout << name1 << "\t \t" << merit1 << endl;

                                cout << name3 << "\t\t" << merit3 << endl;
                            }
                            else if (merit1 < merit3 && merit3 > merit2)
                            {
                                cout << "Name\t\tAggregate" << endl;

                                cout << name3 << "\t\t" << merit3 << endl;

                                cout << name2 << "\t\t" << merit2 << endl;

                                cout << name1 << "\t\t" << merit1 << endl;
                            }
                            else if (merit3 > merit1 && merit2 > merit3)
                            {
                                cout << "Name\t\tAggregate" << endl;

                                cout << name2 << "\t\t" << merit2 << endl;

                                cout << name3 << "\t\t" << merit3 << endl;

                                cout << name1 << "\t\t" << merit1 << endl;
                            }
                        }
                        // else if (merit3 > merit1 && merit3 > merit2 && merit1 > merit2)
                        // {
                        //     cout << "Name\t \tAggregate" << endl;
                        //     cout << name3 << "\t \t" << merit3 << endl;
                        //     cout << name1 << "\t \t" << merit1 << endl;
                        //     cout << name2 << "\t\t" << merit2 << endl;
                        // }
                        cout << "Press 0 to exit the program";
                        cin >> option;
                    }
                }
            }

            if (option == 0)
            {
                system("cls");
                cout << "Thanks For Using our Application";
            }
        }
    }
}