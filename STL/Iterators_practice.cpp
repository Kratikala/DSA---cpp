// 12. Traverse Vector Using Iterator

# include <iostream>
# include <vector>
using namespace std;
int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    vector <int> :: iterator it = v.begin();
    while(it != v.end()){
    cout << *it << " ";
    it ++;
    }
    return 0;
}

// 13. Traverse Set Using Iterator

# include <iostream>
# include <set>
using namespace std;
int main(){
    set <int> s = {10, 20, 30, 30, 40, 50};
    set <int> :: iterator it = s.begin();
    while(it != s.end()){
        cout << *it << " ";
        it++;
    }
    return 0;
}

// 14. Traverse Map Using Iterator

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    mp[101] = 10;
    mp[102] = 20;
    mp[103] = 30;

    map <int, int> :: iterator it = mp.begin();
    while(it != mp.end()){
        cout << it->first << " -> " << it->second << endl;
        it++;
    }
    return 0;
}

// 15. Search in Vector Using Iterator

# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    int target = 40;
    auto it = find(v.begin(), v.end(), target);
    if(it != v.end()){
        cout << "FOUND";
    }
    else{
        cout << "NOT FOUND";
    }
    return 0;
}

// 16. Sum of Vector Using Iterator 

# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
int main(){
    vector <int> v = {10, 20, 30, 40, 50};
    int sum = 0;
    vector <int> :: iterator it = v.begin();
    while(it != v.end()){
        sum += *it;
        it++;
    }
    cout << "SUM : " << sum << " ";
    return 0;
}

// 17. Remove Duplicates From Vector

# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
int main(){
    vector <int> v = {1, 2, 2, 3, 3, 4, 5, 5};
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}

// 18. Merge Two Vectors

# include <iostream>
# include <algorithm>
# include <vector>
using namespace std;
int main(){
    vector <int> v1 = {1, 2, 3};
    vector <int> v2 = {4, 5, 6};
    std :: vector <int> result(v1.size() + v2.size());
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());
    for(int i : result){
        cout << i << " ";
    }
    return 0;  
}