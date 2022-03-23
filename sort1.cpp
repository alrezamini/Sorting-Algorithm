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
    for(int i=0;i<7;i++){
        int key = i;
        int k=i+1;
        for(k;k<8;k++){
            if(a[k]<a[key]){key=k;}
        }
        swp(a,key,i);
    }
    prnt(a);
}
