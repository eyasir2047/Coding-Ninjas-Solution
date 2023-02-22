#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>st;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if(ch=='(' ||  ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            st.push(ch);
        }
        else{
            //nothing to do with lowercase character
            if(ch==')'){
                bool reduntant=true;
                while(st.top()!='('){
                    char top=st.top();
                    if(top=='+' || top=='-' || top=='*' || top=='/'){
                        reduntant=false;
                    }
                    st.pop();
                }
                if(reduntant==true) return true;
                st.pop();
            }
        }
        
       // return false;
    }
    return false;
}
