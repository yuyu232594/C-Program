#include <iostream>
using namespace std;

template<typename T>
void common_bubble_sort(T arr[],int n){
	//先进行外面的排序即先确定轮数
	//注意内存循环下标的取值范围，一不小心可能就小于0了
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if (arr[j]>arr[j-1])
				swap(arr[j],arr[j-1]);
		}
	}

}


int main(){
	int arr[]={7,9,6,4,2,1,3,5,11,7};
	common_bubble_sort(arr,10);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}