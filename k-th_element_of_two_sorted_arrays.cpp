class Solution{
    public:
    
    int nextgap(int gap){
        if(gap<= 1) return 0;
        return (gap /2)+(gap % 2);
    }
    
    
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i,j;
        int gap = m+n;
        for(int gap = nextgap(gap); gap>0; gap=nextgap(gap)){
            for(i=0; i+gap<n; i++){
                if(arr1[i] > arr1[i+gap]){
                    swap(arr1[i], arr1[i+gap]);
                }
            }
            for(j=(gap > n) ? gap-n : 0; i<n && j<m; i++,j++){
                if(arr1[i] > arr2[j]){
                    swap(arr1[i], arr2[j]);
                }
            }
            if(j<m){
                for(j=0; j+gap<m; j++){
                    if(arr2[j] > arr2[j+gap]){
                        swap(arr2[j], arr2[j+gap]);
                    }
                }
            }
        }
        if(k-1<n){
            return arr1[k-1];
        }
        else{
            return arr2[k-n-1];
        }
    }
};
