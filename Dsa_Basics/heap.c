#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int * arr, int n, int i) {
  while(1) {
    int largest = i; //first non leaf parent
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if(left < n && arr[largest] < arr[left]) //compare the left child with parent
      largest = left; //left < n is checked to see whether the node has a child or not
    if(right < n && arr[largest] < arr[right]) //compare the right child now with parent
      largest = right;

    if(largest == i) //parent is already the largest
      break;

    swap(&arr[largest], &arr[i]);
  }
}

int main() {
  int n;
  scanf("%d", &n);

  int * arr = (int *) malloc (n * sizeof(int));
  printf("enter the array:");
  for(int i = 0; i < n; i++)
    scanf("%d", arr+i);

  //heapify from the last parent node
  //n/2 - 1 will give the last parent node

  for(int i = n / 2 - 1; i >= 0; i--) 
    heapify(arr, n, i);

  printf("Max Heap: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  printf("\n");
  free(arr);
  return 0;
}


