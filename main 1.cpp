#include <iostream> //c++ standart library to input/output code in console
#include <cmath>    // c++ standart library to connect math functions
using namespace std;

// Here is code for first task in file task1.pdf
// In this task we have to find a value of function with two params (x and y)
int firstTask()
{
    // this block creates a variables for x, y and f (f for function) and set a value for x and y
    cout << "Enter x and y: \n";
    int x, y;
    float f;
    cin >> x >> y;

    f = (1.0 / 2.0) * ((sqrt(exp(x * x + y * y)) - y * x) / ((x * x) + (y * y))) + log((sqrt(x * x * x * x) / (sqrt(y * y * y * y)))); // function from file
    cout << f << "\n";                                                                                                                 // printing a function value to console
    return 0;                                                                                                                          // return 0 as succesfully passed task
}

// after building a first task, I decided to have a function, which would pass integer into square
int square(int number)
{
    return number * number; // the simpliest function to create - a square function, simple multiply number by itself
}

// Here is code for sixth task in file task1.pdf
// In this case we have to find a value of function with two params (x and y)
int sixTask()
{
    cout << "Enter x and y: \n";
    int x, y;
    float f;
    cin >> x >> y; // we declaired two variables and set them value from console

    f = sqrt(exp(sqrt(cos((x + y) / (x - y)))) + sin(log(square(x * square(y))))); // here is the function from the task
    cout << f << "\n";                                                             // printing a function value to console
    return 0;                                                                      // return 0 as succesfully passed task
}

// Here is code for eleventh task in file task1.pdf
// In this case program have to change the first and the third digits of the three-gigits number
int elevenTask()
{
    cout << "Enter a number from 100 to 999: \n";
    int x, y;
    cin >> x; // Basicly, we got a value from console

    int first_num = x / 100;                           // here we get a first digit of our main number
    int second_num = (x % 100) / 10;                   // here we get a second digit of our main number
    int third_num = x % 10;                            // here we get a third digit of our main number
    y = third_num * 100 + second_num * 10 + first_num; // here we got an answer, with changed first and third digits
    cout << y << "\n";
    return 0; // return 0 as succesfully passed task
}

// Here is code for sixteeenth task in file task1.pdf
// In this case program have to give us a three-digit (Y) value from another three-digit (X) value with some rules
// First digit of Y is a module division by ten for sum of third and second digits of X
// Second digit of new value is an absolute substraction of first and third digits of X
// Third digit of Y is a module division of second digit by first digit of X
int sixteenTask()
{
    cout << "Enter a number from 100 to 999: \n";
    int x, y;
    cin >> x; // Getting an X value

    int third_num = x % 10;          // Counting third digit
    int second_num = (x % 100) / 10; // Counting second digit
    int first_num = x / 100;         // Counting first digit

    y = ((second_num + third_num) % 10) * 100 + abs(first_num - third_num) * 10 + (second_num % first_num); // Getting an Y value
    cout << y << "\n";                                                                                      // printing Y value
    return 0;                                                                                               // return 0 as succesfully passed task
}

int base()
{
    cout << "First task: \n \n";
    firstTask();
    cout << "Sixth task: \n \n";
    sixTask();
    cout << "Eleventh task: \n \n";
    elevenTask();
    cout << "Sixteenth task: \n \n";
    sixteenTask();
    return 0;
}
