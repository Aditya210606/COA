#include<stdio.h>
void insertionSort(int arr[], int size);


int main(){
    
    int arr[] = {30,10,50,20,40};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("\nBefore Sorting: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        }

    insertionSort(arr, size);

    printf("\n\nAfter Sorting: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        }


    return 0;
}


void insertionSort(int arr[], int size){
    for(int curr = 1; curr < size; curr++){
        int prev = curr - 1;
        int key = arr[curr];
        while (prev >= 0 && arr[prev] > key)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = key;
        
    }

    

}