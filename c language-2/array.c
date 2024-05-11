// #include<stdio.h>
// int main()
// {
// int arry[3]={1,2,3};
//     printf("%d\n",arry[1]);

// }
// #include<stdio.h>
// int main()
// {
// int arry[3]={1,2,3};
// for(int i=0;i<3;i++)
// {
//     printf("%d\n",arry[i]);
// }

// }

#include<iostream>
using namespace std;

int main()
{
    int arry[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    cout<<"enter a number";
    cin>>n;
    for(int i=0;i<10;i++){
       cout<<i*n;
    }

}