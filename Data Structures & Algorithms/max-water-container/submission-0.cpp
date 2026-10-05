class Solution {
public:
    int maxArea(vector<int>& heights) {
       int i=0;
       int j=heights.size()-1;
       int ans=0;
       while(i<j){
        int h=min(heights[i],heights[j]);
        int b=j-i;
        ans=max(ans,h*b);
        if(heights[i]<heights[j]){
            i++;
        }
        else{
            j--;
        }
       } 
       return ans;

    }
};
