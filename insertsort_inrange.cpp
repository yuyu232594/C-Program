#include<iostream>
using namespace std;

void insert_inrage(int arr[],int l,int r){
	for(int i=l+1;i<=r;i++){
		int temp=arr[i];
		for(int j=i;j>l;j--){
			if(arr[j-1]>temp)
				swap(arr[j],arr[j-1]);
			else{
				arr[j]=temp;
				break;
			}

		}
	}
}

int main(){
	int arr[]={88,79,23,66,14,57,91,38,99,34,45};
	insert_inrage(arr,3,7);
	int length=sizeof(arr)/sizeof(*arr);
	for(int i=0;i<length;i++){
		cout<<arr[i]<<endl;
	}
}