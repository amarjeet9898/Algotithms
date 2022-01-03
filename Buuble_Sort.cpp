#include<iostream>
using namespace std;
void Bubble_sort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	cout<<"Sorted Array:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<" "<<arr[i];
	}
}
int main()
{
	int n;
	cout<<"Enter Size Of Array:-"<<endl;
	cin>>n;
	cout<<"Enter Array Elements:-"<<endl;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Bubble_sort(arr,n);
}
