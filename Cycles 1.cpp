#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i < int(sqrt(n) + 1); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int third_task() {
    int n;
    do {
        cout << "Enter N: ";
        cin >> n;
        if (n < 2) {
            cout << "#ERROR: Please, enter a positive number, more than 2\n";
        }
    } while (n < 2);
    cout << "Prime numbers from 2 to " << n << " is: ";
    for (int i = 2; i <= n; ++i) {
        if(is_prime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}

int seven_task() {
    int n, k;
    do {
        cout << "Enter n, n > 1: ";
        cin >> n;
        cout << "Enter k: ";
        cin >> k;
    } while (n < 2);

    cout << "0,";
    int temp = 10;
    for (int i = 0; i < k; ++i) {
        cout << temp / n;
        temp = (temp % n) * 10;
    }
    return 0;
}

int eleven_task() {
    int a, b, h;
    cout << "Enter a range (a, b): ";
    cin >> a >> b;
    cout << "Enter a step: ";
    cin >> h;

    for (int x = a; x < b; x = x + h) {
        if (x * x - 1 < 0) {
            cout << "Root from negative number\n";
        } else if (2 * x - 8 <= 0) {
            cout << "Log from not positive number\n";
        } else if (log(2*x - 8) == 0) {
            cout << "Division by zero\n";
        } else {
            double f = sqrt(x * x - 1) / log(2 * x - 8);
            cout << "X: " << x << "F: " << f << "\n";
        }
    }

    return 0;
}

int sixteen_task() {
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i << " ";
        }
        cout << "\n";
        for (int j = 1; j <= i; ++j) {
            cout << i*2 << " ";
        }
        cout << "\n";
    }
    return 0;
}

int main () {
    third_task();
    seven_task();
    eleven_task();
    sixteen_task();
    return 0;
}