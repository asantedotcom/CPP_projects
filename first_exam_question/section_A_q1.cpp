#include <iostream>

using namespace std;

float findProduct(float n1, float n2, float n3)
{
 
    return n1 * n2 * n3;
}



int main()
{

    float n1 , n2 ,n3;


    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;
  cout << findProduct(n1,n2,n3) << endl;
    return 0;
}
