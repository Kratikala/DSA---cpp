# include <iostream>
using namespace std;
void InsertionSort (int arr[], int n){
    for (int i = 1; i < n ; i++){
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--){
            if (arr[j] > temp){
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
    int arr[5] = {4, 11, 7, 1, 9};
    InsertionSort(arr, 5);
    for(int i = 0; i < 5; i++)
{
    cout << arr[i] << " ";
}
    return 0;
}