#include<iostream>
#include<vector>
#include<stack>

//implementing two stacks in an array

class TwoStack {

public:
            int *arr;
            int top1;
            int top2;
            int size;
    
    // Initialize TwoStack.
    TwoStack(int s) {// s is size
        // Write your code here.
        this -> size=s;
        top1=-1;
        top2=s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
       
        if(top2-top1>1){//top1=5 , top2=6 6-5=1>1
            top1++;
            arr[top1]=num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        
        if(top2-top1>1){//top1=5 , top2=6 6-5=1>1
            top2--;
            arr[top2]=num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
       
        if(top1>=0){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else {
            return -1;
        }
    }
};


int main(){

        


    return 0;
}