#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)



void getinput(int &);
void getinput(int &, int &);
void getinput(int &, int &, int &);
void getinput(int &, int &, int &, int &);
void swap(int &, int &);
void swap(int &, int &, int &);
void swap(int &, int &, int &, int &);



// Functions

void getinput(int val1, int val2) {
    cout << "Enter Value 1: ";
    cin >> val1;
    cout << "Enter Value 2: ";
    cin >> val2;

}

void swap(int &val1, int &val2) {
    int temp_val;
    val1 = temp_val;
    val1 = val2;
    val2 = temp_val;

}

void getinput(int val1, int val2, int val3) {
    cout << "Enter Value 1: ";
    cin >> val1;
    cout << "Enter Value 2: ";
    cin >> val2;
    cout << "Enter Value 3: ";
    cin >> val3;

}

void swap(int &val1, int &val2, int &val3) {
    int sum, max, remainder, min;
    sum = val1 + val2 + val3;

        if( (val1 > val2 && val1 > val3) )
        max = val1;
    else if (val2 > val3)
        max = val2;
    else
        max = val3;

    if ( (val1 < val2 && val1 < val3) )
        min = val1;
    else if (val2 < val3)
        min = val2;
    else 
        min = val3;

    remainder = (sum - max - min);


}

void getinput(int val1, int val2, int val3, int val4) {
    cout << "Enter Value 1: ";
    cin >> val1;
    cout << "Enter Value 2: ";
    cin >> val2;
    cout << "Enter Value 3: ";
    cin >> val3;
    cout << "Enter Value 4: ";
    cin >> val4;

}

void swap(int &val1, int &val2, int &val3, int &val4) {
    int temp_val;
    val1 = temp_val;
    val1 = val2;
    val2 = val3;
    val3 = val4;
    val4 = temp_val;

}

