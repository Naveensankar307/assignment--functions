//Find factorial of a no

#include<iostream>
int factorial (int);
using namespace std;

main()
{
    int n,org,f;
    cout << "enter the number : ";
    cin>> n;
    org = n;
    f = factorial(n);
    cout<< org <<" factorial is "<<f;

}

int factorial(int n){
    int fact = 1;
    for (int i = 1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
