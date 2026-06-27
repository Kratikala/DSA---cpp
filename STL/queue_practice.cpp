// 1. Insert

# include <iostream>
# include <queue>
using namespace std;
int main(){
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout << "Front -> " << q.front() << endl;
    cout << "End -> " << q.back() << endl;
    return 0;
}

// 2. Pop Two Elements

# include <iostream>
# include <queue>
using namespace std;
int main(){
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    q.pop();

    queue <int> temp = q;
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    return 0;
}

// 3. Print Queue

# include <iostream>
# include <queue>
using namespace std;
int main(){
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    queue <int> temp = q;
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    return 0;
}

// 4. Sum of Queue

# include <iostream>
# include <queue>
using namespace std;
int main(){
    queue <int> q;
    int sum = 0;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    queue <int> temp = q;
    while(!temp.empty()){
        sum += temp.front();
        temp.pop();
    }
    cout << "SUM : " << sum << " ";
    return 0;
}

// 5. Count Even Numbers

# include <iostream>
# include <queue>
using namespace std;
int main(){
    queue <int> q;
    int count_even = 0;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    queue <int> temp = q;
    while(!temp.empty()){
        if(temp.front() % 2 == 0){
            count_even++;
        }
        temp.pop();
    }
    cout << "EVEN : " << count_even << " ";
    return 0;
}

// 6. Reverse Queue

# include <iostream>
# include <stack>
# include <queue>
using namespace std;
int main(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    stack <int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    queue <int> temp = q;
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    return 0;
}

// 🟡 DEQUE (5 Questions)
// 1. Push Front

# include <iostream>
# include <queue>
using namespace std;
int main(){
    deque <int> dq;
    dq.push_front(300);
    dq.push_front(200);
    dq.push_front(100);

    for(int i : dq){
        cout << i << " ";
    }
    return 0;
}


// 2. Push Back

# include <iostream>
# include <queue>
using namespace std;
int main(){
    deque <int> dq;
    dq.push_front(300);
    dq.push_front(200);
    dq.push_front(100);
    dq.push_back(400);
    dq.push_back(500);

    for(int i : dq){
        cout << i << " ";
    }
    return 0;
}

// 3. Pop Front

# include <iostream>
# include <queue>
using namespace std;
int main(){
    deque <int> dq;
    dq.push_front(300);
    dq.push_front(200);
    dq.push_front(100);
    dq.push_back(400);
    dq.push_back(500);
    dq.pop_front();
    dq.pop_front();

    for(int i : dq){
        cout << i << " ";
    }
    return 0;
}

// 4. Pop Back

# include <iostream>
# include <queue>
using namespace std;
int main(){
    deque <int> dq;
    dq.push_front(300);
    dq.push_front(200);
    dq.push_front(100);
    dq.push_back(400);
    dq.push_back(500);
    dq.pop_back();
    dq.pop_back();

    for(int i : dq){
        cout << i << " ";
    }
    return 0;
}

// 5. Print Deque

# include <iostream>
# include <queue>
using namespace std;
int main(){
    deque <int> dq;
    dq.push_back(300);
    dq.push_back(200);
    dq.push_back(100);

    for(int i : dq){
        cout << i << " ";
    }
    return 0;
}

// 🔴 PRIORITY QUEUE (6 Questions)

// 1. Max Heap

# include <iostream>
# include <queue>
using namespace std;
int main(){
    priority_queue <int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(8);
    pq.push(3);
    pq.push(9);
    pq.push(2);

    priority_queue <int> temp = pq;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}

// 2. Min Heap

# include <iostream>
# include <queue>
using namespace std;
int main(){
    priority_queue <int, vector<int>, greater<int> > pq;
    pq.push(5);
    pq.push(1);
    pq.push(8);
    pq.push(3);
    pq.push(9);
    pq.push(2);

    priority_queue <int, vector<int>, greater<int> > temp = pq;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}

// 3. Find Largest

# include <iostream>
# include <queue>
using namespace std;
int main(){
    priority_queue <int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(8);
    pq.push(3);
    pq.push(9);
    pq.push(2);
    cout << "LARGEST : " << pq.top() << " ";
    return 0;
}

// 4. Find Smallest

# include <iostream>
# include <queue>
using namespace std;
int main(){
    priority_queue <int, vector<int>, greater<int> > pq;
    pq.push(5);
    pq.push(1);
    pq.push(8);
    pq.push(3);
    pq.push(9);
    pq.push(2);
    cout << "SMALLEST : " << pq.top() << " ";
    return 0;
}

// 5. Print Priority Queue

# include <iostream>
# include <queue>
using namespace std;
int main(){
    priority_queue <int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(8);
    pq.push(3);
    pq.push(9);
    pq.push(2);

    priority_queue <int> temp = pq;
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}

// 6. K Largest

# include <iostream>
# include <queue>
using namespace std;
int main(){
    priority_queue <int> pq;
    pq.push(10);
    pq.push(4);
    pq.push(15);
    pq.push(2);
    pq.push(20);

    for(int i = 0; i < 3; i++){
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}

// Find Kth Largest Element

# include <iostream>
# include <queue>
using namespace std;
int main(){
    priority_queue <int> pq;
    int k;
    cout << "Enter K : ";
    cin >> k;
    pq.push(3);
    pq.push(2);
    pq.push(1);
    pq.push(5);
    pq.push(6);
    pq.push(4);

    if (k <= 0 || k > pq.size()) {
        cout << "Invalid value of k";
        for(int i = 0; i < k - 1; i++){
            pq.pop();
        }
        cout << pq.top() << " ";
    }
    return 0;
}
