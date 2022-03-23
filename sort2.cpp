#include <iostream>
using namespace std;

void prnt(int arr[]){
    for(int x=0;x<8;x++){cout<<arr[x]<<endl;}
}

void swp(int a[],int k,int i){
    int temp = a[k];
    a[k]=a[i];
    a[i]=temp;
}

int main()
{
    int a[8] = {5,9,2,3,1,0,10,4};
    for(int i=7;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(a[j]>a[j+1]){swp(a,j,j+1);}
        }
    }
    prnt(a);
}
