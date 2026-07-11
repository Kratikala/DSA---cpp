// In reference pass no copy of the variable is made
// In pass value copy of the variable is created

// Pass by reference
# include <iostream>
using namespace std;
void counteven (int arr[], int size, int &count){
    for(int index = 0; index < size; index++){
        if(index % 2 == 0 ){
            count ++;
        }
    }
}
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int count = 0;
    counteven(arr, size, count);
    cout << count;
    return 0;
}

// Pass by value
# include <iostream>
using namespace std;
void count_even (int arr[], int size, int count){
    for(int index = 0; index < size; index++){
        if(index % 2 == 0 ){
            count ++;
        }
    }
}
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    int count = 0;
    count_even(arr, size, count);
    cout << count;
    return 0;
}

