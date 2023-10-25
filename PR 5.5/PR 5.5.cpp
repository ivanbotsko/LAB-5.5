#include <iostream>
using namespace std;

int d = 0;
int max_d = 0;

int A(int m, int n) {
    d++;
    if (d > max_d) {
        max_d = d;
    }
    int result;
    if (m == 0) {
        result = n + 1;
    }
    else if (n == 0) {
        result = A(m - 1, 1);
    }
    else {
        result = A(m - 1, A(m, n - 1));
    }
    d--;
    return result;
}

int main() {
    int m, n;
    cout << "m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;

    int result = A(m, n);
    cout << "The value of the Ackerman function: " << result << endl;
    cout << "Maximum recursion depth: " << max_d << endl;

    return 0;
}

