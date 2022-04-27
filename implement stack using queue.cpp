#include<bits/stdc++.h>
using namespace std;

//Stack using one queue
class StackUsingOneQueue{

    queue<int> Q1;

public:
    void push_element(int val){
        Q1.push(val);

        int size = Q1.size();

        for(int i = 1 ; i <= size-1 ; i ++){
            int x = Q1.front();
            Q1.pop();
            Q1.push(x);
        }
    }

    void pop_element(){
        Q1.pop();
    }

    int peek_element(){
        int r_element = Q1.front();
        return r_element;
    }
};


//Stack Using two queue
class StackUsingTwoQueue{
    
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

//Stack using two queue.
    StackUsingTwoQueue stkq;
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

//Stack using one queue.
    StackUsingOneQueue stk;
    stk.push_element(1);
    stk.push_element(2);
    stk.push_element(3);
    
    stk.pop_element();

    stk.push_element(4);
    
    cout << stk.peek_element() << endl;

    stk.push_element(5);

    stk.pop_element();

    stk.push_element(6);
    stk.push_element(7);

    cout << stk.peek_element() << endl;

    stk.push_element(8);

    stk.pop_element();

    stk.push_element(19);

    cout << stk.peek_element() << endl;

    stk.push_element(13);
    stk.pop_element();

    cout << stk.peek_element();
    return 0;
}