#include <iostream>
using namespace std;
int main()
{
    int rows1, columns1;
    cout << "Enter number of rows of matrix1: ";
    cin >> rows1;
    cout << "Enter number of columns of matrix1: ";
    cin >> columns1;
    int rows2, columns2;
    cout << "Enter number of rows of matrix2: ";
    cin >> rows2;
    cout << "Enter number of columns of matrix2: ";
    cin >> columns2;
    int matrix1[rows1][columns1];
    int matrix2[rows2][columns2];
    int result[rows1][columns2];
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            cout << "Enter matrix1 element (" << i + 1 << " , " << j + 1 << " )" << endl;
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            cout << "Enter matrix2 element (" << i + 1 << " , " << j + 1 << " )" << endl;
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            result[i][j]=0;
            for (int k = 0; k < rows2; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}