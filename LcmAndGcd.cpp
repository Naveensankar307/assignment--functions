// program to find GCD and LCM of 2 numbers

#include<iostream>
int Gcd(int,int);
int Lcm(int,int);
using namespace std;

int main(){
    int n1,n2;
    cout<<"enter the two numbers : " ;
    cin>>n1>>n2;
    int res1 = Gcd(n1,n2);
    int res2 = Lcm(n1,n2);
    cout<<"GCD for the two numbers is : "<<res1<<endl;
    cout<<"LCM for the two numbers is : "<<res2;
    
}

int Gcd(int n1,int n2){
    int gcd,i;
    for (i=1; i<=n1 && i<=n2 ;i++){
        if( n1%i == 0 && n2%i == 0){
            gcd = i;
        }
    }
    return gcd;
}

int Lcm(int n1,int n2){
    int lcm ;
    int div = Gcd(n1,n2);
    lcm = n1*n2/div;
    return lcm;
}