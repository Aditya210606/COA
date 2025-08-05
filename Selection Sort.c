#include<stdio.h>
void selectionSort(int arr[], int size);


int main(){
    
    int arr[] = {30,10,50,20,40};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("\nBefore Sorting: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        }

    selectionSort(arr, size);

    printf("\n\nAfter Sorting: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        }


    return 0;
}


void selectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int min_idx = i;
        int min_Val = arr[i];
        for (int j = i + 1; j < size; j++)
        {
             
            if(arr[j] < min_Val){
                min_idx = j;
                min_Val = arr[j];
            }
        }
        arr[min_idx] = arr[i];
        arr[i] = min_Val;
        
        

    }
    
}