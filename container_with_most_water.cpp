class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0,right = height.size() - 1;
        int area = 0;
        while(left<right){
            area = max(area,(min(height[left],height[right]) * (right - left)));
            if(height[left]<height[right]){
                if(height[left]>height[left + 1]){
                    left++;
                }
                left++;
            }
            else if(height[left]>height[right]){
                if(height[right - 1]<height[right]){
                    right--;
                }
                right--;
            }
            else{
                right--;
                left++;
            }
        }
        return area;
    }
};