#include <iostream>
#include <algorithm>
#include "SortTestHelper.h"
#include "SelectionSort.h"

using namespace std;

template<typename T>
void insertionSort(T arr[], int n){
    for(int i=1;i<n;i++){
//        for(int j=i;j>0;j--){
//            if(arr[j]<arr[j-1])
//                swap(arr[j],arr[j-1]);
//            else
//                break;
//        }
        for(int j=i;j>0&&arr[j]<arr[j-1];j--){
            swap(arr[j],arr[j-1]);
        }
    }
}

int main(){
    int n=10000;
    int *arr = SortTestHelper::generateRandomArray(n,0,n);
    int *arr2 = SortTestHelper::copyIntArray(arr,n);

    SortTestHelper::testSort("Insertion Sort", insertionSort,arr,n);
    SortTestHelper::testSort("Seletion Sort", selectionSort,arr2,n);


    delete[] arr;
    delete[] arr2;

    return 0;
}

















