#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
        int p=0;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        for(int k=1;k<n-1;k++)
        {
            if(arr[k-1]<arr[k] && arr[k]>arr[k+1])
            p+=1;
        }
        cout<<"Case #"<<i+1<<": "<<p<<endl;
        
    }
    return 0;
}
