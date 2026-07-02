// 1. Insert and Print 

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> m;
    m[101] = 80;
    m[102] = 90;
    m[103] = 75;

    map <int, int> :: iterator it = m.begin();
    while(it != m.end()){
        cout << it -> first << " -> " << it -> second << endl;
        it++;
    }
    return 0;
}

// 2. Search a Key 

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    mp[101] = 80;
    mp[102] = 90;
    mp[103] = 75;

    int key;
    cout << "KEY : " << " ";
    cin >> key;

    if(mp.find(key) != mp.end()){
        cout << "KEY FOUND" << endl;
        cout << mp[key] << endl;
    }
    else{
        cout << "KEY NOT FOUND";
    }
    return 0;
}

// 3. Update Value 

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    mp[101] = 80;
    mp[102] = 90;
    mp[103] = 75;
    mp[101] = 95;

    map <int, int> :: iterator it = mp.begin();
    while (it != mp.end()){
        cout << it->first << " -> " << it->second << endl;
        it++;
    }
    return 0;
}

// 4. Count Frequency of Numbers 

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    int n;
    cout << "Enter number of elements : " << " ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    cout << "Frequency of elements:\n";
    
    for(auto i : mp){
        cout << i.first << " -> " << i.second << endl;
    }
    return 0;
}

// 5. Count Frequency of Characters 

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <char, int> mp;
    int s;
    cout << "Enter number of characters : " << " ";
    cin >> s;
    for (char i = 0; i < s; i++){
        char x;
        cin >> x;
        mp[x]++;
    }
    cout << "Frequency of elements:\n";

    for(auto i : mp){
        cout << i.first << " -> " << i.second << endl;
    }
    return 0;
}

// 6. Find Maximum Frequency Element 

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    int s;
    cout << "Enter the number of elements : " << " ";
    cin >> s;
    for(int i = 0; i < s; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int maxfreq = 0;
    int answer = 0;
    for(auto i : mp){
        if (i.second > maxfreq){
            maxfreq = i.second;
            answer = i.first;
        }
    }
    cout << "Element having highest frequency is : " << answer << endl;
    cout << "Frequency is : " << maxfreq << endl;     
    return 0;
}

// 7. Print Keys Only

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    mp[101] = 90;
    mp[102] = 80;
    mp[103] = 75;

    map <int, int> :: iterator it = mp.begin();
    while(it != mp.end()){
        cout << it->first << endl;
        it++;
    }
    return 0;
}

// 8. Print Values Only

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    mp[101] = 90;
    mp[102] = 80;
    mp[103] = 75;

    map <int, int> :: iterator it = mp.begin();
    while(it != mp.end()){
        cout << it->second << endl;
        it++;
    }
    return 0;
}

// 9. Sum of Values

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    mp[101] = 98;
    mp[102] = 89;
    mp[103] = 99;
    
    map<int,int> :: iterator it = mp.begin();
    int sum = 0; 
    while(it != mp.end()){
        sum += it->second;
        it++;
    }
    cout << "SUM OF VALUES IS : " << sum << " ";
    return 0;
}

// 10. Check if Key Exists

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <int, int> mp;
    mp[101] = 98;
    mp[102] = 89;
    mp[103] = 99;
    if(mp.find(108) != mp.end()){
        cout << "Key Found";
    }
    else{
        cout << "Key not found";
    }
    return 0;
}

// 11. Student Database 

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <string, int> student;

    int n;
    cout << "Enter number of students : " << " ";
    cin >> n;

    for(int i = 0; i <n; i++){
        string name;
        int marks;
        cout << "Student Name : " << " ";
        cin >> name;
        cout << "Marks Scored : " << "  ";
        cin >> marks;
        student[name] = marks;
    }
    int maxmark = -1;
    string topper;
    for(auto i : student){
        if(i.second > maxmark){
            maxmark = i.second;
            topper = i.first;
        }
    }
    cout << topper << " -> " << maxmark << " ";

    // string search;
    //     cout << "Enter name : " << " ";
    //     cin >> search;
    //         auto it = student.find(search);
    //         if(it != student.end()){
    //         cout << it->first << "->" << it->second << endl;
    //     }
    //     else{
    //         cout << "Not Found";
    //     }
    return 0;
}

// 12. Word Frequency 

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <string, int> mp;
    int n;
    cout << "Number of words : " << " ";
    cin >> n;

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;
        mp[word]++;
    }
    cout << "Frequency of words : " << endl;
    for(auto i : mp){
        cout << i.first << " -> " << i.second << endl;
    }
    return 0;
}

// Find the first non-repeating character in a string.

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <char, int> mp;
    bool found = false;
    string s;
    cout << "Enter String : " << " ";
    cin >> s;

    for(char ch : s){
        mp[ch]++;
    }
    for(char ch : s){
        if(mp[ch] == 1){
            cout << ch ;
            found = true;
            break;
        }
    }
    if(!found){
        cout << "No non-repeating character";
    }
    return 0;
}

// Find the first repeating element in an array.

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <char, int> mp;
    string s;
    cout << "Enter String : " << " ";
    cin >> s;

    for(char ch : s){
        mp[ch]++;
    }
    for(char ch : s){
        if (mp[ch] > 1){
            cout << ch ;
            break;
        }
    }
    return 0;
}

// Check if two strings are anagrams using a map.

# include <iostream>
# include <map>
using namespace std;
int main(){
    map <char, int> mp;
    bool anagram = true;
    string a;
    string b;
    cout << "Enter String 1 : " << " ";
    cin >> a;
    cout << "Enter String 2 : " << " ";
    cin >> b;

    if(a.length() != b.length()){
        cout << "Not Anagram";
        return 0;
    }

    for(char ch : a){
        mp[ch]++;
    }
    for(char ch : b){
        mp[ch]--;
    } 
    for(auto i : mp){
        if (i.second != 0){
            cout << "Not Anagram";
            anagram = false;
            break;
        }
    }
    if(anagram){
        cout << "Anagram";
    }
    return 0;
}

// Find the top K frequent elements using a map + priority queue.



// Sort students by marks using a map