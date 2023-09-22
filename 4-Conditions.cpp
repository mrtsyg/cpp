#include <iostream>
using namespace std;

int main() {
    int num1 = 21;
    int num2 = 32;
    if(num1 < num2){
        //used '\n' instead of endl in the example
        cout << "32 greater than 21 \n";
    }else if(num2 < num1){
        cout << "21 greater than 32 \n";
    }else{
        cout << "they are equal \n";
    }
    //short usage
    cout << (num1 < num2 ? "32 greater than 21 \n" : "21 greater than 32 or they are equal \n");
    return 0;
}