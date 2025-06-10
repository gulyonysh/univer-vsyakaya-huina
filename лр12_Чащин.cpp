#include <iostream>
using namespace std;
const int row = 5;
const int coln = 6;
/*.Дано прямокутну матрицю.
Створити функцію заміни місцями стовпця, що містить елемент з максимальним значенням, зі стовпцем, що містить елемент з найменшим значенням.*/
void swapColn(int array[][coln], int row, int minColn, int maxColn) {
	for (int i = 0; i < row; i++) {
		int temp = array[i][minColn];
		array[i][minColn]=array[i][maxColn];
		array[i][maxColn] = temp;
	}
}
void printMatrix(int array[][coln], int row, int coln) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < coln; j++) {
			cout << array[i][j] << '\t';
		}
		cout << endl;
	}
}

int main()
{
	srand(time(0));
	const int row = 5;
	const int coln = 6;
	int matrix[row][coln];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < coln; j++) {
			matrix[i][j] = rand() % 21-10;
		}
	}
	cout << "Matrix befor swapping : " << endl;
	printMatrix(matrix, row, coln);

	int minVal = matrix[0][0], maxVal = matrix[0][0];
	int minColn = 0, maxColn = 0;

	for (int j = 0; j < coln; j++) {
		for (int i = 0; i < row; i++) {
			if (matrix[i][j] < minVal) {
				minVal = matrix[i][j];
				minColn = j;
			}
			if (matrix[i][j] > maxVal) {
				maxVal = matrix[i][j];
				maxColn = j;
			}
		}
	}
	if (minColn != maxColn) {
		swapColn(matrix, row, minColn, maxColn);
		cout << "Matrix after swapping : " << endl;
		printMatrix(matrix, row, coln);
		if (minColn < maxColn) {
			cout << "Colns " << minColn+1 << " and " << maxColn+1 << " was swaped.";
		}
		else {
			cout << "Colns " << maxColn+1 << " and " << minColn+1 << " was swaped.";
		}
	}
	else {
		cout << "Min and max elements are in the same column. No swapping needed." << endl;
	}
}
