class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        priority_queue<int> pq;
        int i=0;
        while(i<n){
            pq.push(stones[i]);
            i++;
        }
        while(pq.size()>1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x!=y){
                pq.push(x-y);
            }
        }
        return pq.empty() ? 0 : pq.top();
    }
};
