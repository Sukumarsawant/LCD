class Solution {
public:
    string to_bits(int n){
        string s; 
        do{
             s+=((n%2)?'1':'0');
             n/=2;
             
        }
        while(n!=0);
        while(s.size()!=32 )s+='0';
        // reverse(s.begin(),s.end());
        return s;
    }
    int reverseBits(int n) {
        // cout<<to_bits(n);
        string s1 = to_bits(n);//reversed;
        int num =0;
        for(int i = 31;i>=0;--i){
            if(s1[i]=='1'){
                num+=pow(2,31-i);
            }
        }
        return num;
        return 1;
    }
};
