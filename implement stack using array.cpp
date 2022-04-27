#include<bits/stdc++.h>
using namespace std;

# define MAX 1000
class Stacks{

    int stk[MAX];
    int top = -1;

public:
    void push_element(int val)
    {
        if(top > MAX-1){
            cout << "Stack Overflow";
        }
        stk[++top] = val;
    }

    void pop_element(){
        if(top == -1){
            cout << "Stack Underflow";
        }
        top--;
    }

    int peek_element(){
        return stk[top];
    }
};

int main(){

//Using Classes and Objects.
    Stacks st;
    st.push_element(19);
    st.push_element(11);
    st.push_element(14);
    st.push_element(15);
    st.pop_element();
    cout << st.peek_element();
    st.pop_element();
    cout << st.peek_element();

//Without classes and obect
    int n;
    cin >> n;

    int stk[n];
    int top = -1;

    //1 - to push the value into stack
    //2 - to pop value from stack
    //3 - to peek value into stack
    //-1 - to end the program.

    //test case
    /*
    1. When stack is empty return underflow
    2. When stack is full return overflow
    */

    int inp;
    while(1){
        //cout << "loop";
        cin >> inp;
        if(inp == -1){
            break;
        }

        switch (inp)
        {
        case 1:
            if(top == n){
                cout << "Stack overflow";
                break;
            }
            int val;
            cin >> val;
            stk[++top] = val;
            break;
        case 2:
            if(top == -1){
                cout << "Stack Underflow";
                break;
            }
            top--;
            break;
        case 3:
            cout << stk[top] << endl;
            break;
        }

    }
return 0;
}
