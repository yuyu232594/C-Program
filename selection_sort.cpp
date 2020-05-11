#include <iostream>
using namespace std;

//选择排序的关键就是默认当前的i位置为最小值，找到i+1位置到n位置的最小值的下标，最后将下标返回，再交换位置

void selection_sort(int a[],int n){
	for (int i=0;i<n;i++){
		int minIndex=i;
		for (int j=i+1;j<n;j++){
			if (a[j]<a[minIndex])
				minIndex=j;
		}
		swap(a[i],a[minIndex]);
	}
}
int main(){
	int a[]={13,7,5,2,8,6,34,4,10,3};
	selection_sort(a,10);
	for (int i=0;i<10;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}