#include <iostream>
#include <fstream>
using namespace std;
main()
{
    string ch;
    fstream file;
    string final;
    file.open("data.txt", ios::in);
    getline(file, ch);
    file.close();
    // cout<<ch;
    for (int m = 0; ch[m] != '\0'; m++)
    {
        if (ch[m] == '"')
        {
            int index = m;
            while (1)
            {
                final = final + ch[index];
                index++;
                if (ch[index] == '"')
                {
                    final = final + ch[index];
                    break;
                }
                // cout<<"M"<<endl;
            }
            break;
        }
    }
    cout << final;
}