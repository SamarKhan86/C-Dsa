#include <stdio.h>
void display(int arr[], int n){
	for(int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void indDeletion(int arr[], int index, int size){
	for(int i = index; i < size-1; i++)
		arr[i] = arr[i+1];
}

int main(){
	int arr[100] = {1, 3, 5 , 68, 7};
	int index = 3, size = 5;
	printf("Array before deletion: \n");
	display(arr, size);
	indDeletion(arr, index, size);
	printf("Array after deletion: \n");
	size-=1;
	display(arr, size);
	return 0;
}
