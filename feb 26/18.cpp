class Solution {
public:
    bool hasAlternatingBits(int n) {
        set<long long>s;
        long long num = 0;
        for(int i =0 ;i<=32;i+=2) {num+=pow(2,i);
        s.insert(num);}

         num =0;
          for(int i =1 ;i<=32;i+=2) {num+=pow(2,i);
        s.insert(num);}
        return s.count(n);

        
    }
};
