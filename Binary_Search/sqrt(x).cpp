 int mySqrt(int x) {
        if(x==0)return 0;
        int l = 0;
        int r = x;
        int ans = 0;
        while(l<=r){
            long mid = (l+r)/2;
            long m2 = mid * mid;
            if(m2 > x){
                r = mid -1;
            }
            else{
                ans = mid;
                l = mid +1;
            }
        }
        return ans;
    }
