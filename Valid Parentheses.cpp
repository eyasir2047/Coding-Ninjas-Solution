#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char>st;
    int n=expression.size();
    
    for(int i=0;i<n;i++){
        char ch=expression[i];
        if(ch=='('||ch=='{'||ch=='['){//opening brackets
            st.push(ch);
        }
        else{//closing brackets
            if(!st.empty()){
                if((st.top()=='('&& ch==')') ||(st.top()=='{'&& ch=='}') || (st.top()=='['&& ch==']') ){
                    st.pop();
                }
                else {
                    return false;
                }
            }
            else{
                return false; //stack is empty , first element can't be ),} && ]
            }
        }
       
    }
    if(st.empty()) return true;
        else return false;
    /*
    for(int i=0;i<n;i++){
        if(st.empty()) st.push(expression[i]);
        else if((st.top()=='('&& expression[i]==')') || (st.top()=='{' && expression[i]=='}')||(st.top()=='[' && expression[i]==']')){
            st.pop();
        }
        else if((st.top()!='(' && expression[i]==')')||(st.top()!='{' && expression[i]=='}')||(st.top()!=']' && expression[i]=='[')){
            return false;
        }
        else{
           st.push(expression[i]);
          //  return false;
        }
    }
    if(st.empty()) return true;
    else return false;*/
}

int main(){
    string s;
    cin>>s;
    cout<<isValidParenthesis(s)<<endl;

    return 0;
}