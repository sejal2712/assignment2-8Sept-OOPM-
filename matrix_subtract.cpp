//Program to subtract two matrices using array.
#include <iostream>

using namespace std;

int main()
{
  int n,m,i,j;
  cout<<"enter the no. of row of array ";
  cin>>m;
  cout<<"enter the no. of column of array ";
  cin>>n;
  int A[m][n];
  int B[m][n];
  int sub[m][n];
  
  cout<<"enter the elements of array A ";
  for(i=0 ; i<m ; i++){
  for(j=0 ; j<n ; j++)
  {
      cin>>A[i][j];
  }
  } 
  cout<<"enter the elements of array B ";
  for(i=0 ; i<m ; i++){
  for(j=0 ; j<n ; j++)
  {
      cin>>B[i][j];
  }
  }
  cout<<"array A is = "<<endl;
  for(i=0 ; i<m ; i++){
  for(j=0 ; j<n ; j++)
  {
      cout<<A[i][j]<<" ";
  }
  cout<<endl;
  }
  cout<<"array B is = "<<endl;
  for(i=0 ; i<m ; i++){
  for(j=0 ; j<n ; j++)
  {
      cout<<B[i][j]<<" ";
  }
  cout<<endl;
  }
  //subtraction
  for(i=0 ; i<m ; i++){
  for(j=0 ; j<n ; j++){
  sub[i][j]=A[i][j]-B[i][j];
  }
  }
  cout<<"subtraction = "<<endl;
  for(i=0 ; i<m ; i++){
  for(j=0 ; j<n ; j++)
  {
      cout<<sub[i][j]<<" ";
  }
  cout<<endl;
  }
  
    return 0;
}
