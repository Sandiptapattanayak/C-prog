//Inserting an element at 3rd index
#include<stdio.h>
int main()
{
    int arr[6]={10,20,30,40,50},i;
    for(i=5;i>=3;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[2]=101;

    for(i=0;i<=5;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
