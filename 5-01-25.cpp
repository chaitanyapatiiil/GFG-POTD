class Solution {
    int countPairs(int arr[], int target) {
        // Your code here
        int l=0;
        int r=(arr.length)-1;
        Arrays.sort(arr);
        
        int ans=0;
        while(l<r){
            if((arr[l]+arr[r]) < target){
                ans+=(r-l);
                l++;
            }
            else
                r--;
        }
        
        return ans;
    }
}

