// // 1. Sort Ascending 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {5, 3, 1, 4, 2};
//     sort(v.begin(), v.end());
//     for(int i : v){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 2. Sort Descending 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {5, 3, 1, 4, 2};
//     sort(v.begin(), v.end(), greater<int>());
//     for(int i : v){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 3. Reverse a Vector 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 3, 4, 5};
//     reverse(v.begin(), v.end());
//     for(int i : v){
//         cout << i << " ";
//     }
//     return 0;
// }

// // 4. Maximum Element 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {2, 9, 4, 6, 1};
//     auto it = max_element(v.begin(), v.end());
//     cout << *it << " ";
//     return 0;
// }

// // 5. Minimum Element 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {2, 9, 4, 6, 1};
//     auto it = min_element(v.begin(), v.end());
//     cout << *it << " ";
//     return 0;
// }

// // 6. Count Occurrences 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 2, 2, 3, 4};
//     int target = 2;
//     int ans = count(v.begin(), v.end(), target);
//     cout << "OCCURRENCE : " << ans << " ";
//     return 0;
// }

// 7. Find Element 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 3, 4, 5};
//     int target = 4;
//     auto it = find(v.begin(), v.end(), target);
//     if (*it == target){
//         cout << "FOUND";
//     }
//     else{
//         cout << "NOT FOUND";
//     }
//     return 0;
// }

// // 8. Binary Search 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 3, 4, 5};
//     int target = 10;
//     bool it = binary_search(v.begin(), v.end(), target);
//     cout << it << endl;
//     return 0;
// }

// // 9. Lower Bound

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 4, 4, 4, 5, 6};
//     int target = 4;
//     auto it = lower_bound(v.begin(), v.end(), target);
//     cout << "INDEX : " << it - v.begin() << " ";
//     return 0;
// }

// // 10. Upper Bound

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 4, 4, 4, 5, 6};
//     int target = 4;
//     auto it = upper_bound(v.begin(), v.end(), target);
//     cout << "INDEX : " << it - v.begin() << " ";
//     return 0;
// }

// // 11. Count Frequency Using Bounds 

// # include <iostream>
// # include <algorithm>
// # include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1, 2, 2, 2, 3, 4};
//     int target = 2;
//     auto it = lower_bound(v.begin(), v.end(), target);
//     auto jt = upper_bound(v.begin(), v.end(), target);
//     int lindex = it - v.begin();
//     int uindex = jt - v.begin();
//     cout << "FREQUENCY : " << uindex - lindex << " ";
//     return 0;
// }