// BUBBLE SORT

# include <iostream>
using namespace std;
void bubble_sort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
}
int main(){
    int arr[5] = {8, 5, 7, 3, 2};
    bubble_sort(arr, 5);
    for(int i = 0; i  < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// INSERTION SORT

# include <iostream>
using namespace std;
void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    insertion_sort(arr, 7);
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// SELECTION SORT

# include <iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int minindex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}
int main(){
    int arr[5] = {64, 25, 12, 22, 11};
    selection_sort(arr, 5);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    return 0;
}