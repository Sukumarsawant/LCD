class Solution {
public:
    string addBinary(string a, string b) {
        int n,m ; n = a.size();m = b.size();
        if(n<m){
            a =string(m-n,'0') + a;n = m;
        }
        else {b=string(n-m,'0')+b;m = n;}
        cout<<a<<" "<<b<<endl;
        int carry =0;
        string ans = string(n,'0');
        for(int i = n-1;i>=0;--i){
            if(carry==0){
                if(a[i]=='1' && b[i]=='1') {
                    ans[i] ='0';
                    carry = 1;
                }
                else if(a[i]=='1' || b[i]=='1'){
                    ans[i]='1';
                }
            
            }
            else{
                if(a[i]=='1' && b[i]=='1'){
                    ans[i] ='1';
                    carry = 1;
                }
                else if(a[i]=='1' || b[i]=='1'){
                    ans[i]='0';
                    carry = 1;
                }
                else{
                    ans[i]='1';
                    carry =0;
                }
            }
        }
        if(carry) ans = '1' + ans;
        return ans;
    }
};
