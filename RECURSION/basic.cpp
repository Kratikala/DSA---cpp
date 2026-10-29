// Print name N times using recursion

# include <iostream>
using namespace std;

void Print(int i, int n)
{
    if(i > n)
    {
        return;
    }
    cout << "Kratika" << endl;
    Print(i+1, n);
}

int main()
{
    int n;
    cout << "Enter n : " << " ";
    cin >> n;

    Print(1, n);

    return 0;
}


// Print 1 to N using recursion

# include <iostream>
using namespace std;

void Print(int i, int n)
{
    if(i > n)
    {
        return;
    }
    cout << i << endl;
    Print(i+1, n);
}

int main()
{
    int n;
    cout << "Enter n : " << " ";
    cin >> n;

    Print(1, n);

    return 0;
}


// Print N to 1 using recursion

# include <iostream>
using namespace std;

void Print(int i, int n)
{
    if(i < 1)
    {
        return;
    }
    cout << i << endl;
    Print(i-1, n);
}

int main()
{
    int n;
    cout << "Enter n : " << " ";
    cin >> n;

    Print(n, n);

    return 0;
}


// Print 1 to N using backtracking

# include <iostream>
using namespace std;

void Print(int i, int n)
{
    if(i < 1)
    {
        return;
    }
    cout << i << endl;
    Print(i-1, n);
}

int main()
{
    int n;
    cout << "Enter n : " << " ";
    cin >> n;

    Print(n, n);

    return 0;
}


// Print N to 1 using backtracking

# include <iostream>
using namespace std;

void Print(int i, int n)
{
    if( i > n)
    {
        return;
    }

    Print(i + 1, n);
    cout << i << endl;
}

int main()
{
    int n;
    cout << "Enter value : " << " ";
    cin >> n;

    Print(1, n);

    return 0;
}


// Sum of first N numbers

# include <iostream>
using namespace std;
int sum(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + sum(n-1);
}

int main()
{
    int n;
    cout << "Enter value : " << " ";
    cin >> n;

    cout << "SUM : " << sum(n) << " ";

    return 0;
}


// Factorial

# include <iostream>
using namespace std;
int fact(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * fact(n-1);
}

int main()
{
    int n;
    cout << "Enter value : " << " ";
    cin >> n;

    cout << "FACTORIAL IS : " << fact(n) << " ";

    return 0;
}







