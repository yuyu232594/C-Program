#include<iostream>
#include "TestSortHelper.h"
using namespace std;

template<typename T>
void shellSort(T arr[],int n){
	int gap=1;
	while(gap<n/3){
		gap=3*gap+1;
	}
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

template<typename T>
void insertion_sort(T arr[],int n){
	for(int i=1;i<n;i++){
		T element=arr[i];
		int j;
		for(j=i;j>0&&arr[j-1]>element;j--)
			arr[j]=arr[j-1];
		arr[j]=element;
	}

}

template<typename T>
void selection_sort(T arr[],int n){
	for(int i=0;i<n;i++){
		int minIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minIndex])
				minIndex=j;
		}
		swap(arr[i],arr[minIndex]);
	}
}

int main(){
	int *arr1=TestSortHelper::generateRandomArray(1000,0,1000);
	int *arr2=TestSortHelper::generateRandomArray(1000,0,1000);
	int *arr3=TestSortHelper::generateRandomArray(1000,0,1000);
	TestSortHelper::testSort("selection_sort",selection_sort,arr1,100);
	TestSortHelper::testSort("insertion_sort",insertion_sort,arr2,100);
	TestSortHelper::testSort("shellSort",shellSort,arr3,100);
	return 0;
}