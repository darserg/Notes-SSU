#include <iostream>
using namespace std;


// here we need to make a two pow of number i
int first_task(int i) {
    return 1 << i; // It will move a bit left to n positions;
}

// in i'th postion it's "1" and all another chars is like in n number
int second_task(int i, int n) {
    int temp = 1 << i; // Move a bit with "1" to i position, to create a number, like 100000 or something like this, number of "0" depends on i
    return n | temp; // Here we use a byte or, to create a number with with byte will "0" and all other like in the n number
}

// in i'th position it's "0" and all another chars is like in n number
int third_task(int i, int n)  {
    int temp = 1 << i; // Move a bit with "1" to i position, to create a number, like 100000 or something like this, number of "0" depends on i
    return n & ~temp; // Here we use a byte or, to create a number with with byte will "1" and all other like in the n number (~ - byte negative (creates a different number with 0 and '1')
}

// in this task we must change an i'th byte and all other bytes will be like in the n number
int fourth_task(int i, int n) {
    int temp = 1 << i; // Here we create an temp int (will use it once) with first bit of '1' and all another bytes is
    return n ^ temp; // Here we are changing an i'th byte and all other numbers like in the n number
}

// in this task we must check if the number is even or odd, i would return true, if number is even and false, if the number is odd
int fiveth_task(int n) {
    // imagine, that n = 2, in two-digits system it's 10
    // so if we use |, it would be 11 = 3, (n | 1) is bigger to n
    if ((n | 1) > n) { // if we made this operation with od number, it wouldn't change, so if number is bigger, it's even
        cout << "The number is even \n";
    }
    else {
        cout << "The number is odd \n";
    }
    return 0;
}

int bitOperations () {
    int i, n; // Declaration of int i and n
    cout << "Enter n: "; // Modified string to simply enter the value for n
    cin >> n; // Enter a value for n
    cout << "\nEnter i: "; // Modification to simply enter the value for i
    cin >> i; // Enter a value for i
    // Here will use special function for every task to make code more readable
    cout << "#1: Here is 2 in grade of i " << first_task(i) << "\n"; // Function call for first task
    cout << "#2: Here is n with 1 in at the n-th position " << second_task(i, n) << "\n"; // Fuction call for second task
    cout << "#3: Here is n with 0 in at the n-th position " << third_task(i, n) << "\n"; // Function call for third task
    cout << "#4: Here is n with switched bit at the n-th position " << fourth_task(i, n) << "\n"; // Function call for fourth task
    cout << "#5: Here is a check for the even or odd number with bit operations ";
    fiveth_task(n); // Function call for fiveth task
    return 0;
}
