#include<bits/stdc++.h>
using namespace std;

class StackUsingQueue{
    
    queue<int> que1;
    queue<int> que2;

public:
    void push_element(int val){

        que1.push(val);

        while(!que2.empty()){
            int x = que2.front();
            que2.pop();
            que1.push(x);
        }

        swap(que1, que2);
    }

    void pop_element(){
        que2.pop();
    }

    int peek_element(){
        return que2.front();
    }

};


int main(){

    StackUsingQueue stkq;
    stkq.push_element(1);
    stkq.push_element(2);
    stkq.pop_element();
    stkq.push_element(3);
    stkq.pop_element();
    stkq.push_element(4);
    cout << stkq.peek_element();
    stkq.push_element(5);
    cout << stkq.peek_element();
    stkq.push_element(6);
    stkq.pop_element();
    cout << stkq.peek_element();
    return 0;
}