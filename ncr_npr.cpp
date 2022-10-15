//program to find nCr and nPr

#include<iostream>
int permutation(int,int);
int combination(int,int);
using namespace std;

int main(){
    int n,r;
    cout<< "enter the number of items - n : ";
    cin>>n;
    cout<< "enter the items takens at a time - r : ";
    cin>>r;
    int res1 = permutation(n,r);
    int res2 = combination(n,r);
    cout<< "permutation is : "<<res1<<endl;
    cout<< "combination is : "<<res2;

}

int permutation(int n,int r){
    int per,i;
    int nfact = 1;
    int nrfact = 1;
    for (i=1;i<=n;i++){
        nfact*=i;
    }
    for(i=1;i<=n-r;i++){
        nrfact*=i;
    }

    per = nfact/nrfact;
    return per;

}

int combination(int n,int r){
    int comb,i;
    int nfact = 1;
    int rfact = 1;
    int nrfact = 1;
    for (i=1;i<=n;i++){
        nfact*=i;
    }
    for(i=1;i<=n-r;i++){
        nrfact*=i;
    }
    for(i=1;i<=r;i++){
        rfact*=i;
    }

    comb = nfact/rfact*nrfact;
    return comb;
}