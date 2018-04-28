#include<iostream>
#include<stdio.h>
using namespace std;

template <class T>
int getLength(T& arry){
    return (sizeof(arry)/sizeof(arry[0]));
}

int main(void)
{
    int x[5];
    
    for(int i = 0;i<getLength(x);i++){
        cout<<"请输入ｘ:" << i << "的值:"<<endl;
        cin>>x[i];
    }
    for(int j = 0;j<getLength(x);j++){
        cout<<"你输入的ｘ的值为："<< x[j] << endl;
    }
  
    return 0;
}




