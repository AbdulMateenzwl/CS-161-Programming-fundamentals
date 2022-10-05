#include<fstream>
using namespace std;
main()
{
    string line = "Abdul Mateen";
    fstream newFile;
    newFile.open("My.txt" , ios :: out);
    newFile << line;
    newFile.close();
}