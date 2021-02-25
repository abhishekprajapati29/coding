void getvalues(vector<int> v,int *x, int *y){
        int ans = v[0];
        for(int i=1; i<v.size(); i++){
            ans ^= v[i];
        }
        *x = 0;
        *y = 0;
        int set_bit_no = ans & ~(ans-1);
        
        for(int i=0; i<v.size(); i++){
            if(v[i] & set_bit_no){
                *x ^= v[i];
            }else{
                *y ^= v[i];
            }
        }
    }
    vector<int> singleNumber(vector<int> nums) 
    {
        int *x = new int[(sizeof(int))];
        int *y = new int[(sizeof(int))];
        getvalues(nums, x,y);
        vector<int> v;
        if(*x < *y){
            v.push_back(*x);
            v.push_back(*y);
        
        }else{
            v.push_back(*y);
            v.push_back(*x);
        }
        return v;
    }
