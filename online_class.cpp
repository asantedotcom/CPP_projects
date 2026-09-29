#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ONLINE CLASS
    int stored_password = 334455;
    int entered_password;

    cout << "Enter your password: ";
    cin >> entered_password;

    if (stored_password == entered_password)
    {
        cout << "correct password" << endl;
    }
    else
    {
        cout << "wrong password" << endl;
    }

    return 0;
}