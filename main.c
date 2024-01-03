//Bubble Short //Bubble Short
//Bubble Short //Bubble Short

#include <stdio.h>
void bubble_sort(int *array, int size) {
  int swapped = 1;
  while (swapped) {
    swapped = 0;
    for (int i = 0; i < size - 1; i++) {
      if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }
  }
}

int main() {
  int array[] = {90, 80, 30, 70, 20, 10};
  int size = sizeof(array) / sizeof(array[0]);

  bubble_sort(array, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}

//Right Shift   //Right Shift
//Right Shift   //Right Shift
#include <stdio.h>

void rotateRight(int source[], int k, int size) {
int temp[k];
for (int i = 0; i < k; i++) {
temp[i] = source[size - k + i];
}

for (int i = size - 1; i >= k; i--) {
source[i] = source[i - k];
}

for (int i = 0; i < k; i++) {
source[i] = temp[i];
}
}
int main() {
int source[] = {10, 20, 30, 40, 50, 60};
int k = 3;
int size = sizeof(source) / sizeof(source[0]);

rotateRight(source, k, size);

printf("[ ");
for (int i = 0; i < size; i++) {
printf("%d", source[i]);
if (i < size - 1) {
printf(", ");
}
}
printf(" ]\n");

return 0;
}

//Selection Slot  //Selection Slot
#include <stdio.h>

void selection_sort(int *array, int size) {
  for (int i = 0; i < size - 1; i++) {
    int min = i;
    for (int j = i + 1; j < size; j++) {
      if (array[j] < array[min]) {
        min = j;
      }
    }

    int temp = array[i];
    array[i] = array[min];
    array[min] = temp;
  }
}

int main() {
  int array[] = {90, 80, 30, 70, 20, 10};
  int size = sizeof(array) / sizeof(array[0]);

  selection_sort(array, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}

//Shift Right K Cell  //Shift Right K Cell
//Shift Right K Cell  //Shift Right K Cell
#include <stdio.h>

void shiftRight(int source[], int k, int size) {
for (int i = size - 1; i >= k; i--) {
source[i] = source[i - k];
}

for (int i = 0; i < k; i++) {
source[i] = 0;
}
}

int main() {
int source[] = {10, 20, 30, 40, 50, 60};
int k = 3;
int size = sizeof(source) / sizeof(source[0]);

shiftRight(source, k, size);

printf("[ ");
for (int i = 0; i < size; i++) {
printf("%d", source[i]);
if (i < size - 1) {
printf(", ");
}
}
printf(" ]\n");

return 0;
}

//Shift Left K Cell  //Shift Left K Cell
//Shift Left K Cell  //Shift Left K Cell

#include<stdio.h>
int main(){
printf("[");
int n=6;
int arr[]={10, 20, 30, 40, 50, 60};
for(int j=0; j<3; j++){

    int f=0;
    int s=f+1;
    for (int i=0;i<n; i++){
        arr [f]=arr[s];
        f=f+1%n;
        s=f+1%n;
    }
arr[n-1]=0;

}
for(int i=0; i<n; i++){

    printf("%d\t",arr[i]);}
printf("]");
}


