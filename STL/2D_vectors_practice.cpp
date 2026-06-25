// 1. Print Matrix
// 1 2 3
// 4 5 6
// 7 8 9

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector <vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

// 2. Row Sum
// Row 1 = 6
// Row 2 = 15
// Row 3 = 24

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i = 0; i < rows; i++){
        int rowsum = 0;
        for(int j = 0; j < cols; j++){
            rowsum = rowsum + matrix[i][j];
        }
        cout << "Rowsum of Row " << i + 1 << " is " << rowsum << endl;
    } 
    return 0;
}

// 3. Column Sum
// Column 1 = 12
// Column 2 = 15
// Column 3 = 18

# include <iostream>
# include <vector>
using namespace std;
int main(){
vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int j = 0; j < cols; j++){
        int colsum = 0;
        for(int i = 0; i < rows; i++){
            colsum = colsum + matrix[i][j];
        }
        cout << "Rowsum of Row " << j + 1 << " is " << colsum << endl;
    } 
    return 0;
}

// 4. Largest Element

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    int largest = matrix[0][0];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (matrix[i][j] > largest){
                largest = matrix[i][j];
            }
        }
    }
    cout << "Largest Element is : " << largest << " ";
    return 0;
}

// 5. Search Element

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool found = false;
    int target;
    cout << "Element to search is : " << " ";
    cin >> target;
    for(int i = 0; i < rows; i++){
        for( int j = 0; j < cols; j++){
            if(matrix[i][j] == target){
                cout << "Found at Row = " << i << endl << " Column = " << j << endl;
                found = true;
                break;
            }
        }
    }
    if(!found){
        cout << "Not Found";
    }
    return 0;
}

// 6. Primary Diagonal Sum
// 1 2 3
// 4 5 6
// 7 8 9

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i == j){
                sum += matrix[i][j];
            }
        }
    }
    cout << "Sum of Primary Diagonal is : " << sum << " ";
    return 0;
}

// 7. Secondary Diagonal Sum

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    int sum = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(i + j == 2){
                sum += matrix[i][j];
            }
        }
    }
    cout << "Sum of Secondary Diagonal is : " << sum << " ";
    return 0;
}

// 8. Matrix Transpose

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector <vector <int>> matrix = {{1, 2, 3},{4, 5, 6}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    cout << "Original Matrix : " << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Transpose Matrix : " << endl;
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
}

// 9. Count Even and Odd Elements

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    int even = 0;
    int odd = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(matrix[i][j] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    cout << "EVEN : " << even << endl;
    cout << "ODD : " << odd << endl;
    return 0;
}

// 10. Find Minimum Element

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = 3;
    int cols = 3;
    int smallest = matrix[0][0];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if (matrix[i][j] < smallest){
                smallest = matrix[i][j];
            }
        }
    }
    cout << "Smallest Element is : " << smallest << " ";
    return 0;
}

// 11. Print Boundary Elements

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    int top = 0;
    int bottom = rows - 1;
    int left = 0;
    int right = cols - 1;

    // TOP ROW

    for( int i = left; i <= right; i++){
        cout << matrix[top][i] << " ";
    }

    // RIGHT COLUMN

    for(int j = top + 1; j <= bottom; j++){
        cout << matrix[j][right] << " ";
    }

    // BOTTOM ROW

    for (int i = right - 1; i >= left; i--){
        cout << matrix[bottom][i] << " ";
    }

    // LEFT COLUMN

    for(int j = bottom - 1; j > top; j--){
        cout << matrix[j][left] << " ";
    }
    return 0;
}

// 12. Check Identity Matrix

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector < vector <int>> matrix = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    int rows = matrix.size();
    int cols = matrix[0].size();
    bool identity = true;
    for(int i = 0; i < rows; i++){
        for( int j = 0; j < cols; j++){
            if (matrix[i][i] != 1 && matrix[i][j] != 0 ){
                identity = false;
                break;
            }
        }
    }
    if(identity){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}