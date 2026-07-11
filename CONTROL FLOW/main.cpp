// // If Else

// # include <iostream>
// using namespace std;

// int main(){
//     int budget;
//     cout << "Enter your budget:" << endl;

//     cin >> budget;

//     if (budget > 2000000){
//         cout << "You can buy scorpio" << endl;
//     }

//     else{
//         cout << "You cannot buy scorpio" << endl;
//     }
    
//     return 0;
// }

// // Else If 

// #include <iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout << "enter Marks: " << endl;
//     cin >> marks;
    
//     if (marks > 90){
//         cout << "A" << endl;
//     }
//     else if (marks > 80){
//         cout << "B" << endl;
//     }
//     else if (marks > 70){
//         cout << "C" << endl;
//     }
//     else{
//         cout << "Fail" << endl;
//     }
//     return 0;
// }

// Nested If Else

// # include <iostream>
// using namespace std;

// int main(){
//     int height;
//     cout << "Enter Height in cms" << endl;
//     cin >> height;

//     int weight;
//     cout << "Enter weight in kgs" << endl;
//     cin >> weight;

//     if (height > 140){
        
//         if (weight > 70){
//             cout << "Healthy" << endl;
//         }
//         else{
//             cout << "Kuch nhi ho skta" << endl;
//         }
//     }
//     else{
//         cout << "Dead" << endl;
//     }
//     return 0;
// }

// Switch Case

# include <iostream>
using namespace std;
int main(){
    char grade;
    cout << "Enter grade: " << endl;
    cin >> grade;

    switch(grade){
    case 'A': cout << "Your marks are in the range of 90 to 100" << endl;
    break;
    case 'B': cout << "Your marks are in the range of 70 to 80" << endl;
    break;
    case 'C': cout << "Your marks are in the range of 60 to 70" << endl;
    break;
    case 'D': cout << "Your marks are in the range of 40 to 50" << endl;
    break;
    default: cout << "Your marks are in the range of 0 to 40" << endl;

    }
    return 0;
}