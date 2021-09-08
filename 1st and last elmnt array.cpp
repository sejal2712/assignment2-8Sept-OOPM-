// Display the first and last element of array.
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
    cout<<"the first and last entered elements of array are : "<<endl;
    cout<<a[0]<<" and "<<a[n-1];

    return 0;
}
