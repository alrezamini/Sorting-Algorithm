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
    short int len = sizeof(a) / sizeof(int);
    for(int i=0;i<len;i++){
        while(i>0&&a[i]<a[i-1]){
            swp(a,i,i-1);
            i--;
        }
    }
    prnt(a);
}
