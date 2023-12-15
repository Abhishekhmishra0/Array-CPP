#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> columns;
    int matrix1[rows][columns];
    int matrix2[rows][columns];
    int result[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter matrix1 element (" << i + 1 << " , " << j + 1 << " )" << endl;
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter matrix2 element (" << i + 1 << " , " << j + 1 << " )" << endl;
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout << "Sum of matrix1 and matrix2 is "<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout <<result[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}