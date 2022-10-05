#include <iostream>
#include <stdlib.h>
using namespace std;
const int size = 3;
int Aarray[size][size];
int Barray[size][size];
int Carray[size][size];
void takeinput()
{
    while (true)
    {
        system("cls");
        cout << "Enter Matrix :" << endl;
        cout << "1 ( A matrix ) " << endl;
        cout << "2 ( B matrix ) " << endl;
        cout << "3 Exit " << endl;
        char option;
        cin >> option;
        int count = 1;
        if (option == '1')
        {
            for (int Arow = 0; Arow < size; Arow++)
            {
                for (int Acol = 0; Acol < size; Acol++)
                {
                    cout << "matrix A " << count << "value " << endl;
                    cin >> Aarray[Arow][Acol];
                    count++;
                    system("cls");
                }
            }
            // ______________input a___________________
            cout << "matrix A " << endl;
            for (int Arow = 0; Arow < size; Arow++)
            {
                for (int Acol = 0; Acol < size; Acol++)
                {
                    cout<< "\t" << Aarray[Arow][Acol] ;
                }
                cout<<endl;
            }
            system("pause");
        }
        else if (option == '2')
        {
            count = 1;
            cout << "Enter valuse of matrix B:" << endl;
            for (int Brow = 0; Brow < size; Brow++)
            {
                for (int Bcol = 0; Bcol < size; Bcol++)
                {
                    cout << "matrix B " << count << " value " << endl;
                    cin >> Barray[Brow][Bcol];
                    count++;
                    system("cls");
                }
            }
            for (int Brow = 0; Brow < size; Brow++)
            {
                for (int Bcol = 0; Bcol < size; Bcol++)
                {
                    cout<< "\t" << Barray[Brow][Bcol] ;
                }
                cout<<endl;
            }
            system("pause");
        }
        else if (option == '3')
        {
            break;
        }
        else
        {
            cout << "please enter valid matrix" << endl;
        }
    }
}
void addition()
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            Carray[row][col] = Aarray[row][col] + Barray[row][col];
        }
    }
    cout << "C MATRIX " << endl;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            cout<< "\t" << Carray[row][col] ;
        }
        cout << endl;
    }
    system("pause");
}
void subtraction()
{
    cout << "C MATRIX " << endl;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            Carray[row][col] = Aarray[row][col] - Barray[row][col];
            cout << "\t"<< Carray[row][col] ;
        }
        cout << endl;
    }
    system("pause");
}
void mulicpicationmatrices()
{
    cout << "C MATRIX" << endl;
    int x = 0, sum = 0;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            for (int a = 0; a < size; a++)
            {
                Carray[row][col] = Aarray[row][a] * Barray[a][col];
                x = Carray[row][col] + sum;
                sum = x;
            }
            cout<< "\t" << x ;
            x = 0;
            sum = 0;
        }
        cout<<endl;
    }
    system("pause");
}
void Identitya()
{
    int check = 0, yes = 0;
    for (int Arow = 0; Arow < size; Arow++)
    {
        for (int Acol = 0; Acol < size; Acol++)
        {
            if (Arow == Acol && Aarray[Arow][Acol] != 1)
            {
                check++;
                cout << "it is not a identity matrix" << endl;
                break;
            }
            if (Arow != Acol && Aarray[Arow][Acol] != 0)
            {
                cout << "it is not a identity matrix" << endl;
                check++;
                break;
            }
        }
        if (check != 0)
        {
            break;
        }
        else if (Arow == size - 1)
        {
            cout << "yes it is identity matrix" << endl;
        }
    }
    system("pause");
}
void Identityb()
{
    int check = 0;
    for (int Brow = 0; Brow < size; Brow++)
    {
        for (int Bcol = 0; Bcol < size; Bcol++)
        {
            if (Brow == Bcol && Aarray[Brow][Bcol] != 1)
            {
                check++;
                cout << "it is not a identity matrix" << endl;
                break;
            }
            if (Brow != Bcol && Aarray[Brow][Bcol] != 0)
            {
                cout << "it is not a identity matrix" << endl;
                check++;
                break;
            }
        }
        if (check != 0)
        {
            break;
        }
        else if (Brow == size - 1)
        {
            cout << "yes it is identity matrix" << endl;
        }
    }
    system("pause");
}
void transpose1()
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            Carray[row][col] = Aarray[col][row];
            cout<<"\t" << Carray[row][col];
        }
        cout << endl;
    }
    system("pause");
}
void transpose2()
{
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            Carray[row][col] = Barray[col][row];
            cout<< "\t" << Carray[row][col] ;
        }
        cout << endl;
    }
    system("pause");
}
void amatrixscalar()
{
    cout << "enter the scalar value" << endl;
    int value;
    cin >> value;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            Carray[row][col] = value * Aarray[row][col];
            cout<< "\t" << Carray[row][col] ;
        }
        cout << endl;
    }
    system("pause");
}
void bmatrixscalar()
{
    cout << "enter the scalar value" << endl;
    int value;
    cin >> value;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            Carray[row][col] = value * Barray[row][col];
            cout << "\t"<< Carray[row][col] ;
        }
        cout << endl;
    }
    system("pause");
}
void amatrixdiagonal()
{

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row == col)
            {
                Carray[row][col] = Aarray[row][col];
                cout<< "\t" << Carray[row][col] ;
            }
            cout<<endl;
        }
    }
    system("pause");
}
void bmatrixdiagonal()
{

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row == col)
            {
                Carray[row][col] = Barray[row][col];
                cout << "\t"<< Carray[row][col] ;
            }
            cout<<endl;
        }
    }
    system("pause");
}
void symmetrymatrixa()
{
    cout << "transpose of matrix a" << endl;
    transpose1();
    int count = 0;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (Carray[row][col] != Aarray[row][col])
            {
                count++;
                cout << "it is not a symmetric matrix" << endl;
                break;
            }
        }
        if (count != 0)
        {
            break;
        }
        cout << endl;
    }
    if (count == 0)
    {
        cout << "it is symmetric matrix" << endl;
    }
    system("pause");

}
void symmetrymatrixb()
{
    cout << "transpose of matrix B" << endl;
    transpose2();
    int count = 0;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (Carray[row][col] != Barray[row][col])
            {
                count++;
                cout << "it is not a symmetric matrix" << endl;
                break;
            }
        }
        if (count != 0)
        {
            break;
        }
        cout << endl;
    }
    if (count == 0)
    {
        cout << "it is symmetric matrix" << endl;
    }
    system("pause");
}
void performfunction()
{
    while (true)
    {
        system("cls");
        cout << "1-ADDITION" << endl;
        cout << "2-SUBTRACTION" << endl;
        cout << "3-MULTIPLICATION" << endl;
        cout << "4-CHECK IDENTITY" << endl;
        cout << "5-SCALAR MULTIPLICATION" << endl;
        cout << "6-TRANSPOSE" << endl;
        cout << "7-DIAGONAL OF MATRIXS" << endl;
        cout << "8-SYMMETRIC OF MATRIXS" << endl;
        cout << "9-EXIT" << endl;
        char option;
        cin >> option;
        if (option == '1')
        {
            cout << "C=A+B" << endl;
            addition();
        }
        else if (option == '2')
        {
            cout << "C=A-B" << endl;
            subtraction();
        }
        else if (option == '3')
        {
            cout << "C=A*B" << endl;
            mulicpicationmatrices();
        }
        else if (option == '4')
        {
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cin >> matrix;
            if (matrix == '1')
            {
                Identitya();
            }
            else if (matrix == '2')
            {
                Identityb();
            }
            else
            {
                cout << "wrong option" << endl;
            }
        }
        else if (option == '6')
        {
            cout << "transpose of matrix" << endl;
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cin >> matrix;
            if (matrix == '1')
            {
                transpose1();
            }
            else if (matrix == '2')
            {
                transpose2();
            }
            else
            {
                cout << "wrong option" << endl;
            }
        }
        else if (option == '5')
        {
            cout << "scalar muliplication of matrix" << endl;
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cin >> matrix;
            if (matrix == '1')
            {
                amatrixscalar();
            }
            if (matrix == '2')
            {
                bmatrixscalar();
            }
        }
        else if (option == '7')
        {
            cout << "daigonal of matrix" << endl;
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cin >> matrix;
            if (matrix == '1')
            {
                amatrixdiagonal();
            }
            else if (matrix == '2')
            {
                bmatrixdiagonal();
            }
        }
        else if (option == '8')
        {
            cout << "symmetry of matrix" << endl;
            char matrix;
            cout << "1-MATRIX A" << endl;
            cout << "2-MATRIX B" << endl;
            cin >> matrix;
            if (matrix == '1')
            {
                symmetrymatrixa();
            }
            else if (matrix == '2')
            {
                symmetrymatrixb();
            }
        }
        else if (option == '9')
        {
            break;
        }
        else
        {
            cout << "enter valid option" << endl;
        }
    }
}
main()
{
    takeinput();
    performfunction();
}