#include <iostream>
#include <cmath>
using namespace std;

// First task
// Here is function for first task to check if it's valid input
bool is_valid_input_for_first(int a, int x, int y) {
    if (100 <= a && a <= 999) {
        if (1 <= x && x < 10) {
            if (1 <= y && y < 10) {
                return true; // True is valid input
            } else {
                return false; // False - invalid input
            }
        } else {
            return false; // Invalid input
        }
    } else {
        return false; // Invalid input
    }
}

// Here is a function to count a sum of digits for 3-digits numbers
int sum_of_digits(int n) {
    int a1 = n / 100;
    int a2 = (n % 100) / 10;
    int a3 = n % 10;
    return a1 + a2 + a3;
}

// Here is function, which adds delta for every number of n
int change_number(int n, int delta) {
    int a1 = n / 100; // Here we get a first digit
    int a2 = (n % 100) / 10; // Here we get a second digit
    int a3 = n % 10; // Here we get a third digit

    a1 = abs(a1 + delta) * 100;
    a2 = abs(a2 + delta) * 10;
    a3 = abs(a3 + delta);

    return a1 + a2 + a3;
}

// Here is function, which multiply every n digit by two
int multiply_by_two(int n) {
    int a1 = n / 100; // Here we get a first digit
    int a2 = (n % 100) / 10; // Here we get a second digit
    int a3 = n % 10; // Here we get a third digit
    
    a1 = ((a1 * 2) % 10) * 100;
    a2 = ((a2 * 2) % 10) * 10;
    a3 = (a3 * 2) % 10;
    
    return a1 + a2 + a3;
}

// Here is code for first task of if/else constructions
int first_task() {
    int A, x, y;
    cout << "Enter a 3-digits value: ";
    cin >> A;
    cout << "Enter two 1-digit values: ";
    cin >> x >> y;
    int sum_of_A = sum_of_digits(A);
    int result;
    if (!is_valid_input_for_first(A, x, y)) { // situations, when the input doesn't valid, would return 1 as an error and print that input is not correct
        cout << "Not correct input";
        return 1;
    } else { // situations when input is valid
        if ((sum_of_A % x != 0) && (sum_of_A % y != 0)) {
            result = change_number(A, -1);
        } else if ((sum_of_A % x == 0) && (sum_of_A % y != 0)) {
            result = multiply_by_two(A);
        } else if ((sum_of_A % x != 0) && (sum_of_A % y == 0)) {
            result = change_number(A, 1);
        } else {
            result = change_number(A, -5);
        }
        cout << result;
        return 0;
    }
}

// Sixth task
// Here is a function to create a square of any int
int square(int x) {
    return x * x;
}

// Here is function, which check out input for valid
bool is_valid_input_for_six(int x) {
    if (((square(x) - 16) == 0) || (sqrt(square(x) - 4 * x + 4) == 0)) {
        cout << "Division by zero\n";
        return false;
    } else if (((x + 5) < 0) || ((square(x) - 4 * x + 4) < 0)) {
        cout << "Attempt to get a square root from negative number\n";
        return 1;
    } else if ((square(x) - 1) <= 0) {
        cout << "Not positive log\n";
        return false;
    } else {
        return true;
    }
}

// Here is code to get a function value for six task
double function_for_six(int x) {
    return (sin(log(square(x) - 1))) / (square(x) - 16) + (sqrt(x + 5)) / (sqrt(square(x) - 4 * x + 4));
}

// Here is code for sixth task in if/else operators
int six_task() {
    cout << "Enter X: ";
    int x;
    double f;
    cin >> x;
    if (is_valid_input_for_six(x)) {
        f = function_for_six(x);
        cout << f;
    } else {
        return 1;
    }
    return 0;
}

// Eleventh task
// Here is code to check for valid input for eleventh task
bool is_valid_input_for_eleventh(int m, int n)  {
    if (m >= 0) {
        if (n >=  0 && n <= 20) {
            return true;
        } else {
            cout << "Incorrect day\n";
            return false;
        }
    } else {
        cout << "Incorrect month\n";
        return false;
    }
}

string add_month(int m) {
    m = (m % 12) + 1; // Here I would use +1 to count month, like in the real world
    switch (m) {
        case 1:
            return "January";
        case 2:
            return "February";
        case 3:
            return "March";
        case 4:
            return "April";
        case 5:
            return "May";
        case 6:
            return "June";
        case 7:
            return "July";
        case 8:
            return "August";
        case 9:
            return "September";
        case 10:
            return "October";
        case 11:
            return "November";
        case 12:
            return "December";
        default:
            return "Error";
    }
}

// Here is function, which convert month and day into a date
int convert_to_date(int m, int n) {
    int year = 2000;
    int day = 1;
    string month = add_month(m);

    day += n;
    year += m / 12;

    cout << day << " " << month << " " << year;

    return 0;
}

// Here is code to complete an eleventh task from boolean operations
int eleven_task() {
    int m, n;
    cout << "Enter m for month: ";
    cin >> m;
    cout << "Enter n for days (from 0 to 20): ";
    cin >> n;

    if (is_valid_input_for_eleventh(m, n)) {
        return convert_to_date(m, n);
    } else {
        return 1;
    }
}

// Sixteenth task
void checkCircles(double x1, double y1, double r1, double x2, double y2, double r2) {
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); // Distance from centers of circles

    if (d == 0 && r1 == r2) { // if distance is equals to zero and radiuses are the same, circles mathch
        cout << "The circles math" << endl;
    } else if (d == r1 + r2) { // if distance is equals to the sum of radiused, the circles touch externally
        cout << "The circles touch externally" << endl;
    } else if (d == abs(r1 - r2)) { // if distance is equals to absolute difference of radiuses, the circles touch internally
        cout << "The circles touch internally" << endl;
    } else if (d > r1 + r2) { // if distance is more than the summ of radiuses, the circles do not intersect
        cout << "the circles do not intersect" << endl;
    } else if (d < abs(r1 - r2)) { // if distanse is less than the absolute difference between radiuses, one circle is nested to another
        cout << "One circle is nested in another" << endl;
    } else { // And all else situations - circles inersect
        cout << "the circles intersect" << endl;
    }
}

int sixteen_task() {
    double x1, y1, r1, x2, y2, r2;
    cout << "Enter coordinates and radius for first circle (x1, y1, r1): ";
    cin >> x1 >> y1 >> r1;
    cout << "Enter coordinates and radius for second circle (x2, y2, r2): ";
    cin >> x2 >> y2 >> r2;
    // Here we don't need to check for valid input
    checkCircles(x1, y1, r1, x2, y2, r2);

    return 0;
}


int main() {
    first_task();
    return 0;
}
