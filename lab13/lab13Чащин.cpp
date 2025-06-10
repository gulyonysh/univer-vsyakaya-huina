
#include <iostream>
using namespace std;
double getTerm(int n) {
    if (n == 1) return 200;
    if (n == 2) return 100;
    if (n == 3) return 50;
    if (n == 4) return 25;
    return getTerm(n - 1) / 2;
}

int main() {
    int n;
    cout << "Enter row member number (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "The member number may be an additional whole number." << endl;
    }
    else {
        double result = getTerm(n);
        cout << "Member number " << n << " is equal to " << result << endl;
    }

    return 0;
}
