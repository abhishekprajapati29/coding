vector<string> AllPossibleStrings(string s){
    vector<string> v;
    int size = s.length();
    
    int power_set_size=pow(2, size);
    
    for(int counter=1; counter<power_set_size; counter++){
        string temp;
        for(int j=0; j<size; j++){
            if(counter & (1<< j)){
                temp += s[j];
            }
        }
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    return v;
}
