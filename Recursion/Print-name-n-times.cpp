class Solution {
  public:
    void printGfg(int N) {
        // Code here
        if(N==1){
            cout<<"GFG"<<" ";
            return;
        }
        printGfg(N-1);
        cout<<"GFG"<<" ";
    }
};
