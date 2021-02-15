int majorityElement(int a[], int size)
{
    
    unordered_map<int, int> m;
    for(int i=0; i<size; i++){
        m[a[i]]++;
    }
    int res = -1;
    for(auto x: m){
        if(x.second > size/2){
            res = x.first;
        }
    }
    return res;
}
