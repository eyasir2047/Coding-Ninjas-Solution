 #include<bits/stdc++.h>
vector<int>nextSmallerElement(vector<int>&arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr)  s.pop();
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
vector<int>prevSmallerElement(vector<int>&arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int curr=arr[i];
        while(s.top()!=-1 && arr[s.top()]>=curr)  s.pop();
        ans[i]=s.top();
        s.push(i);
    }
    return ans;
}
int largestRectangle(vector < int > & heights) {
   // Write your code here.
    
    int n=heights.size();
    vector<int>left(n);
    vector<int>right(n);
    left=prevSmallerElement(heights,n);
    right=nextSmallerElement(heights,n);
    int max_area= INT_MIN;
    for(int i=0;i<n;i++){
        int length=heights[i];
        if(right[i]==-1) right[i]=n;
        int width=right[i]-left[i]-1;
        int newarea= length*width;
        max_area=max(max_area,newarea);
    }
    
    
    return max_area;
     
 }