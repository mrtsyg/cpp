#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstname = "murat ";
    string lastname = "saygili";
    cout << firstname << endl;
    //concatenation with plus operator
    cout << firstname + lastname << endl;
    //concatenation with append function
    cout << firstname.append(lastname) << endl;
    //this will works properly and output "murat 10"
    cout << firstname + "10" << endl;
    // cout << firstname + 10 << endl; this will get an error, because 10 is a number
    cout << firstname[0] << endl;
    return 0;
}