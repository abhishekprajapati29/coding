class Solution{
public:
    vector<int> findTwoElement(int arr[], int n) {
        unordered_map<int, bool> m;
        int rep = -1, mis = -1;
        for(int i=0; i<n; i++){
            if(m.find(arr[i]) == m.end()){
                m[arr[i]] = true;
            }
            else{
                rep = arr[i];
            }
        }
        for(int i=1; i<=n; i++){
            if(m.find(i) == m.end()){
                mis = i;
            }
        }
        
        vector<int> res;
        res.push_back(rep);
        res.push_back(mis);
        return res;
    }
};
