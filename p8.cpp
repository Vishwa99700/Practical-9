# include <iostream>
using namespace std;
int main ()
{
    cout << "Enter the 1'st number " << endl;
    int a;
    cin >> a;
    cout << "Enter the 2'nd number " << endl;
    int b;
    cin>> b;

    int sum;
    sum = a+b;

    int dif;
    dif = a-b;

    float div;
    div = a/b;

    int mul;
    mul = a*b;

    int mod;
    mod = a%b;

    cout << " Sum is " << sum;
    cout << endl;
    cout << " Differance is " << dif;
    cout << endl;
    cout << " Division is " << div;
    cout << endl;
    cout << " Multiplication is " << mul;
    cout << endl;
    cout << " Modulus is " << mod;
    cout << endl;

    return 0;
}

