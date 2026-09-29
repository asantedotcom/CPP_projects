#include <iostream>
using namespace std;

int main() {
    int age1, age2, age3;
    cout << "Enter three ages: ";
    cin >> age1 >> age2 >> age3;

    double average = (age1 + age2 + age3) / 3.0;
    cout << "Average age: " << average << endl;

    return 0;
}