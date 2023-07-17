#include <bits/stdc++.h> 
class Queue {
    int frnt,back;
    vector<int>arr;
public:
    Queue() {
        this->frnt=-1;
        this->back=-1;
    }

    bool isEmpty() {
        if(frnt==back+1 || back==-1)
        return 1;
        return 0;
    }

    void enqueue(int data) {
        arr.push_back(data);
        back++;
        if(frnt==-1)
        frnt =0;
    }

    int dequeue() {
        if(frnt==back+1 || back==-1)
        return -1;
        return arr[frnt++];
        if(frnt==back+1){
            frnt=-1;
            back=-1;
        }
    }

    int front() {
        if(frnt==back+1 || back==-1)
        return -1;
        return arr[frnt];
    }
};
