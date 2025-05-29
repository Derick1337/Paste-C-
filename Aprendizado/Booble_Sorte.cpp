#include <iostream>

void sortarray(int array[], int size){

    int temp;
    for(int i = 0; i < size - 1; i++){              // Loop through the array
        for(int j = 0; j < size - 1; j++){          // Loop through the array
            if(array[j] < array[j + 1]){ // Change to '>' for ascending order
                // Swap the elements
                temp = array[j];            // Store the current element in temp
                array[j] = array[j + 1];        // Swap the current element with the next element
                array[j + 1] = temp;    // Assign the value in temp to the next element     
            }
        }
    }
}

int main(){

    int array[] ={10,1,3,2,4,5,9,6,7,8};
    int size = sizeof(array) / sizeof(array[0]);

    sortarray(array, size);

    for(int elemento : array){
        std::cout << elemento << " ";
    }



    return 0;
}