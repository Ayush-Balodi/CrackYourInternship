//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    void helper( vector<string> &v, string s, string temp=""){
        if(s.size() == 0){
            v.push_back(temp);
            return;
        }
        for( int i=0; i<s.size(); i++ ){
            char ch = s[i];
            temp+=ch;
            s.erase(s.begin()+i);
            helper(v, s, temp);
            temp.pop_back();
            s.insert(s.begin()+i, ch);
        }
        return;
    }
    vector<string> permutation(string s)
    {
        vector<string> v;
        helper(v, s);
        sort(v.begin() , v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends