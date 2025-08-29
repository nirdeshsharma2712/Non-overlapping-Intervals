class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i = 0, j= 1 , count = 0;
        while(j<intervals.size()){
            int start1 = intervals[i][0];
            int start2 = intervals[j][0];
            int end1 = intervals[i][1];
            int end2 = intervals[j][1];
            if(end1<=start2){
                i = j;
                j++;
            }
            else if(end1<=end2){
                j++;
                count++;
            }
            else if(end1>end2){
                i = j;
                j++;
                count++;
            }
        }
        return count;
    }
};
