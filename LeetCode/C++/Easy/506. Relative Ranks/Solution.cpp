using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int>sorted=score;
        sort(sorted.rbegin(),sorted.rend());
        unordered_map<int,int>ranks;
        for(int i=0;i<n;i++){
            ranks[sorted[i]]=i+1;
        }
        vector<string>ans(n);
        for(int i=0;i<n;i++){
            if (ranks[score[i]] == 1)
            ans[i]="Gold Medal";
            else if(ranks[score[i]]==2)
            ans[i]="Silver Medal";
            else if(ranks[score[i]]==3)
            ans[i]="Bronze Medal";
            else
            ans[i]=to_string(ranks[score[i]]);
        }
        return ans;
    }
};