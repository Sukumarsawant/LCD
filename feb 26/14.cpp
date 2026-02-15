class Solution {
public:
/*
    1. FOr the ith row -> i-1 th row should be filled or atleast the
    // (i-1,j-1) or (i-1,j) -> this  is in acc to taking an vv
    // ** ALSO i-1 need not need to be fully filled 

*/  

# define champagneTower luv


    double luv1(double p,int i   ,int j,vector<vector<double>>&dp){
        if(i<0 || j<0 || i<j) return 0.0;
        // if(i<j ) return dp[i][j] =0.0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==0 && j==0) {return dp[i][j] = max(p,0.0);}
         
        // if( p >= (i+1)*(i+2)*1./2 ) {p--;return 1.0;}
        
        
        double a = max(luv1(p,i-1,j-1,dp)*1. - 1.0,0.0)/2 ;
        double b = max( luv1(p,i-1,j,dp)-1.0,0.0)/2.;
        
        return dp[i][j] =max(a,0.0)+max(b,0.0);


        return 0.0 ;
    }
    double luv(int &poured, int i, int j) {
        vector<vector<double>>dp(101,vector<double>(101,-1));
        double p = poured +0.0;
        
        return dp[i][j] =min(luv1(p,i,j,dp),1.0);


        // return 0.0 ;
    }
};
