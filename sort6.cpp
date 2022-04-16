#include<iostream>
using namespace std;

void sort(int lst[],int stop){
    for(int x=1;x<stop;x++){
        int key=lst[x];
        int i=x-1;
        while(i>=0&&lst[i]>key){
            lst[i+1]=lst[i];
            i--;
        }
        lst[++i]=key;
    }
}

int ch_ascii(char c){
    int tmp=c;
    return tmp;
}

char ch_char(int c){
    char tmp=c;
    return tmp;
}

void print_char_list(int lst[],int start,int stop){
    for(start;start<stop;start++){cout<<ch_char(lst[start])<<" ";}
}

void print_list(int lst1[],int lst2[],int count,int ns,int as){
    sort(lst1,ns);sort(lst2,as);
    print_char_list(lst2,count,as);
    print_char_list(lst2,0,count);
    for(int x=0;x<ns;x++){cout<<lst1[x]<<" ";}
    cout<<endl;
}

int main(){
    int number_list[7]={21,12,2,0,1,56,20};
    char char_list[8]={'C','A','a','m','K','S','T','w'};
    int ascii_list[8];
    int count=0;
    for(int x=0;x<8;x++)
    {
        int asc=ch_ascii(char_list[x]);
        if(asc<97){count++;}
        ascii_list[x]=asc;
    }
    int numlst_length = sizeof(number_list)/sizeof(int);
    int asclst_length = sizeof(ascii_list)/sizeof(int);
    print_list(number_list,ascii_list,count,numlst_length,asclst_length);
}