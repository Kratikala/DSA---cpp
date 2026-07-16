// Print All Elements of a Matrix 

# include <iostream>
using namespace std;
void PrintArray(int arr[][3], int rowSize, int colSize){
    for (int row_index = 0; row_index < rowSize; row_index++){
        for (int col_index = 0; col_index < colSize; col_index++){
            cout << arr[row_index][col_index] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rowSize = 3;
    int colSize = 3;
    PrintArray(arr, rowSize, colSize);
    return 0;
}

// 2. Sum of All Elements 

# include <iostream>
using namespace std;
void sum (int arr[][3], int rSize, int cSize){
    int sum = 0;
    for(int i = 0; i < rSize; i++){
        for(int j = 0; j < cSize; j++){
            sum = sum + arr[i][j];
        }
    }
    cout << "Sum is : " << sum << " ";
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    sum(arr, rSize, cSize);
    return 0;
}

// 3. Count Even and Odd Elements 

# include <iostream>
using namespace std;
void even_odd ( int arr[][3], int rSize, int cSize){
    int count_even = 0;
    int count_odd = 0;
    for (int i = 0; i < rSize; i++){
        for (int j = 0; j < cSize; j++){
            if (arr[i][j] % 2 == 0){
                count_even++;
            }
            else{
                count_odd++;
            }
        }
    }
    cout << "Even no. are : " << count_even << endl << "Odd numbers are : " << count_odd << endl;
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    even_odd(arr, rSize, cSize);
    return 0;
}

// 4. Find Largest Element 

# include <iostream>
using namespace std;
void largest (int arr[][3], int rSize, int cSize){
    int largest = arr[0][0];
    for( int i = 0; i < rSize; i++){
        for (int j = 0; j < cSize; j++){
            if (arr[i][j] > largest){
                largest = arr[i][j];
            }
        }
    }
    cout << "Largest element is : " << largest << " ";
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 20, 6},{7, 19, 9}};
    int rSize = 3;
    int cSize = 3;
    largest(arr, rSize, cSize);
    return 0;
}

// 5. Find Smallest Element 

