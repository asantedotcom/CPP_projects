#include <iostream>
using namespace std;

int main() {
    int age1, age2, age3;
    cout << "Enter three ages: ";
    cin >> age1 >> age2 >> age3;

    int lowest = age1;
    if (age2 < lowest) lowest = age2;
    if (age3 < lowest) lowest = age3;

    cout << "Lowest age: " << lowest << endl;

    return 0;
}