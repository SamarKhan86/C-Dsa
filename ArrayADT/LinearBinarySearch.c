#include <stdio.h>
int linearSearch(int arr[], int size, int element){
	for(int i = 0; i < size; i++){
		if(arr[i] == element)
			return i;
	}
	return -1;
}

int binarySearch(int arr[], int size, int element){
	int mid, high = arr[size-1], low = 0;
	while(low <= high){
		mid = (low+high)/2;
		if(arr[mid] == element)
			return mid;
		if(arr[mid] < element)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

int main(){
	int arr[100] = {10, 20, 40, 70, 50, 90, 100, 110, 120, 130};
	int size = sizeof(arr)/sizeof(int), element = 50;
	int searchIndex = linearSearch(arr, size, element);
	printf("The element %d was found at index %d\n", element, searchIndex);
	return 0;
}
