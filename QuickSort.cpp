#include<iostream>
using namespace std;

class QuickSort{
    private:int *array;int size;
    public:QuickSort(int arr[],int sz){array=arr;size=sz-1;Sort(0,size);}
    int Partition(int,int);
    void Swap(int,int);
    void Sort(int,int);
    void PrintArray();
};


int main(){
    int array[10]={90,32,20,1,2,85,33,9,8,7};
    int array_size=sizeof(array)/sizeof(int);
    QuickSort obj(array,array_size);
    obj.PrintArray();
}

void QuickSort::Sort(int low,int high){
    if(low<high){
        int q = Partition(low,high);
        Sort(low,q-1);
        Sort(q+1,high);
    }
}

int QuickSort::Partition(int low,int high){
    int pivot=array[high];
    int min=low-1;
    for(int x=low;x<=high-1;x++){
        if(array[x]<pivot){
            ++min;
            Swap(x,min);
        }
    }
    ++min;
    Swap(min,high);
    return min;
}

void QuickSort::Swap(int n,int t){
    int temp=array[n];
    array[n]=array[t];
    array[t]=temp;
}


void QuickSort::PrintArray(){
    for(int i=0;i<=size;i++){
        cout<<array[i]<<"  ";
    }
    cout<<endl;
}