#include<iostream>
using namespace std;


void merge(int arr[],int l,int m,int r){
	int length=r-l+1;
	int *temp=new int[length];
	int i=l;
	int j=m+1;
	int k=0;
	while(i<=m&&j<=r){
		if(arr[i]<=arr[j])
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

//n代表的是元素的个数
void merge_du(int arr[],int n){
	for(int sz=1;sz<=n;sz+=sz){
		for(int j=0;j+sz<n;j+=sz+sz){
			merge(arr,j,j+sz-1,min(j+sz+sz-1,n-1));
		}
	}

}

int main(){
	int arr[]={0,1,3,5,7,9,2,4,6,8};
	int length=sizeof(arr)/sizeof(*arr);
	merge_du(arr,10);
	for(int i=0;i<length;i++){
		cout<<arr[i]<<endl;
	}

}