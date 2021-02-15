vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
   
    long long int product = 1;
    int count = 0;
    for(long long int i=0; i<n; i++) {
        if(nums[i]>0)
            product *= nums[i];
        else{
            count++;
        }
        
    }
    
    vector<long long int> res;
    if(count == 0){
        for(long long int i=0; i<n; i++){
            res.push_back(product/nums[i]);
        }
    }
    else if(count >1){
        for(long long int i=0; i<n; i++){
            res.push_back(0);
        }
        
    }
    else{
    for(long long int i=0; i<n; i++){
        if(nums[i] == 0){
            res.push_back(product);
        }else{
            res.push_back(0);
        }
    }}
    return res;
}
