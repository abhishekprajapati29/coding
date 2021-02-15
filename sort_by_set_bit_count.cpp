class Solution{
    
    public:
    static int countset(int x){
        int count = 0;
        while(x){
            count++;
            x &=(x-1);
        }
        return count;
    }
    
    static int cmp(int a, int b){
        int count1 = countset(a);
        int count2 = countset(b);
        
        if(count1 <= count2){
            return false;
        }
        return true;
    }
    
    
    
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr, arr+n, cmp);
    }
};
