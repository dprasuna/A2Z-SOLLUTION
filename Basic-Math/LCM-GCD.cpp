class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
       vector<long long>res;
       long long gcd=__gcd(A,B);
       long long lcm=(A*B)/(gcd);
       res.push_back(lcm);
       res.push_back(gcd);
       return res;
    }
};
