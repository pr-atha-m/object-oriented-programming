//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// Design a class as described in the question


class MyClass{
  
  public:
    void display(){
        cout<<"Hello World"<<endl;
    }
};
// Code here

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        MyClass obj;
        obj.display();
    }
    return 0;
}
  // } Driver Code Ends
