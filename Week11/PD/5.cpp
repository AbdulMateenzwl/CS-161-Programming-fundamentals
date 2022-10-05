#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int parse(string row, int column)
{

    int commansCount = 1;
    string item;
    int digit;
    for (int index = 1; index < row.length() - 1; index++)
    {
        char ch = row[index];
        if (ch == ',')
        {
            commansCount++;
        }
        else if (commansCount == column)
        {
            item = item + ch;
        }
    }
    digit = stoi(item);
    cout<<item<<endl;
    cout<<digit<<endl;
    return digit;
}
                                            main()
{
    string name, data;
    fstream file;
    int orders;
    int price = 0, count = 0;

    int u_orders, min_or;
    cout << "Enter number of orders : ";
    cin >> u_orders;
    cout << "Enter minimum order price :";
    cin >> min_or;
    file.open("pizza.txt", ios::in);
    while (!file.eof())
    {
        file >> name;
        file >> orders;
        file >> data;
        cout<<name;
        cout << orders;
        cout << data;
        for (int m = 1; data[m+1] != '\0' ; m++)
        {
            cout<<data[m]<<endl;
        }

        for (int m = 1; m < orders; m++)
        {
            price = parse(data, m);
            if (price > min_or)
            {
                count++;
            }
        }
        if (count > u_orders)
        {
            cout << name;
        }
    }
    file.close();
}