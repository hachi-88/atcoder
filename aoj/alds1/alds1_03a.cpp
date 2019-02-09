#include <bits/stdc++.h>
using namespace std;

int stack_pointer = -1;
long _stack[101];

void push(long l)
{
    _stack[++stack_pointer] = l;
}

long pop()
{
    return _stack[stack_pointer--];
}

bool empty()
{
    return (stack_pointer < 0);
}

int main()
{
    string _s;
    getline(cin, _s);

    istringstream iss(_s);

    string s;
    while (getline(iss, s, ' ')) {
        if (s == "+") {
            long a = pop();
            long b = pop();
            push(a + b);
        } else if (s == "-") {
            long a = pop();
            long b = pop();
            push(b - a);
        } else if (s == "*") {
            long a = pop();
            long b = pop();
            push(a * b);
        } else {
            push(stoi(s));
        }
    }

    cout << pop() << endl;

    return 0;
}
