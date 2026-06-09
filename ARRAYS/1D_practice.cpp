// Populate an array with multiple of 10

# include <iostream>
using namespace std;
int multiple_of_10(int arr[], int size){
    int count = 1;
    for (int index = 0; index <= 9; index++){
        arr[index] = count * 10;
        count ++;
    }
    
    for(int index = 0; index < size; index++){
        cout << arr[index] << " ";
    }
    cout << endl; 
}
int main(){
    int arr[10];
    int size = 10;
    multiple_of_10(arr, size);
    return 0;
}

// Initialise an array with -1 in each block

# include <iostream>
using namespace std;
void initialize_array(int arr[], int size){
    for (int i = 0; i <= size - 1; i++){
        arr[i] = -1;
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10];
    int size = 10;
    initialize_array(arr, size);
    return 0;
}

// Function to reverse an array

# include <iostream>
using namespace std;
void reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    reverse(arr, size);
    for (int i = 0; i < size - 1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}


// Flip 1 to 0 and 0 to 1 in an array

# include <iostream>
using namespace std;
void flip(int arr[], int size){
    for (int i = 0; i < size; i++){
        if (arr[i] == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    
    }
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[6] = {1, 0, 0, 1, 1, 0};
    int size = 6;
    flip(arr, size);
    return 0;
}

// Find the largest element in an array

# include <iostream>
using namespace std;
void largest(int arr[], int size){
    int largest = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] > largest){
            largest = arr[i];
        }    
    }
    cout << "Largest is :" << largest << endl;
}
int main(){
    int arr[] = {10, 5, 9, 20, 5, 1};
    int size = 6;
    largest(arr, size);
}

// Find the smallest element in an array

# include <iostream>
using namespace std;
void smallest(int arr[], int size){
    int smallest = arr[0];
    for (int i = 1; i < size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        }
    }
    cout << "Smallest is :" << smallest << " ";
}
int main(){
    int arr[] = {10, 5, 9, 20, 5, 1};
    int size = 6;
    smallest(arr, size);
}

// Sum of all elements

# include <iostream>
using namespace std;
void sum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    cout << "Sum is :" << sum << " ";
}
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    sum(arr, size);
}

// Count even and odd numbers

# include <iostream>
using namespace std;
void even_odd( int arr[], int size){
    int count_even = 0;
    int count_odd = 0;
    for( int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            count_even ++;
        }
        else{
            count_odd++;
        }
    }
    cout << "Even :" << count_even << endl << "Odd :" << count_odd << endl;
}
int main(){
    int arr[6] = {2, 3, 4, 5, 6, 7};
    int size = 6;
    even_odd(arr, size);
    return 0;
}

// Linear Search

# include <iostream>
using namespace std;
int linear_search( int arr[], int size){
    int search = 30;
    bool found = false;
    for ( int index = 0; index < size; index++){
        if (arr[index] == search){
            cout << "The element is at index : " << index << endl;
            found = true;
            break;
        }           
    }
    if (!found){
            cout << "Not Found" << endl;
        }   
}
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    linear_search(arr, size);
    return 0;
}

// Second Largest Element

# include <iostream>
using namespace std;
int second_largest(int arr[], int size){
    int largest = arr[0];
    int secondlargest = arr[1];
    for (int i = 0; i < size; i++){
        if ( arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest){
            secondlargest = arr[i];
        }
    }
    cout << secondlargest << endl;
}  
int main(){
    int arr[5] = {10, 5, 60, 50, 55};
    int size = 5;
    second_largest(arr, size);
    return 0;
}

// Check if an array is sorted

# include <iostream>
using namespace std;
void sort(int arr[], int size){
    bool isSorted = true;
    for (int i = 0; i < size; i++){
        if (arr[i] > arr[i+1]){
            isSorted = false;
            break;
        } 
    }
    if (isSorted){
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
}
int main(){
    int arr[5] = {1, 3, 2, 4, 5};
    int size = 5;
    sort(arr, size);
    return 0;
}

// Count positive, negative, and zero elements

# include <iostream>
using namespace std;
void pnz(int arr[], int size){
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for ( int i = 0; i < size; i++){
        if (arr[i] > 0){
            positive++;
        }
        else if (arr[i] < 0){
            negative++;
        }
        else{
            zero++;
        }
    } 
    cout << "Positive : " << positive << endl << "Negative : " << negative << endl << "Zero : " << zero << endl;
}
int main(){
    int arr[7] = {1, 0, -6, -2, 0, 3, 4};
    int size = 7;
    pnz(arr, size);
    return 0;
}

// Find the frequency of a number

# include <iostream>
using namespace std;
int count = 0;
void frequency(int arr[], int size, int value){
    for ( int i = 0; i < size; i++){
        if (arr[i] == value){
        count++;
        }
    }
    cout << "Frequency is : " << count << " ";
}
int main(){
    int arr[6] = {1, 1, 3, 5, 6, 1};
    int size = 6;
    int value;
    cout << "Enter number to find frequency: ";
    cin >> value;
    frequency(arr, size, value);
    return 0;
}
