#include<iostream>
using namespace std;

//考虑的是前闭后闭的区间
int partition(int arr[],int l,int r){
	int val=arr[l];
	int j=l;
	//i是当前考虑的元素
	for(int i=l+1;i<=r;i++){
		if(arr[i]<val){
			swap(arr[j+1],arr[i]);
			j++;
		}
	}
	swap(arr[j],arr[l]);
	return j;
}

void quick_sort(int arr[],int l,int r){
	if (l>=r)
		return;

	int p=partition(arr,l,r);
	quick_sort(arr,l,p-1);
	quick_sort(arr,p+1,r);
	
		
}

int main(){
	int arr[]={12,6,48,37,8,92,21,48,27};
	int length=sizeof(arr)/sizeof(*arr);
	quick_sort(arr,0,8);
	for(int i=0;i<length;i++){
		cout<<arr[i]<<endl;
	}
}