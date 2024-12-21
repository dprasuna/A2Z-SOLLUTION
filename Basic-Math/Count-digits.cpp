int evenlyDivides(int N){
        int count=0;
        int num = N;
        while(N>0){
            int digit = N % 10;
            if(digit!=0 && num%digit==0){
                count++;
            }
            N = N/10;
        }
        return count;
      }
};
