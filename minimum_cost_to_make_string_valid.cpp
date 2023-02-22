#include <bits/stdc++.h> 
#include<stack>
int findMinimumCost(string str) {
  // Write your code here
    int n=str.length();
    if(n%2!=0) return -1;
    stack<char>st;
    //remove the valid part
    for(int i=0;i<n;i++){
        if(str[i]=='{'){
            st.push(str[i]);
        }
        else{
            // close brac
            if(!st.empty()){
                if(st.top()=='{') {
                    st.pop();
                }
                else
                    st.push(str[i]);
            }
            else{
                st.push(str[i]);
            }
        }
    }
    
    int a=0,b=0;
    while(!st.empty()){
        if(st.top()=='{') a++;
        else b++;
        st.pop();
    }
    int ans=(a+1)/2+(b+1)/2;
    return ans;
}