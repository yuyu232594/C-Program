#include<iostream>
#include "TestSortHelper.h"
using namespace std;

template<typename T>

void insertion_sort(T arr[],int n){
	//插入排序的思想是寻找第i个元素合适的插入位置
	for(int i=1;i<n;i++){
		for (int j=i;j>0;j--)
			if (arr[j]<arr[j-1])
				swap(arr[j],arr[j-1]);
			else break;
	}
}

template<typename T>
void selection_sort(T a[],int n){
	for (int i=0;i<n;i++){
		int minIndex=i;
		for (int j=i+1;j<n;j++){
			if(a[j]<a[minIndex])
				minIndex=j;
		}
		swap(a[i],a[minIndex]);
	}
}

template<typename T>
void improve_insertion_sort(T arr[],int n){
	//插入排序的思想是寻找第i个元素合适的插入位置
	for(int i=1;i<n;i++){
		T element=arr[i];
		int j;
		for(j=i;j>0;j--){
			if(arr[j-1]>element)
				arr[j]=arr[j-1];
			else
				break;
		}
		arr[j]=element;
	}
}

int main(){
	int *arr1=TestSortHelper::generateRandomArray(100,0,1000);
	int *arr2=TestSortHelper::generateRandomArray(100,10,1500);
	TestSortHelper::testSort("selection_sort",selection_sort,arr1,100);
	TestSortHelper::testSort("improve_insertion_sort",improve_insertion_sort,arr2,100);
	return 0;

}