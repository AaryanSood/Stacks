#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    stack<int> s;
    vector<int> ans;

    for(int i=n-1; i>=0; i--){
        if(s.empty())
            ans.push_back(-1);
        else{
            if(arr[i]<s.top()){
                ans.push_back(s.top());
            }
            else{
                while(arr[i]>=s.top())
                    s.pop();

                if(s.empty())
                    ans.push_back(-1);
                else
                    ans.push_back(s.top());
            }
        }

        s.push(arr[i]);
    }

    for(int i=0; i<n; i++)
        cout<<ans[n-1-i]<<" ";
    return 0;
}
