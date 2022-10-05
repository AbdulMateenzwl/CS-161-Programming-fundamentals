1#include <iostream>
#include <stdlib.h>
using namespace std;
main()
{
    int op, first;
    string namep1, namep2, namep3;
    int pricep1, pricep2, pricep3;
    string delp, delp1;
    string uname, order;
    int passw, oprice;
    int uty;

    cout << "**************************************************************************************" << endl;
    cout << "*                                                                                    *" << endl;
    cout << "*              *****          ***       *****         ***       ***********          *" << endl;
    cout << "*              **  ***       *   *      **   **      *   *      **      **           *" << endl;
    cout << "*              **    **     **   **     ******      **   **          **              *" << endl;
    cout << "*              **  ***     *********    **  **     *********      **     **          *" << endl;
    cout << "*              *****      **       **   **    **  **       **   ***********          *" << endl;
    cout << "*                                                                                    *" << endl;
    cout << "**************************************************************************************" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Welcome to Daraz" << endl;
    cout << "We hope you will like our Website " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Login as : " << endl;
    cout << "1) Admin" << endl;
    cout << "2) Seller" << endl;
    cout << "3) User" << endl;
    cin >> first;
    if (first == 1)
    {
        int pass;
        cout << "Enter password : ";
        cin >> pass;
        if (pass == 1234)
        {
            cout << "**************************************************************************************" << endl;
            cout << "*                                                                                    *" << endl;
            cout << "*              *****          ***       *****         ***       ***********          *" << endl;
            cout << "*              **  ***       *   *      **   **      *   *      **      **           *" << endl;
            cout << "*              **    **     **   **     ******      **   **          **              *" << endl;
            cout << "*              **  ***     *********    **  **     *********      **     **          *" << endl;
            cout << "*              *****      **       **   **    **  **       **   ***********          *" << endl;
            cout << "*                                                                                    *" << endl;
            cout << "**************************************************************************************" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "Welcome Admin" << endl;
            cout << "Today is a busy day We have to do with a lot of work today " << endl;
            cout << " 1) Add seller" << endl;
            cout << " 2) View record" << endl;
            cout << " 3) View History" << endl;
            cout << " 4) Delete seller" << endl;
            cout << " 5) Exit" << endl;
            cout << "  " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            string name, pnum, buisness, passw;

            if (op == 1)
            {
                cout << "Enter seller's information ....." << endl;
                cout << " " << endl;
                cout << "Enters seller name : " << endl;
                cin >> name;
                cout << "Enters seller phone number : " << endl;
                cin >> pnum;
                cout << "Enters seller buisness : " << endl;
                cin >> buisness;
                cout << "Create password : " << endl;
                cin >> passw;
                cout << " " << endl;
                cout << "Sellers id is created " << endl;
            }
            if (op == 2 || op == 3 || op == 4 || op == 5)
            {
                cout << "INVALID INPUT";
            }

            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;

            cout << "Welcome Admin" << endl;
            cout << "Today is a busy day We have to do with a lot of work today " << endl;
            cout << " 1) Add seller" << endl;
            cout << " 2) View record" << endl;
            cout << " 3) View History" << endl;
            cout << " 4) Delete Seller " << endl;
            cout << " 5) Exit" << endl;
            cout << "  " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Enter seller's information ....." << endl;
                cout << " " << endl;
                cout << "Enters seller name : " << endl;
                cin >> name;
                cout << "Enters seller phone number : " << endl;
                cin >> pnum;
                cout << "Enters seller buisness : " << endl;
                cin >> buisness;
                cout << "Create password : " << endl;
                cin >> passw;
                cout << " " << endl;
                cout << "Sellers id is created " << endl;
            }
            if (op == 2)
            {
                cout << "Name               Phone number                Buisness           Password " << endl;
                cout << "Ali                03101524679                  Bags                7876  " << endl;
                cout << "Ahmad              03124567654                 Electronics          4567    " << endl;
                cout << name << "                 ";
                cout << pnum << "                     " << buisness << "              " << passw << endl;
            }
            if (op == 3 || op == 4 || op == 5)
            {
                cout << "INVALID INPUT";
            }

            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;

            cout << "Welcome Admin" << endl;
            cout << "Today is a busy day We have to do with a lot of work today " << endl;
            cout << " 1) Add seller" << endl;
            cout << " 2) View record" << endl;
            cout << " 3) View History" << endl;
            cout << " 4) Delete seller " << endl;
            cout << " 5) Exit" << endl;
            cout << "  " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Enter seller's information ....." << endl;
                cout << " " << endl;
                cout << "Enters seller name : " << endl;
                cin >> name;
                cout << "Enters seller phone number : " << endl;
                cin >> pnum;
                cout << "Enters seller buisness : " << endl;
                cin >> buisness;
                cout << "Create password : " << endl;
                cin >> passw;
                cout << " " << endl;
                cout << "Sellers id is created " << endl;
            }
            if (op == 2)
            {
                cout << "Name               Phone number                Buisness           Password " << endl;
                cout << "Ali                03101524679                  Bags                7876  " << endl;
                cout << "Ahmad              03124567654                 Electronics          4567    " << endl;
                cout << name << "                 ";
                cout << pnum << "                     " << buisness << "              " << passw << endl;
            }
            if (op == 3)
            {
                cout << "Ali just sold 2 bags to user179 " << endl;
                cout << "Ahmad updated his stock " << endl;
                cout << "Ali updated his account" << endl;
                cout << "You just added " << name << " to " << buisness << " Buisness list ";
            }
            if (op == 4 || op == 5)
            {
                cout << "INVALID INPUT";
            }

            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;

            cout << "Welcome Admin" << endl;
            cout << "Today is a busy day We have to do with a lot of work today " << endl;
            cout << " 1) Add seller" << endl;
            cout << " 2) View record" << endl;
            cout << " 3) View History" << endl;
            cout << " 4) Delete seller " << endl;
            cout << " 5) Exit" << endl;
            cout << "  " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Enter seller's information ....." << endl;
                cout << " " << endl;
                cout << "Enters seller name : " << endl;
                cin >> name;
                cout << "Enters seller phone number : " << endl;
                cin >> pnum;
                cout << "Enters seller buisness : " << endl;
                cin >> buisness;
                cout << "Create password : " << endl;
                cin >> passw;
                cout << " " << endl;
                cout << "Sellers id is created " << endl;
            }
            if (op == 2)
            {
                cout << "Name               Phone number                Buisness           Password " << endl;
                cout << "Ali                03101524679                  Bags                7876  " << endl;
                cout << "Ahmad              03124567654                 Electronics          4567    " << endl;
                cout << name << "                 ";
                cout << pnum << "                     " << buisness << "              " << passw << endl;
            }
            if (op == 3)
            {
                cout << "Ali just sold 2 bags to user179 " << endl;
                cout << "Ahmad updated his stock " << endl;
                cout << "Ali updated his account" << endl;
                cout << "You just added " << name << " to " << buisness << " Buisness list ";
            }
            if (op == 4)
            {
                string name1;
                cout << "Enter the Password : ";
                cin >> pass;
                if (pass == 1234)
                {
                    cout << "Enter the name of seller you want to delete : ";
                    cin >> name1;
                    if (name1 == name || name1 == "ali" || name1 == "ahmad")
                    {
                        cout << "You have sucessfully deleted " << name1;
                    }
                    else
                    {
                        cout << "You have entered the wrong Name.";
                    }
                }
                else
                {
                    cout << "You have entered the wrong password.";
                }
            }
            if (op == 5)
            {
                cout << "INVALID INPUT";
            }

            cout << " " << endl;
            cout << " " << endl;
            cout << " " << endl;

            cout << "Welcome Admin" << endl;
            cout << "Today is a busy day We have to do with a lot of work today " << endl;
            cout << " 1) Add seller" << endl;
            cout << " 2) View record" << endl;
            cout << " 3) View History" << endl;
            cout << " 4) Delete seller " << endl;
            cout << " 5) Exit" << endl;
            cout << "  " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Enter seller's information ....." << endl;
                cout << " " << endl;
                cout << "Enters seller name : " << endl;
                cin >> name;
                cout << "Enters seller phone number : " << endl;
                cin >> pnum;
                cout << "Enters seller buisness : " << endl;
                cin >> buisness;
                cout << "Create password : " << endl;
                cin >> passw;
                cout << " " << endl;
                cout << "Sellers id is created " << endl;
            }
            if (op == 2)
            {
                cout << "Name               Phone number                Buisness           Password " << endl;
                cout << "Ali                03101524679                  Bags                7876  " << endl;
                cout << "Ahmad              03124567654                 Electronics          4567    " << endl;
                cout << name << "                 ";
                cout << pnum << "                     " << buisness << "              " << passw << endl;
            }
            if (op == 3)
            {
                cout << "Ali just sold 2 bags to user179 " << endl;
                cout << "Ahmad updated his stock " << endl;
                cout << "Ali updated his account" << endl;
                cout << "You just added " << name << " to " << buisness << " Buisness list ";
            }
            if (op == 4)
            {
                string name1;
                cout << "Enter the name of seller you want to delete : ";
                cin >> name1;
                cout << "You have sucessfully deleted " << name1;
            }
            if (op == 5)
            {
                system("cls");
            }
        }
        else
        {
            cout << "You have entered the wrong Password ";
        }
    }

    cout << "**************************************************************************************" << endl;
    cout << "*                                                                                    *" << endl;
    cout << "*              *****          ***       *****         ***       ***********          *" << endl;
    cout << "*              **  ***       *   *      **   **      *   *      **      **           *" << endl;
    cout << "*              **    **     **   **     ******      **   **          **              *" << endl;
    cout << "*              **  ***     *********    **  **     *********      **     **          *" << endl;
    cout << "*              *****      **       **   **    **  **       **   ***********          *" << endl;
    cout << "*                                                                                    *" << endl;
    cout << "**************************************************************************************" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Welcome to Daraz" << endl;
    cout << "We hope you will like our Website " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Login as : " << endl;
    cout << "1) Admin" << endl;
    cout << "2) Seller" << endl;
    cout << "3) User" << endl;
    cin >> first;
    if (first == 2)
    {

        int pass;
        cout << "Enter your Password : ";
        cin >> pass;
        if (pass == 4321)
        {
            //data enter
            cout << "**************************************************************************************" << endl;
            cout << "*                                                                                    *" << endl;
            cout << "*              *****          ***       *****         ***       ***********          *" << endl;
            cout << "*              **  ***       *   *      **   **      *   *      **      **           *" << endl;
            cout << "*              **    **     **   **     ******      **   **          **              *" << endl;
            cout << "*              **  ***     *********    **  **     *********      **     **          *" << endl;
            cout << "*              *****      **       **   **    **  **       **   ***********          *" << endl;
            cout << "*                                                                                    *" << endl;
            cout << "**************************************************************************************" << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << " Welcome Seller" << endl;
            cout << " Today we have to do  some tasks" << endl;
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......";
            cin >> op;

            if (op == 1)
            {
                cout << "Enter the name of product : ";
                cin >> namep1;
                cout << "Enter the price of product : ";
                cin >> pricep1;
                cout << "Product entered Successfuly" << endl;
                cout << " " << endl;
                cout << " " << endl;
            }
            if (op == 2 || op == 3 || op == 4 || op == 5 || op == 6 || op == 7 || op == 8)
            {
                cout << "INVALID INPUT" << endl;
            }

            //data2 enter
            cout << " " << endl;
            cout << " " << endl;
            cout << " Welcome Seller" << endl;
            cout << " Today we have to do  some tasks" << endl;
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......";
            cin >> op;

            if (op == 1)
            {
                cout << "Enter the name of product : ";
                cin >> namep2;
                cout << "Enter the price of product : ";
                cin >> pricep2;
                cout << "Product entered Successfuly" << endl;
                cout << " " << endl;
                cout << " " << endl;
            }
            if (op == 2 || op == 3 || op == 4 || op == 5 || op == 6 || op == 7 || op == 8)
            {
                cout << "INVALID INPUT" << endl;
            }

            //data3 enter
            cout << " " << endl;
            cout << " " << endl;
            cout << " Welcome Seller" << endl;
            cout << " Today we have to do  some tasks" << endl;
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......";
            cin >> op;

            if (op == 1)
            {
                cout << "Enter the name of product : ";
                cin >> namep3;
                cout << "Enter the price of product : ";
                cin >> pricep3;
                cout << "Product entered Successfuly" << endl;
                cout << " " << endl;
                cout << " " << endl;
            }
            if (op == 2 || op == 3 || op == 4 || op == 5 || op == 6 || op == 7 || op == 8)
            {
                cout << "INVALID INPUT" << endl;
            }

            //view items
            cout << " " << endl;
            cout << " " << endl;
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Reach enough items";
            }
            if (op == 2)
            {
                cout << "Items                      Price" << endl;
                cout << namep1 << "                   " << pricep1 << endl;
                cout << namep2 << "                   " << pricep2 << endl;
                cout << namep3 << "                   " << pricep3 << endl;
            }
            if (op == 3 || op == 4 || op == 5 || op == 6 || op == 7 || op == 8)
            {
                cout << "INVALID INPUT" << endl;
            }

            //sorting
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Reach enough items";
            }
            if (op == 2)
            {
                cout << "Items                      Price" << endl;
                cout << namep1 << "                   " << pricep1 << endl;
                cout << namep2 << "                   " << pricep2 << endl;
                cout << namep3 << "                   " << pricep3 << endl;
            }
            if (op == 3)
            {
                cout << "Sorting" << endl;
                if (pricep1 > pricep2 && pricep1 > pricep3)
                {
                    cout << namep1 << "                   " << pricep1 << endl;
                    if (pricep2 > pricep3)
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                }
                if (pricep2 > pricep1 && pricep2 > pricep3)
                {
                    cout << namep2 << "                   " << pricep2 << endl;
                    if (pricep1 > pricep3)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
                if (pricep3 > pricep1 && pricep3 > pricep1)
                {
                    cout << namep3 << "                   " << pricep3 << endl;
                    if (pricep1 > pricep2)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                    else
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
            }
            if (op == 4 || op == 5 || op == 6 || op == 7 || op == 8)
            {
                cout << "INVALID INPUT" << endl;
            }

            //delete
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Reach enough items";
            }
            if (op == 2)
            {
                cout << "Items                      Price" << endl;
                cout << namep1 << "                   " << pricep1 << endl;
                cout << namep2 << "                   " << pricep2 << endl;
                cout << namep3 << "                   " << pricep3 << endl;
            }
            if (op == 3)
            {
                cout << "Sorting" << endl;
                if (pricep1 > pricep2 && pricep1 > pricep3)
                {
                    cout << namep1 << "                   " << pricep1 << endl;
                    if (pricep2 > pricep3)
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                }
                if (pricep2 > pricep1 && pricep2 > pricep3)
                {
                    cout << namep2 << "                   " << pricep2 << endl;
                    if (pricep1 > pricep3)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
                if (pricep3 > pricep1 && pricep3 > pricep1)
                {
                    cout << namep3 << "                   " << pricep3 << endl;
                    if (pricep1 > pricep2)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                    else
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
            }
            if (op == 4)
            {
                cout << "Enter the name of Product : ";
                cin >> delp;
                if (delp == namep1 || delp == namep2 || delp == namep3)
                {
                    cout << delp << " has been deleted" << endl;
                }
            }
            if (op == 5 || op == 6 || op == 7 || op == 8)
            {
                cout << "INVALID INPUT" << endl;
            }

            //update
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;
            if (op == 1)
            {
                cout << "Reach enough items";
            }
            if (op == 2)
            {
                cout << "Items                      Price" << endl;
                cout << namep1 << "                   " << pricep1 << endl;
                cout << namep2 << "                   " << pricep2 << endl;
                cout << namep3 << "                   " << pricep3 << endl;
            }
            if (op == 3)
            {
                cout << "Sorting" << endl;
                if (pricep1 > pricep2 && pricep1 > pricep3)
                {
                    cout << namep1 << "                   " << pricep1 << endl;
                    if (pricep2 > pricep3)
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                }
                if (pricep2 > pricep1 && pricep2 > pricep3)
                {
                    cout << namep2 << "                   " << pricep2 << endl;
                    if (pricep1 > pricep3)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
                if (pricep3 > pricep1 && pricep3 > pricep1)
                {
                    cout << namep3 << "                   " << pricep3 << endl;
                    if (pricep1 > pricep2)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                    else
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
            }
            if (op == 4)
            {
                cout << "Enter the name of Product : ";
                cin >> delp;
                if (delp == namep1 || delp == namep2 || delp == namep3)
                {
                    cout << delp << " has been deleted";
                }
            }
            if (op == 5)
            {
                cout << "Enter the name of Product : ";
                cin >> delp1;
                if (delp1 == namep1)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep1;
                    cout << delp1 << " has been updated." << endl;
                }
                else if (delp1 == namep2)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep2;
                    cout << delp1 << " has been updated." << endl;
                }
                else if (delp1 == namep3)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep3;
                    cout << delp1 << " has been updated." << endl;
                }
                else
                {
                    cout << "There is no such product." << endl;
                }
            }
            if (op == 6 || op == 7 || op == 8)
            {
                cout << "INVALID INPUT" << endl;
            }

            //history
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Reach enough items";
            }
            if (op == 2)
            {
                cout << "Items                      Price" << endl;
                cout << namep1 << "                   " << pricep1 << endl;
                cout << namep2 << "                   " << pricep2 << endl;
                cout << namep3 << "                   " << pricep3 << endl;
            }
            if (op == 3)
            {
                cout << "Sorting" << endl;
                if (pricep1 > pricep2 && pricep1 > pricep3)
                {
                    cout << namep1 << "                   " << pricep1 << endl;
                    if (pricep2 > pricep3)
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                }
                if (pricep2 > pricep1 && pricep2 > pricep3)
                {
                    cout << namep2 << "                   " << pricep2 << endl;
                    if (pricep1 > pricep3)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
                if (pricep3 > pricep1 && pricep3 > pricep1)
                {
                    cout << namep3 << "                   " << pricep3 << endl;
                    if (pricep1 > pricep2)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                    else
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
            }
            if (op == 4)
            {
                cout << "Enter the name of Product : ";
                cin >> delp;
                if (delp == namep1 || delp == namep2 || delp == namep3)
                {
                    cout << delp << " has been deleted";
                }
            }
            if (op == 5)
            {
                cout << "Enter the name of Product : ";
                cin >> delp;
                if (delp == namep1)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep1;
                    cout << delp << " has been updated." << endl;
                }
                else if (delp == namep2)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep2;
                    cout << delp << " has been updated." << endl;
                }
                else if (delp == namep3)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep3;
                    cout << delp << " has been updated." << endl;
                }
                else
                {
                    cout << "There is no such product.";
                }
            }
            if (op == 6)
            {
                cout << "1)  You entered Product " << namep1 << endl;
                cout << "2)  You entered Product " << namep2 << endl;
                cout << "3)  You entered Product " << namep3 << endl;
                cout << "4)  You deleted " << delp << " from product list." << endl;
                cout << "5)  You updated price of " << delp1 << endl;
            }
            if (op == 7)
            {
                cout << "INVALID INPUT" << endl;
            }

            //order confirmation
            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Reach enough items";
            }
            if (op == 2)
            {
                cout << "Items                      Price" << endl;
                cout << namep1 << "                   " << pricep1 << endl;
                cout << namep2 << "                   " << pricep2 << endl;
                cout << namep3 << "                   " << pricep3 << endl;
            }
            if (op == 3)
            {
                cout << "Sorting" << endl;
                if (pricep1 > pricep2 && pricep1 > pricep3)
                {
                    cout << namep1 << "                   " << pricep1 << endl;
                    if (pricep2 > pricep3)
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                }
                if (pricep2 > pricep1 && pricep2 > pricep3)
                {
                    cout << namep2 << "                   " << pricep2 << endl;
                    if (pricep1 > pricep3)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
                if (pricep3 > pricep1 && pricep3 > pricep1)
                {
                    cout << namep3 << "                   " << pricep3 << endl;
                    if (pricep1 > pricep2)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                    else
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
            }
            if (op == 4)
            {
                cout << "Enter the name of Product : ";
                cin >> delp;
                if (delp == namep1 || delp == namep2 || delp == namep3)
                {
                    cout << delp << " has been deleted";
                }
            }
            if (op == 5)
            {
                cout << "Enter the name of Product : ";
                cin >> delp;
                if (delp == namep1)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep1;
                    cout << delp << " has been updated." << endl;
                }
                else if (delp == namep2)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep2;
                    cout << delp << " has been updated." << endl;
                }
                else if (delp == namep3)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep3;
                    cout << delp << " has been updated." << endl;
                }
                else
                {
                    cout << "There is no such product.";
                }
            }
            if (op == 6)
            {
                cout << "1)  You entered Product " << namep1 << endl;
                cout << "2)  You entered Product " << namep2 << endl;
                cout << "3)  You entered Product " << namep3 << endl;
                cout << "4)  You deleted " << delp << " from product list." << endl;
                cout << "5)  You updated price of " << delp1 << endl;
            }
            if (op == 7)
            {
                char ask;
                cout << "User1732 Just ordered a I-Phone 11.." << endl;
                cout << "Do you want to send the deliver or not?(y for yes)(n for no)" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "The order will be delivered soon" << endl;
                }
                else if (ask = 'n')
                {
                    cout << "Order was cancelled..";
                }
            }
            if (op == 8)
            {
                cout << "INVALID INPUT" << endl;
            }

            cout << " 1) Add a product to your list  " << endl;
            cout << " 2) View items you sale  " << endl;
            cout << " 3) Sort by price  " << endl;
            cout << " 4) Delete an item  " << endl;
            cout << " 5) Update price of an item  " << endl;
            cout << " 6) History" << endl;
            cout << " 7) Send Order" << endl;
            cout << " 8) Exit" << endl;
            cout << " " << endl;
            cout << "Enter your option......" << endl;
            cin >> op;

            if (op == 1)
            {
                cout << "Reach enough items";
            }
            if (op == 2)
            {
                cout << "Items                      Price" << endl;
                cout << namep1 << "                   " << pricep1 << endl;
                cout << namep2 << "                   " << pricep2 << endl;
                cout << namep3 << "                   " << pricep3 << endl;
            }
            if (op == 3)
            {
                cout << "Sorting" << endl;
                if (pricep1 > pricep2 && pricep1 > pricep3)
                {
                    cout << namep1 << "                   " << pricep1 << endl;
                    if (pricep2 > pricep3)
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                }
                if (pricep2 > pricep1 && pricep2 > pricep3)
                {
                    cout << namep2 << "                   " << pricep2 << endl;
                    if (pricep1 > pricep3)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep3 << "                   " << pricep3 << endl;
                    }
                    else
                    {
                        cout << namep3 << "                   " << pricep3 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
                if (pricep3 > pricep1 && pricep3 > pricep1)
                {
                    cout << namep3 << "                   " << pricep3 << endl;
                    if (pricep1 > pricep2)
                    {
                        cout << namep1 << "                   " << pricep1 << endl;
                        cout << namep2 << "                   " << pricep2 << endl;
                    }
                    else
                    {
                        cout << namep2 << "                   " << pricep2 << endl;
                        cout << namep1 << "                   " << pricep1 << endl;
                    }
                }
            }
            if (op == 4)
            {
                cout << "Enter the name of Product : ";
                cin >> delp;
                if (delp == namep1 || delp == namep2 || delp == namep3)
                {
                    cout << delp << " has been deleted";
                }
            }
            if (op == 5)
            {
                cout << "Enter the name of Product : ";
                cin >> delp;
                if (delp == namep1)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep1;
                    cout << delp << " has been updated." << endl;
                }
                else if (delp == namep2)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep2;
                    cout << delp << " has been updated." << endl;
                }
                else if (delp == namep3)
                {
                    cout << "Enter the updated Price : ";
                    cin >> pricep3;
                    cout << delp << " has been updated." << endl;
                }
                else
                {
                    cout << "There is no such product.";
                }
            }
            if (op == 6)
            {
                cout << "1)  You entered Product " << namep1 << endl;
                cout << "2)  You entered Product " << namep2 << endl;
                cout << "3)  You entered Product " << namep3 << endl;
                cout << "4)  You deleted " << delp << " from product list." << endl;
                cout << "5)  You updated price of " << delp1 << endl;
            }
            if (op == 7)
            {
                char ask;
                cout << "User1732 Just ordered a I-Phone 11.." << endl;
                cout << "Do you want to send the deliver or not?(y for yes)(n for no)" << endl;
                cin >> ask;
                if (ask == 'y')
                {
                    cout << "The order will be delivered soon" << endl;
                }
                else if (ask = 'n')
                {
                    cout << "Order was cancelled..";
                }
            }
            if (op == 8)
            {

                system("cls");
                cout << "Thanks for your Service";
            }
        }
    }

    cout << "**************************************************************************************" << endl;
    cout << "*                                                                                    *" << endl;
    cout << "*              *****          ***       *****         ***       ***********          *" << endl;
    cout << "*              **  ***       *   *      **   **      *   *      **      **           *" << endl;
    cout << "*              **    **     **   **     ******      **   **          **              *" << endl;
    cout << "*              **  ***     *********    **  **     *********      **     **          *" << endl;
    cout << "*              *****      **       **   **    **  **       **   ***********          *" << endl;
    cout << "*                                                                                    *" << endl;
    cout << "**************************************************************************************" << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Welcome to Daraz" << endl;
    cout << "We hope you will like our Website " << endl;
    cout << " " << endl;
    cout << " " << endl;
    cout << "Login as : " << endl;
    cout << "1) Admin" << endl;
    cout << "2) Seller" << endl;
    cout << "3) User" << endl;
    cin >> first;
    if (first == 3)
    {

        cout << "**************************************************************************************" << endl;
        cout << "*                                                                                    *" << endl;
        cout << "*              *****          ***       *****         ***       ***********          *" << endl;
        cout << "*              **  ***       *   *      **   **      *   *      **      **           *" << endl;
        cout << "*              **    **     **   **     ******      **   **          **              *" << endl;
        cout << "*              **  ***     *********    **  **     *********      **     **          *" << endl;
        cout << "*              *****      **       **   **    **  **       **   ***********          *" << endl;
        cout << "*                                                                                    *" << endl;
        cout << "**************************************************************************************" << endl;
        cout << "Welcome User" << endl;
        cout << "We hope you are having a great day." << endl;
        //login
        cout << " " << endl;
        cout << " " << endl;
        cout << "1) Login" << endl;
        cout << "2) View Items" << endl;
        cout << "3) View cart" << endl;
        cout << "4) Payment" << endl;
        cout << "5) Exit" << endl;
        cout << " " << endl;
        cout << "Enter your option...." << endl;
        cin >> op;

        if (op == 1)
        {
            int op1;
            cout << "1) Create new account" << endl;
            cout << "2) Login" << endl;
            cin >> op1;
            if (op1 == 1)
            {
                cout << "Enter your name : ";
                cin >> uname;
                cout << "Create your Password : ";
                cin >> passw;
                cout << "Welcome " << uname << endl;
                cout << "Your account has been created Successfully" << endl;
            }
            else
            {
                cout << "Can not connect to server......";
                cout << "Seems like you do not have any account";
            }
        }
        if (op == 2 || op == 3 || op == 4 || op == 5)
        {
            cout << "Invalid Opration" << endl;
        }
        //view && add items
        cout << " " << endl;
        cout << " " << endl;
        cout << "1) Login" << endl;
        cout << "2) View Items" << endl;
        cout << "3) View cart" << endl;
        cout << "4) Payment" << endl;
        cout << "5) Exit" << endl;
        cout << " " << endl;
        cout << "Enter your option...." << endl;
        cin >> op;

        if (op == 1)
        {
            int op1;
            cout << "1) Create new account" << endl;
            cout << "2) Login" << endl;
            cin >> op1;
            if (op1 == 1)
            {
                cout << "Enter your name : ";
                cin >> uname;
                cout << "Create your Password : ";
                cin >> passw;
                cout << "Welcome " << uname << endl;
                cout << "Your account has been created Successfully" << endl;
            }
            else
            {
                cout << "Can not connect to server......";
                cout << "Seems like you do not have any account";
            }
        }
        if (op == 2)
        {
            string trt;
            cout << "Items                      Price" << endl;
            cout << "1)" << namep1 << "                   " << pricep1 << endl;
            cout << "2)" << namep2 << "                   " << pricep2 << endl;
            cout << "3)" << namep3 << "                   " << pricep3 << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "Do you want to add any item to cart?(Enter number)(n for NO)" << endl;
            cin >> trt;
            if (trt == "1")
            {
                cout << namep1 << " has been added to the cart." << endl;
                order = namep1;
                oprice = pricep1;
            }
            else if (trt == "2")
            {
                cout << namep2 << " has been added to the cart." << endl;
                order = namep2;
                oprice = pricep2;
            }
            else if (trt == "3")
            {
                cout << namep3 << " has been added to the cart." << endl;
                order = namep3;
                oprice = pricep3;
            }
            else if (trt == "n")
            {
                cout << "Its ok" << endl;
            }
        }
        if (op == 3 || op == 4 || op == 5)
        {
            cout << "Invalid Opration" << endl;
        }

        //view cart
        cout << " " << endl;
        cout << " " << endl;
        cout << "1) Login" << endl;
        cout << "2) View Items" << endl;
        cout << "3) View cart" << endl;
        cout << "4) Payment" << endl;
        cout << "5) Exit" << endl;
        cout << " " << endl;
        cout << "Enter your option...." << endl;
        cin >> op;

        if (op == 1)
        {
            int op1;
            cout << "1) Create new account" << endl;
            cout << "2) Login" << endl;
            cin >> op1;
            if (op1 == 1)
            {
                cout << "Enter your name : ";
                cin >> uname;
                cout << "Create your Password : ";
                cin >> passw;
                cout << "Welcome " << uname << endl;
                cout << "Your account has been created Successfully" << endl;
            }
            else
            {
                cout << "Can not connect to server......";
                cout << "Seems like you do not have any account";
            }
        }
        if (op == 2)
        {
            string trt;
            cout << "Items                      Price" << endl;
            cout << "1)" << namep1 << "                   " << pricep1 << endl;
            cout << "2)" << namep2 << "                   " << pricep2 << endl;
            cout << "3)" << namep3 << "                   " << pricep3 << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "Do you want to add any item to cart?(Enter number)(n for NO)" << endl;
            cin >> trt;
            if (trt == "1")
            {
                cout << namep1 << " has been added to the cart." << endl;
                order = namep1;
                oprice = pricep1;
            }
            else if (trt == "2")
            {
                cout << namep2 << " has been added to the cart." << endl;
                order = namep2;
                oprice = pricep2;
            }
            else if (trt == "3")
            {
                cout << namep3 << " has been added to the cart." << endl;
                order = namep3;
                oprice = pricep3;
            }
            else if (trt == "n")
            {
                cout << "Its ok" << endl;
            }
        }
        if (op == 3)
        {
            cout << "Item                     Price" << endl;
            cout << order << "              " << oprice << endl;
        }
        if (op == 4 || op == 5)
        {
            cout << "Invalid Opration" << endl;
        }

        //payment
        cout << " " << endl;
        cout << " " << endl;
        cout << "1) Login" << endl;
        cout << "2) View Items" << endl;
        cout << "3) View cart" << endl;
        cout << "4) Payment" << endl;
        cout << "5) Exit" << endl;
        cout << " " << endl;
        cout << "Enter your option...." << endl;
        cin >> op;

        if (op == 1)
        {
            int op1;
            cout << "1) Create new account" << endl;
            cout << "2) Login" << endl;
            cin >> op1;
            if (op1 == 1)
            {
                cout << "Enter your name : ";
                cin >> uname;
                cout << "Create your Password : ";
                cin >> passw;
                cout << "Welcome " << uname << endl;
                cout << "Your account has been created Successfully" << endl;
            }
            else
            {
                cout << "Can not connect to server......";
                cout << "Seems like you do not have any account";
            }
        }
        if (op == 2)
        {
            string trt;
            cout << "Items                      Price" << endl;
            cout << "1)" << namep1 << "                   " << pricep1 << endl;
            cout << "2)" << namep2 << "                   " << pricep2 << endl;
            cout << "3)" << namep3 << "                   " << pricep3 << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "Do you want to add any item to cart?(Enter number)(n for NO)" << endl;
            cin >> trt;
            if (trt == "1")
            {
                cout << namep1 << " has been added to the cart." << endl;
                order = namep1;
                oprice = pricep1;
            }
            else if (trt == "2")
            {
                cout << namep2 << " has been added to the cart." << endl;
                order = namep2;
                oprice = pricep2;
            }
            else if (trt == "3")
            {
                cout << namep3 << " has been added to the cart." << endl;
                order = namep3;
                oprice = pricep3;
            }
            else if (trt == "n")
            {
                cout << "Its ok" << endl;
            }
        }
        if (op == 3)
        {
            cout << "Item                     Price" << endl;
            cout << order << "              " << oprice << endl;
        }
        if (op == 4)
        {

            cout << "Select the payment method : " << endl;
            cout << "1) Debit Card " << endl;
            cout << "2) Cash On Dilivered " << endl;
            cin >> uty;
            if (uty == 2)
            {
                cout << "Your order has been placed.You will recieve parcel in 3 to 5 working days." << endl;
                cout << "You have to pay cash on delivery." << endl;
            }
            if (uty != 2)
            {
                cout << "Sorry for inconvinence ." << endl;
                cout << "Due to server crash you can not pay online" << endl;
                cout << " " << endl;
                cout << "Your order has been placed.You will recieve parcel in 3 to 5 working days." << endl;
                cout << "You have to pay cash on delivery." << endl;
            }
        }
        if (op == 5)
        {
            cout << "Invalid Opration" << endl;
        }

        //exit
        cout << " " << endl;
        cout << " " << endl;
        cout << "1) Login" << endl;
        cout << "2) View Items" << endl;
        cout << "3) View cart" << endl;
        cout << "4) Payment" << endl;
        cout << "5) Exit" << endl;
        cout << " " << endl;
        cout << "Enter your option...." << endl;
        cin >> op;

        if (op == 1)
        {
            int op1;
            cout << "1) Create new account" << endl;
            cout << "2) Login" << endl;
            cin >> op1;
            if (op1 == 1)
            {
                cout << "Enter your name : ";
                cin >> uname;
                cout << "Create your Password : ";
                cin >> passw;
                cout << "Welcome " << uname << endl;
                cout << "Your account has been created Successfully" << endl;
            }
            else
            {
                cout << "Can not connect to server......";
                cout << "Seems like you do not have any account";
            }
        }
        if (op == 2)
        {
            string trt;
            cout << "Items                      Price" << endl;
            cout << "1)" << namep1 << "                   " << pricep1 << endl;
            cout << "2)" << namep2 << "                   " << pricep2 << endl;
            cout << "3)" << namep3 << "                   " << pricep3 << endl;
            cout << " " << endl;
            cout << " " << endl;
            cout << "Do you want to add any item to cart?(Enter number)(n for NO)" << endl;
            cin >> trt;
            if (trt == "1")
            {
                cout << namep1 << " has been added to the cart." << endl;
                order = namep1;
                oprice = pricep1;
            }
            else if (trt == "2")
            {
                cout << namep2 << " has been added to the cart." << endl;
                order = namep2;
                oprice = pricep2;
            }
            else if (trt == "3")
            {
                cout << namep3 << " has been added to the cart." << endl;
                order = namep3;
                oprice = pricep3;
            }
            else if (trt == "n")
            {
                cout << "Its ok" << endl;
            }
        }
        if (op == 3)
        {
            cout << "Item                     Price" << endl;
            cout << order << "              " << oprice << endl;
        }
        if (op == 4)
        {

            cout << "Select the payment method : " << endl;
            cout << "1) Debit Card " << endl;
            cout << "2) Cash On Dilivered " << endl;
            cin >> uty;
            if (uty == 2)
            {
                cout << "Your order has been placed.You will recieve parcel in 3 to 5 working days." << endl;
                cout << "You have to pay cash on delivery." << endl;
            }
            if (uty != 2)
            {
                cout << "Sorry for inconvinence ." << endl;
                cout << "Due to server crash you can not pay online" << endl;
                cout << " " << endl;
                cout << "Your order has been placed.You will recieve parcel in 3 to 5 working days." << endl;
                cout << "You have to pay cash on delivery." << endl;
            }
        }
        if (op == 5)
        {
            system("cls");
            cout << "Thanks for your Service";
        }
    }
}