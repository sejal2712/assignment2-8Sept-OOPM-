// Sort an array element in ascending and descending order.
#include <iostream>
using namespace std;

int main()
{
    int a[10],n,i,j,temp;
    cout<<"enetr the size of array : ";
    cin>>n;
    cout<<"enetr the "<<n<<" elements of array : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"the elements of array in ascending order are : "<<endl;
    
    for(i=0;i<(n-1);i++)
	{
	    for(j=(i+1);j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	        
	    }
	}
    
	for(i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"the elements of array in descending order :  "<<endl;

	for(i=n-1;i>=0;i--)
	{
		cout<<a[i]<<" ";
	}
    return 0;
}
