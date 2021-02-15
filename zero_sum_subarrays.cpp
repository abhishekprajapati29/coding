ll findSubarray(vector<ll> arr, int n ) {
    unordered_map<int, vector<int>> map;
    ll sum = 0;
    ll count = 0;
    vector <pair<int, int>> out; 
    for(int i=0; i<n;i++){
        sum += arr[i];
        
        if(sum == 0 ){
            count++;
            out.push_back(make_pair(0, i));
        }
        
        if(map.find(sum) != map.end() ){
            count++;
            vector<int> vc = map[sum]; 
            for (auto it = vc.begin(); it != vc.end(); it++) 
                out.push_back(make_pair(*it + 1, i));
        }
        
        map[sum].push_back(i);
    }
    return out.size();
}
