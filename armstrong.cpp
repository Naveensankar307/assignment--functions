#include<iostream>
//Check if a given no is armstrong no

#include<math.h>
int armstrong (int);
using namespace std;

main()
{
    int num,org,armnum;
    cout<<"enter the number to check : ";
    cin>>num;
    org = num;
    armnum = armstrong(num);

    if (armnum == org){
        cout<< org<<" is a armstrong number";
    }
    else{
        cout<< org<<" is not a armstrong number";
    }
}

int armstrong(int num){
    int n;
    int arm = 0;
    int len = 3;
    while(num!=0){
        n = num % 10;
        arm += pow(n,len);
        num = num/10;
    }
    return arm;
}