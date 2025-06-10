
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));
    const int ROW = 5;
    const int COLUMN = 5;
    int ARRAY[ROW][COLUMN];
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++){
            ARRAY[i][j]= rand() % 21 - 10;
        }
    }
    cout << "Matrix : " << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << ARRAY[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < ROW; i++) {
        ARRAY[i][i] = 0;
    }
    for (int i = 0; i < ROW; i++) {
        for (int j = i + 1; j < COLUMN; j++) {
            ARRAY[i][j] = 0;
        }
    }
    cout << "A matrix whose main diagonal and the values above it are equal to 0 :" << endl;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << ARRAY[i][j] << '\t';
        }
        cout << endl;
    }
    int k, p;
    cout << "Enter row p and column k.\n";
    cout << "p : ";
    cin >> p;
    cout << "k : ";
    cin >> k;
    if (p < 0 || p >= ROW || k < 0 || k >= COLUMN) {
        cout << "Invalid row or column index!\n";
        return 1;
    }
    p--;
    k--;
    int row_sum = 0;
    for (int j = 0; j < COLUMN; j++) {
        row_sum += ARRAY[p][j];
    }
    int col_sum = 0;
    for (int i = 0; i < ROW; i++) {
        col_sum += ARRAY[i][k];
    }
    p++;
    k++;
    cout << "Sum of row " << p << ": " << row_sum << endl;
    cout << "Sum of column " << k << ": " << col_sum << endl;
    return 0;
}

