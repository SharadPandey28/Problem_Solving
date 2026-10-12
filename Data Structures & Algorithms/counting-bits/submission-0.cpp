class Solution {
public:
     int hammingWeight(uint32_t n) {
    int count =0;    
    while(n>0){
       if(n%2==1){
        count++;
       }
       n=n/2;
    }
    return count;
    }
    vector<int> countBits(int n) {
        vector<int>m(n+1);
        for(int i=0;i<=n;i++){
         m[i]=hammingWeight(i);
         
        }
        return m;
    }
};
