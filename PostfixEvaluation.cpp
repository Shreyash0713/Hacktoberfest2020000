/* Postfix Evaluation of an expression using Stack */

#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    stack<int> s1;
    string s;
    cin>>s;
    int i;
    int l=s.length(),c=0;
    for(i=0;i<l;i++){
        if(isalpha(s[i]))
            c++;
    }
    int arr[c+1];
    for(i=0;i<c;i++){
        cin>>arr[i];
    }
    int j=0,a,b;
    for(i=0;i<l;i++){
        if(isalpha(s[i])){
            s1.push(arr[j]);
            j++;
        }
        else if(s[i]=='+'){
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(b+a);
        }
        else if(s[i]=='-'){
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(b-a);
        }
        else if(s[i]=='*'){
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(b*a);
        }
        else if(s[i]=='/'){
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(b/a);
        }
    }
    cout<<s1.top();
    
    return 0;
}
