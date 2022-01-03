#include<iostream>
using namespace std;
int selection_sort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex=j;
			}
		}
		swap(arr[minIndex],arr[i]);
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
	cout<<"****************************Selection Sort Algorithm****************************"<<endl;
	cout<<"Enter Size of Array:-"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter Array Elements:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selection_sort(arr,n);
}
