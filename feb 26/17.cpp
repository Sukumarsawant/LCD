class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
  
    //  set<string>ans;
    vector<set<int>>h(5,set<int>()),m(12,set<int>());
    //  int rem = turnedOn;
     for(int rem =0 ;rem<=10;++rem){
     for(int i =0 ;i<12 && rem<=4;++i){
        if(__builtin_popcount(i)==rem) h[rem].insert(i);
     }
     for(int i =0 ;i<60 && rem<=6;++i){
        if(__builtin_popcount(i)==rem) m[rem].insert(i);
     }
     }
     set<string>a;
   
     for(int i =0 ; i<=turnedOn;++i){
        int h1 = i;
        int m1 = turnedOn-h1;
    if(h1>4 || m1>6) continue;
    for(auto &x:h[h1]){
        
       
     for(auto &y:m[m1]){
        string a1= "0";
        string b1 = "00";
        if(x>=0 && y>=0){
            a1 = to_string(x);
            b1 = to_string(y);
            if(y<10) b1 = '0' +b1;
            a.insert(a1+":" + b1);
        }
        else if(x>0){
            a1 = to_string(x);
            a.insert(a1+":00");
        }
        else if(y>0){
             b1 = to_string(y);
            if(y<10) b1 = '0' +b1;
            a.insert("0:" + b1);
        }

     }
    }
    
     }
    
     return vector<string>(a.begin(),a.end());
}
};
