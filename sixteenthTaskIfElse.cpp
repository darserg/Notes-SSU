#include <iostream>
using namespace std;

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
        if (r1 < r2) {
            cout << "First circle is nested into a second";
        } else {
            cout << "Second circle is nested into a first";
        }
    } else { // And all else situations - circles inersect
        cout << "the circles don't intersect" << endl;
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
    return sixteen_task();
}
