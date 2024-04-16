class Solution {
    public static int minimizeDifference(int n, int k, int[] arr) {
        // code here
        int[][] preMinMax = new int[n][2],posMinMax = new int[n][2];
        preMinMax[0][0] = preMinMax[0][1] = arr[0];
        posMinMax[n-1][0] = posMinMax[n-1][1] = arr[n-1];
        for(int i=1;i<n;i++) 
        {
            preMinMax[i][0] = Math.min(preMinMax[i-1][0],arr[i]);
            preMinMax[i][1] = Math.max(preMinMax[i-1][1],arr[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            posMinMax[i][0] = Math.min(posMinMax[i+1][0],arr[i]);
            posMinMax[i][1] = Math.max(posMinMax[i+1][1],arr[i]);
        }
        int ans = posMinMax[k][1]-posMinMax[k][0];
        for(int i=k+1;i<n;i++)
        {
            int curr = Math.max(preMinMax[i-k-1][1],posMinMax[i][1])-Math.min(preMinMax[i-k-1][0],posMinMax[i][0]);
            ans = Math.min(ans,curr);
        }
        ans = Math.min(ans,preMinMax[n-k-1][1]-preMinMax[n-k-1][0]);
        
        return ans;
    }
}
