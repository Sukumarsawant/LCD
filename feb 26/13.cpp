class Solution {
public:
    int longestBalanced(string s) {
      vector<int>freq(3,0);
        int n =s.size();

        for(int i =0 ; i<n; ++i){
            freq[s[i]-'a']++;
        }
        int ans1,ans2,ans3 ;
        if(freq[0]==freq[1] && freq[1]==freq[2]){
            return n;
        }
        auto maxIn2 =[&](char a,char b){
        // vector<int> pre(n+1,0);
            int pre =0;
        vector<int> temp (n,0);
        set<int>st;
        map<int,int> m;
        // ab
        m[0] = 0;
        st.insert(pre);
        int abmax =0;
        for(int i = 0 ; i<n; ++ i){
            if(s[i]==a) pre++;
            if(s[i]==b) pre--;
           if(s[i]!=a && s[i]!=b){
            pre =0;
            st.clear();
            m.clear();
            m[0] = i+1;
            st.insert(0);
            continue;
           }

            // if(pre==0)debug(i+1,s[i]);
            if(st.count(pre)==0){
                st.insert(pre);
                m[pre] = i+1;
            }
            else{
                abmax = max(abmax, i+1 - m[pre]);   
            }

        }



    return abmax;
        };
        // case 1 : taking one at a time
        // maxi1 = max({freq[0],freq[1],freq[2]});
        int maxi1 = 1;
        int ct_c1 =1;
        for(int i =1 ; i<n; ++i){
            if(s[i]==s[i-1])ct_c1++;
            else{
                maxi1 = max(ct_c1,maxi1);
                ct_c1 =1;
            }
        }
         maxi1 = max(ct_c1,maxi1);
        // case 2: taking two at a time 
       int abmax = maxIn2('a','b');
       int bcmax = maxIn2('b','c');
       int acmax = maxIn2('a','c');
       
        
      
        int maxi2 = max({abmax,bcmax,acmax});
        
        
        // case 3 ->  all 3 
        // pre.assign(n+1,0);
        // vector<int>pre
        // temp.assign(n,0);
        set<pair<int,int>>st1;
        map<pair<int,int>,int>m1 ;
        m1[{0,0}] =0;
         st1.insert({0,0});
        // int max3 =0;
        // a = b
        // a = c

        pair<int,int> p ={0,0};
        int maxi3 = 0;
        for(int i =0 ; i<n; ++i){
            if(s[i]=='a') {p.first++;p.second++;}
            if(s[i]=='b') p.first--;
            if(s[i]=='c') p.second--;

            if(st1.count(p)==0){
                st1.insert(p);
                m1[p] = i+1;
            }
            else{
                maxi3 = max(maxi3, i+1 - m1[p]);                
            }
        }
// debug(maxi1,maxi2,maxi3);
        return max({maxi1,maxi2,maxi3});    
    }
};
