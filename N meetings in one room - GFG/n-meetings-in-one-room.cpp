//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        
        
         unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp[end[i]]<start[i]){
                mp[end[i]]=start[i];
            }
        }   
            sort(end,end+n);
            int count=1,j=0;
            for(int i=1;i<n;i++){
                if(mp[end[i]]>end[j]){
                    count++;
                    j=i;
                }
            }
        
        return count;
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends