int findPosition(int N) {
        int n = __builtin_popcount(N);
        if(n > 1 || n == 0){
            return -1;
        }
        else{
            return log2(N & -N) + 1;
        }
    }
