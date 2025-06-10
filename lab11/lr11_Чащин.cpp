#include <iostream>
using namespace std;

int main() {
    srand(time(0));  
    cout << "1: " << endl;
    char a, b;
    cout << "Enter first character (a): ";
    cin >> a;
    cout << "Enter second character (b): ";
    cin >> b;
    char* pA = &a;
    char* pB = &b;
    char temp = *pA;
    *pA = *pB;
    *pB = temp;
    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << endl;

    cout << "2: " << endl;
    double* p1 = new double;
    double* p2 = new double;
    *p1 = 18.05;
    *p2 = 3.01;
    cout << "Before swapping:" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    double temp1 = *p1;
    *p1 = *p2;
    *p2 = temp1;
    cout << "After swapping:" << endl;
    cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << endl;
    delete p1;
    delete p2;
    cout << endl;

    cout << "3: " << endl;
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* a1 = new int[n];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        a1[i] = rand() % 31;  
        cout << a1[i] << " ";  
    }
    cout << endl;

    int last25index = -1;
    for (int i = 0; i < n; ++i) {
        if (a1[i] == 25) {
            last25index = i;
        }
    }

    if (last25index != -1 && n > 2) {
        int temp2 = a1[last25index];
        a1[last25index] = a1[2];  
        a1[2] = temp2;
        cout << "Swap completed. Array after swapping:\n";
        for (int i = 0; i < n; ++i) {
            cout << a1[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Element 25 not found or the array is too small to swap.\n";
    }

    int set;
    cout << "Enter the set number: ";
    cin >> set;

    double product = 1;
    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (a1[i] > set) {
            product *= a1[i];
            count++;
        }
    }
    if (count > 0) {
        double geometric_mean = pow(product, 1.0 / count);
        cout << "Geometric mean of elements greater than " << set << " = " << geometric_mean << endl;
    }
    else {
        cout << "No elements greater than " << set << ".\n";
    }
    delete[] a1;  
    return 0;
}
