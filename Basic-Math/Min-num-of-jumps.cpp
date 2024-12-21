class Solution{
  public:
    int minJumps(int arr[], int n){
        int count=0;
        int currFar=0;
        int currEnd=0;
        for(int i=0;i<n-1;i++){
            currFar=max(currFar,i+arr[i]);
            // if u reach an element that is 0 u cant jump anywhere
            if(i==currEnd){
                count++;
                currEnd=currFar;
                
                // if it can reach or cross the end of array then return the count
                // else if u cant reach the end return -1
                if(currEnd>=n-1){
                    return count;
                }
            }
        }
        return -1;
    }
};
