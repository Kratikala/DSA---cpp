// 1D ARRAY

# include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Reverse an array

# include <iostream>
using namespace std;
int reverse(int arr[], int size){
    int start = 0;
    int end = size - 1;
    while(start < end){
        swap(start, end);
        start++;
        end--;
    }
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    reverse(arr, size);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// 2D ARRAY

# include <iostream>
using namespace std;
int main(){
    int arr[2][4] = {{1, 2, 3, 4},{5, 6, 7, 8}};
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// Saddle Point

# include <iostream>
using namespace std;
void saddle(int arr[][3], int rsize, int csize){
    bool found = false;
    for(int i = 0; i < rsize; i++){
        int smallest = arr[i][0];
        int column_no = 0;
        for(int j = 1; j < csize; j++){
            if(arr[i][j] < smallest){
                smallest = arr[i][j];
                column_no = j;
            }
        }
        int largest = arr[0][column_no];
        for(int k = 0; k < rsize; k++){
            if(arr[k][column_no] > largest){
                largest = arr[k][column_no];
            }
        }
        if(smallest == largest){
            cout << "SADDLE POINT : " << smallest << " ";
            found = true;
        }
    }
    if(!found){
        cout << "NO SADDLE POINT" << " ";
    }
}
int main(){
    int arr[][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rsize = 3;
    int csize = 3;
    saddle(arr, rsize, csize);
    return 0;
}

// Matrix Multiplication

# include <iostream>
using namespace std;
int multiplication(int arr1[][2], int arr2[][2], int rsize, int csize){
    for(int i = 0; i < rsize; i++){
        for(int j = 0; j < csize; j++){
            int result = 0;
            for(int k = 0; k < csize; k++){
                result += arr1[i][k] * arr2[k][j];
            }
            cout << result << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr1[][2] = {{1, 2},{3, 4}};
    int arr2[][2] = {{5, 6},{7, 8}};
    int rsize = 2;
    int csize = 2;
    multiplication(arr1, arr2, rsize, csize);
    return 0;
}

// Spiral Traversal

# include <iostream>
using namespace std;
int spiral(int arr[][3], int rsize, int csize){
    int top = 0;
    int bottom = rsize - 1;
    int left = 0;
    int right = csize - 1;

    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            cout << arr[top][i] << " ";
        }
        top ++;

        for (int j = top; j <= bottom; j++){
            cout << arr[j][right] << " ";
        }
        right--;
        
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                cout << arr[bottom][i] << " ";
            }
            bottom --;
        }
        
        if(left <= right){
            for(int j = bottom; j >= top; j--){
                cout << arr[j][left] << " ";
            }
            left ++;
        }
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    spiral(arr, 3, 3);
    return 0;
}