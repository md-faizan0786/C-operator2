#include <iostream>
using namespace std;

int main(){
    int a = 3;
    ++a;  //4
    cout<<"a = "<< a <<endl;
    --a;    //3
    cout<< "a = " << a <<endl;

    int b = a--;  //3
    cout<<"b = " << b<< endl;
    b--;   //2
    cout<<"b = " << b<< endl;



    return 0;
}