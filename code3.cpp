#include <iostream>
using namespace std;

int main(){

    // relational Operators -> T / F
    int a = 3;
    int b = 3;
    cout << (a >= b) << endl;  // True -> 1
    cout << (a <= b) << endl;  // True -> 1

    cout << (a == b) << endl;  // True -> 1
    cout << (a != b) << endl;  // False -> 0



    // Logical Operators
    cout << ((3 < 5) && (10 > 5)) << endl;    //true -> 1

    return 0;
}