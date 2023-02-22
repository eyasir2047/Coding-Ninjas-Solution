#include<iostream>
#include<vector>
#include<stack>
using namespace std;


void insertAtBottom(stack<int> &s,int element){
    //base case
    if(s.empty()){
        s.push(element);
        return ;
    }
    int num=s.top();
    s.pop();
    //recursive call
   insertAtBottom(s,element);
    s.push(num);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    //base case
    if(stack.empty()) return;
    
    int num=stack.top();
    stack.pop();
    
    //recursive call
    reverseStack(stack);
    
    insertAtBottom(stack,num);
}

int main(){
    stack<int>st;

    st.push(5);
     st.push(50);
      st.push(51);
       st.push(25);
        st.push(35);

    reverseStack(st);

   while(!st.empty()){
    int num=st.top();
    cout<<num<<" ";
    st.pop();
   }

    return 0;
}