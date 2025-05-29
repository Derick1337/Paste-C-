#include <iostream>     // Include the iostream library for input/output operations                                 // Só funciona com strings

int main(){                 //fill()= a range-based for loop to fill an array with numbers
    // Function to fill an array with a range of numbers
    const int size = 100; // Define the size of the array //

    std::string arr[size];
    fill(arr, arr + (size/3), "cake"); // Fill the array with numbers from 1 to 100
    fill(arr + (size/3),arr + (size/3)*2, "pie"); // Fill the second half of the array with "pie"                           fill(begin, end, value) is a standard library function that fills a range with a specified value
    fill(arr + (size/3)*2,arr + size, "coconut"); // Fill the third half of the array with "coconut"                           fill(begin, end, value) is a standard library function that fills a range with a specified value
    for(std::string num : arr){
        std::cout << num << " "; // Print the filled array
    }

    return 0;
}