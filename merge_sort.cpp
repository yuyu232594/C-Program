#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
	int length=r-l+1;
	int *temp=new int[length];
	int i=l;
	int j=m+1;
	int k=0;
	while(i<=m&&j<=r){
		if(arr[i]<arr[j])
			temp[k++]=arr[i++];
		else
			temp[k++]=arr[j++];
	}
	while(i<=m) temp[k++]=arr[i++];
	while(j<=r) temp[k++]=arr[j++];

	for(int p=l;p<=r;p++){
		arr[p]=temp[p-l];
	}
	
}
void merge_sort(int arr[],int start,int end){
	if(start>=end)
		return;
	else{
		int mid=(start+end)/2;
		merge_sort(arr,start,mid);
		merge_sort(arr,mid+1,end);
		if(arr[mid]>arr[mid+1])
			merge(arr,start,mid,end);
	}
	
		
}

int main(){
	int arr[]={1,3,5,7,9,2,4,6,8,0};
	int length=sizeof(arr)/sizeof(*arr);
	merge_sort(arr,0,9);
	for(int i=0;i<length;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
	
}
