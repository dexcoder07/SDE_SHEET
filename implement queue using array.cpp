#include<bits/stdc++.h>
using namespace std;

#define MAX 1000
class Queues{

    int queu[MAX];
    int front = -1;
    int rear = -1;

public:

    void push_element(int val){

        // When rear reaches the element just before the front element, means if we insert next element the the element will replace the front element.
        //rear+1 == front
        //rear == front && front and rear != -1
        if(rear == front && front != -1){
            cout << "Queue Overflow";
        }
        rear++;
        queu[rear % MAX] = val;
    }

    void pop_element(){
        if(rear == front && front == -1){
            cout << "Queue Underflow";
        }
        front = front % MAX;
        front++;
    }

    int peek_element(){
        return queu[front];
    }
};

int main(){


    Queues qs;
    qs.push_element(1);
    qs.push_element(2);
    qs.push_element(3);
    qs.pop_element();
    cout << qs.peek_element();
    cout << endl;
    qs.pop_element();
    qs.push_element(4);
    cout << qs.peek_element();
    return 0;
}