// Program to reverse an array elements entered by user.
#include <iostream>
using namespace std;

int main()
{
    int a[10],n,i;
    cout<<"enetr the size of array : ";
    cin>>n;
    cout<<"enetr the "<<n<<" elements of array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the reversed elements of array are : "<<endl;
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
