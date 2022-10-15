//find sum of numbers between lower_limit and upper_limit expect the numbers divisible by 3 and 5. Ex: Sum of numbers between 100 and 200 101 + 103 + 104 + 106 + 107 + .............. + 199

#include<iostream>
int sum_func(int,int);
using namespace std;

int main(){
    int m,n;
    cout<< "enter the upper limit : ";
    cin>>m;
    cout<< "enter the lower limit : ";
    cin>>n;
    int res = sum_func(m,n);
    cout<<"the sum is : "<<res;
}

int sum_func(int m,int n){
    int i,sum = 0;
    for (i = m;i<=n;i++){
        if( i%3!=0 && i%5 !=0){
            sum+=i;
            // cout<<i<<endl;
        }
    }
    return sum;
}