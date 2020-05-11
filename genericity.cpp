#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

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

int main(){
	int a[]={9,7,5,3,1,0,2,4,6,8};
	float b[]={3.3,8.8,5.5,7.7,1.1};
	string c[]={"a","d","b","p","h"};
	selection_sort(a,10);
	selection_sort(b,5);
	selection_sort(c,5);
	Student d[4]={{"sam",90},{"bobby",70},{"kitty",70},{"amy",80}};
	selection_sort(d,4);
	for (int i=0;i<4;i++)
		cout<<d[i]<<" ";
	cout<<endl;
	return 0;

}