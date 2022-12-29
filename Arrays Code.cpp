//Linta Ashfaq
//Data Science
#include<iostream>
using namespace std;
int main()
  {
  int sum, a; 
  int x[10];
cout<<"Enter 10 Elements of array";
for ( a=0;a<10;a++)
    {
	 cin>>x[a];
// Skipping value at index 3
     if(x[a]==3)
     continue;
// Skipping value at index 5
     if(x[a]==5)
     continue;
	  sum=sum+x[a];
 }     
    cout<<"Sum of Arrays= "<<sum<<endl;
 return 0;
}