# include <iostream>
using namespace std;
void smallest(int arr[][3], int rSize, int cSize){
    int smallest = arr[0][0];
    for (int i = 0; i < rSize; i++){
        for ( int j = 0; j < cSize; j++){
            if (arr[i][j] < smallest){
                smallest = arr[i][j];
            } 
        }
    }
    cout << "Smallest is : " << smallest << " ";
}
int main(){
    int arr[3][3] = {{1, 20, 3},{4, 15, 6},{0, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    smallest(arr, rSize, cSize);
    return 0;
}

// 6. Row-wise Sum 

# include <iostream>
using namespace std;
void row_sum(int arr[][3], int rSize, int cSize){
    for( int i = 0; i < rSize; i++){
        int rowsum = 0; // reset for each row
        for( int j = 0; j < cSize; j++){  
            rowsum = rowsum + arr[i][j];        
        }
        cout << "Sum of row " << i + 1 << " : " << rowsum << endl;
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    row_sum(arr, rSize, cSize);
    return 0;
}

// 7. Column-wise Sum 

# include <iostream>
using namespace std;
void col_sum( int arr[][3], int rSize, int cSize){
    for ( int j = 0; j < cSize; j++){
        int colsum = 0;
        for ( int i = 0; i < rSize; i++){
            colsum += arr[i][j];       
        }
        cout << "Sum of column " << j + 1 << " : " << colsum << endl;
    } 
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    col_sum(arr, rSize, cSize);
    return 0;
}

// 8. Search an Element in Matrix 

# include <iostream>
using namespace std;
void search (int arr[][3], int rSize, int cSize, int target){
    bool found = false;
    for (int i = 0; i < rSize; i++){
        for (int j = 0; j < cSize; j++){
            if (arr[i][j] == target){
                cout << "Element found at row " << i << " and at column " << j << " ";
                found = true;
                break;
            }
        }
    }
    if (!found){
            cout << "Not found" << endl;
        }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    int target;
    cout << "Enter the element to search : " << " ";
    cin >> target;
    search(arr, rSize, cSize, target);
    return 0;
}

// 9. Count Positive, Negative and Zero 

# include <iostream>
using namespace std;
int pnz ( int arr[][3], int rSize, int cSize){
    int count_positive = 0;
    int count_negative = 0;
    int count_zero = 0;
    for ( int i = 0; i < rSize; i++){
        for ( int j = 0; j < cSize; j++){
            if (arr[i][j] > 0){
                count_positive++;
            }
            else if (arr[i][j] < 0){
                count_negative++;
            }
            else{
                count_zero++;
            }
        }
    }
    cout << "Positive elements are : " << count_positive << endl << "Negative elements are : " << count_negative << endl << "Zeros are : " << count_zero << endl;
}
int main(){
    int arr[3][3] = {{-1, 0, 3},{4, -5, 6},{0, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    pnz(arr, rSize, cSize);
    return 0;
}

// Print Main Diagonal 

# include <iostream>
using namespace std;
void diagonal( int arr[][3], int rSize, int cSize){
    cout << "The diagonal elements are : " << " ";
    for (int i = 0; i < rSize; i++){
        for ( int j = 0; j < cSize; j++){
            if ( i == j ){
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    diagonal(arr, rSize, cSize);
    return 0;
}

 // - - - - - - - - - - - - - - with one loop

 # include <iostream>
using namespace std;
void diagonal( int arr[][3], int rSize){
    cout << "The diagonal elements are : " << " ";
    for (int i = 0; i < rSize; i++){
                cout << arr[i][i] << " ";
        }
    }
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    diagonal(arr, rSize);
    return 0;
}

// Print Secondary Diagonal 

# include <iostream>
using namespace std;
void second_diagonal(int arr[][3], int rSize, int cSize){
    cout << "Secondary diagonals are : " << " ";
    for ( int i = 0; i < rSize; i++){
        for (int j = 0; j < cSize; j++){
            if ( i + j == 2){
                cout << arr[i][j] << " ";
            }
        }
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    second_diagonal(arr, rSize, cSize);
    return 0;
}

// Find Largest Row Sum 

# include <iostream>
using namespace std;
void largest_rowsum(int arr[][3], int rSize, int cSize){
    int largest_rowsum = 0;
    int rownumber = 0;
    for (int i = 0; i < rSize; i++){
        int rowsum = 0;
        for(int j = 0; j < cSize; j++){
            rowsum += arr[i][j]; 
        }
        cout << "Sum of row " << i + 1 << " : " << rowsum << endl;
        if ( largest_rowsum < rowsum){
                largest_rowsum = rowsum;
                rownumber = i + 1;
            }
    }
    cout << "The largest rowsum is " << largest_rowsum << endl;
    cout << "Row number is " << rownumber << endl;
}
int main(){
    int arr[3][3] = {{1, 2, 3},{40, 50, 60},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    largest_rowsum(arr, rSize, cSize);
    return 0;
}

// Find Largest Column Sum 

# include <iostream>
using namespace std;
void largest_colsum( int arr[][3], int rSize, int cSize){
    int largest_colsum = 0;
    int colnumber = 0;
    for (int j = 0; j < cSize; j++){
        int colsum = 0;
        for (int i = 0; i < rSize; i++){
            colsum += arr[i][j];
        }
        cout << "Sum of columns " << j + 1 << " : " << colsum << endl;
        if (largest_colsum < colsum){
            largest_colsum = colsum;
            colnumber = j + 1;
        }
    }
    cout << "The largest colsum is : " << largest_colsum << endl;
    cout << "Column number is : " << colnumber << endl;
}
int main(){
    int arr[3][3] = {{1, 2, 3},{40, 50, 60},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    largest_colsum(arr, rSize, cSize);
    return 0;
}

// Check if Matrix is Identity Matrix 

# include <iostream>
using namespace std;
void identity (int arr[][3], int rSize, int cSize){
    bool identity = true;
    for (int i = 0; i < rSize; i++){
        for (int j = 0; j < cSize; j++){
            if (i == j && arr[i][j] != 1){
                identity = false;
            } 
            if (i != j && arr[i][j] != 0){
                identity = false;
            }
        }
    }
    if (identity){
            cout << "It is identity matrix" << endl;
        }
        else{
            cout << "It is not identity matrix" << endl;
        }
}
int main(){
    int arr[3][3] = {{1, 0, 0},{0, 1, 0},{0, 0, 1}};
    int rSize = 3;
    int cSize = 3;
    identity(arr, rSize, cSize);
    return 0;
}

// Matrix Transpose 

# include <iostream>
using namespace std;
int transpose (int arr[][3], int rSize, int cSize){
    cout << "Original Matrix : " << endl;
    for (int i = 0; i < rSize; i++){
        for (int j = 0; j < cSize; j++){
             cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose Matrix : " << endl;
    for (int i = 0; i < rSize; i++){
        for (int j = 0; j < cSize; j++){
             cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    transpose(arr, rSize, cSize);
    return 0;
}

// Count Frequency of a Number in Matrix 

# include <iostream>
using namespace std;
int frequency(int arr[][3], int rSize, int cSize, int target){
    int count = 0;
    for (int i = 0; i < rSize; i++){
        for (int j = 0; j < cSize; j++){
            if (arr[i][j] == target){
                count++;
            }
        }
    }
    cout << "Frequency : " << count << " ";
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 2, 6},{7, 8, 2}};
    int target;
    cout << "Enter the target value : " << " ";
    cin >> target;
    int rSize = 3;
    int cSize = 3;
    frequency(arr, rSize, cSize, target);
    return 0;
}

// 7. Check if Matrix is Symmetric 

# include <iostream>
using namespace std;
int symmetric(int arr[][3], int rSize, int cSize){
    bool symmetric = true;
    for (int i = 0; i< rSize; i++){
        for (int j = 0; j < cSize; j++){
            if (arr[i][j] != arr[j][i]){
                symmetric = false;
            } 
        }
    }
    if (symmetric){
        cout << "SYMMETRIC" << endl;
    }
    else{
        cout << "NOT SYMMETRIC" << endl;
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    symmetric(arr, rSize, cSize);
    return 0;
}

// Find Saddle Point 

# include <iostream>
using namespace std;
void saddle(int arr[][3], int rsize, int csize){
    bool found = false;
    for ( int i = 0; i < rsize; i++){
        int smallest = arr[i][0];
        int columnno = 0;       
        for ( int j = 1; j < csize; j++){
            if (arr[i][j] < smallest){
                smallest = arr[i][j];
                columnno = j;
            }    
        }
        int largest = arr[0][columnno];
            for(int k = 0; k < rsize; k++){
                if (arr[k][columnno] > largest){
                    largest = arr[k][columnno];
                }
            } 
            if (smallest == largest){
                cout << "Saddle Point : " << smallest << " ";
                found = true;
            }
    }
    if (!found){
        cout << "No saddle point" << " ";
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rSize = 3;
    int cSize = 3;
    saddle(arr, rSize, cSize);
    return 0;
}

// Matrix Addition

# include <iostream>
using namespace std;
void addition(int arr[][3], int arr2[][3], int rsize, int csize){
    cout << "Matrix Addition : " << endl;
    for (int i = 0; i < rsize; i++){
        for (int j = 0; j < csize; j++){
             cout << arr[i][j] + arr2[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7},{6, 5, 4},{3, 2, 1}};
    int rsize = 3;
    int csize = 3;
    addition(arr, arr2, rsize, csize);
    return 0;
}

// Matrix Multiplication

# include <iostream>
using namespace std;
void multiplication(int arr[][2], int arr2[][2], int rsize, int csize){
    for (int i = 0; i < rsize; i++){
        for (int j = 0; j < csize; j++){
            int result = 0;
            for (int k = 0; k < csize; k++){
                result += arr[i][k] * arr2[k][j];
            }
            cout << result << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[2][2] = {{1, 2},{3, 4}};
    int arr2[2][2] = {{5, 6},{7, 8}};
    int rsize = 2;
    int csize = 2;
    multiplication(arr, arr2, rsize, csize);
    return 0;
}

// 3. Spiral Traversal

#include <iostream>
using namespace std;
void spiral(int arr[][3], int rSize, int cSize)
{
    int top = 0;
    int bottom = rSize - 1;
    int left = 0;
    int right = cSize - 1;

    while(top <= bottom && left <= right)
    {
        // Top Row
        for(int j = left; j <= right; j++)
        {
            cout << arr[top][j] << " ";
        }
        top++;

        // Right Column
        for(int i = top; i <= bottom; i++)
        {
            cout << arr[i][right] << " ";
        }
        right--;

        // Bottom Row
        if(top <= bottom)
        {
            for(int j = right; j >= left; j--)
            {
                cout << arr[bottom][j] << " ";
            }
            bottom--;
        }

        // Left Column
        if(left <= right)
        {
            for(int i = bottom; i >= top; i--)
            {
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main(){
    int arr[3][3] ={{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    spiral(arr, 3, 3);
    return 0;
}

// Boundary Traversal

# include <iostream>
using namespace std;
int boundary(int arr[][4], int rsize, int csize)
{
    int top = 0;
    int bottom = rsize - 1;
    int left = 0;
    int right = csize - 1;

    // Top row

    for (int i = left; i <= right ; i++)
    {
        cout << arr[top][i];
    }

    // Right Column

    for (int j = top + 1; j <= bottom; j++)
    {
        cout << arr[j][right] << " ";
    }

    // Bottom Row

    for (int i = right - 1; i >= left; i--)
    {
        cout << arr[bottom][i] << " ";
    }

    // Left Column

    for (int j = bottom - 1; j > top; j--)
    {
        cout << arr[j][left] << " ";
    }
}
int main(){
    int arr[4][4] ={{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}};
    boundary(arr, 4, 4);
    return 0;
}