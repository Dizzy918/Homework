#include<stdio.h>

#define DEBUG

void sorting_array(int array[],int size){
    int sum = 0;
    for(int i = 0; i < size - i; i++){
        for(int j = 0;j < size - i - 1;j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i = 1;i < size;i++){
        if(i % 3 == 0)
            sum += array[i];
    }
    #ifdef DEBUG

    #endif
    printf("Sum of the indexes that substract to 0 with 3: %d",sum);
}

int main(){

    int array[7] = {1, 5, 7, 9, 4, 10, 8};
    int size = 7;

    sorting_array(array, size);
   
    return 0;
}