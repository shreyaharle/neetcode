class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int maxa = 0;
        while (l<r){
            int w = r-l;
            int h = min(heights[r],heights[l]);
            int area = w*h;
            maxa = max (area,maxa);
            if (heights[l]<heights[r]){
                l++;
            }
            else {
                r--;
            }
        } 
        return maxa;
    }
};
