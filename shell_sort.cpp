#include<iostream>
using namespace std;

template<typename T>
void shellSort(T arr[],int n){
	int gap=n/2;
	while(gap>=1){
		for(int i=gap;i<n;i++){
			T element=arr[i];
			int j;
			for(j=i;j>gap-1&&arr[j-gap]>element;j-=gap){
				arr[j]=arr[j-gap];
			}
			arr[j]=element;
		}
		gap=gap/2;
	}
	
}

int main(){
	int arr[]={1,35,72,7,33,2,28,6,29,11};
	shellSort(arr,10);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}