class Solution {
public:
    int countBinarySubstrings(string s) {
        int sum =0;
        int  i=0;int j= 0;
        int n= s.size();
        vector<int>its;
        for(int i=1;i<n;++i){
            if(s[i]!=s[i-1]){
                its.push_back(i);
            }
        }
        its.push_back(0);
        its.push_back(n);
        sort(its.begin(),its.end());
        for(auto &x:its){
            cout<<x<<" ";
        }
        cout<<endl;
        vector<int>itsf(its.size()-2,0);
        for(int i =0;i<its.size()-2;++i){
            itsf[i] = min(its[i+1]-its[i],its[i+2]-its[i+1]);
        }
        for(auto &x:itsf){
            cout<<x<<" ";
        }
        cout<<endl;
        for(auto &x:itsf){
            sum+=(x);
        }
        return sum;
        
    }
};
