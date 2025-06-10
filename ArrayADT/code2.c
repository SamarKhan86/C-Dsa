#include <stdio.h>
void display(int arr[], int size){
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int indInsertion(int arr[], int size, int index, int element, int capacity){
	if(size >= capacity)
		return -1;

	for(int i = size-1; i >= index; i--){
		arr[i+1] = arr[i];
	}
	arr[index] = element;
	return 1;
}

int main(){
	int arr[100] = {2, 5, 6, 9, 80};
	int size = 5, element = 40, index = 3;
	printf("The array before insertion- \n");
	display(arr, size);
	int result = indInsertion(arr, size, index, element, 100); //100 here is the capacity of the array
	if(result == 1)
		printf("Element was inserted Successfully.\n");
	else
		printf("Insertion failed\n");
	size+= 1;
	printf("The array after insertion- \n");
	display(arr, size);
	return 0;
}
