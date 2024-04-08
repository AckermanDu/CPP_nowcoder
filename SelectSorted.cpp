#include <iostream>
using namespace std;

int main(){

    int arr[6]={0};
    int i=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++)
    {
        cin>>arr[i];
    }

    int fmin=0;
    int j=0;
    int temp=0;
    for(i=0;i<len-1;i++)
    {
        for(j=i;j<len;j++)
        {
            if(j==i) 
            {
                fmin=j;
            }
            else{
                if(arr[j]<arr[fmin]) {
                    fmin=j;
                }
            }
        }
        temp=arr[i];
        arr[i]=arr[fmin];
        arr[fmin]=temp;
    }
    for(i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}