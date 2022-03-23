#include <iostream>
using namespace std;

void prnt(int arr[]){
    for(int x=0;x<8;x++){cout<<arr[x]<<endl;}
}

int main()
{
    int a[8] = {5,9,2,3,1,0,10,4};
    short int len = sizeof(a) / sizeof(int);
    for(int x=1;x<len;x++){
        short int k = a[x];
        int l=x-1;
        for(l;l>=0;l--){
            if(a[l]>k){a[l+1]=a[l];}else{break;}
        }
        a[l+1]=k;
    }
    prnt(a);
}
