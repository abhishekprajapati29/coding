class Solution {
public:
    bool isValidPart(string s){
        int n = s.length();
        if(n>3) return false;
        for(int i=0; i<n; i++){
            if(s.find('0') == 0 && n>1){
                return false;
            }
            if((s[i]>= '0' && s[i]<='9') == false){
                return false;
            }
        }
        stringstream g(s);
        int x;
        g >> x;
        return (x>=0 && x<=255);
        
    }
    
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        int n = s.length();
        for(int i=1; i<n && i<4; i++){
            string first = s.substr(0, i);
            if(!isValidPart(first)){
                continue;
            }
            for(int j=1; i+j<n && j<4; j++){
                string second = s.substr(i, j);
                if(!isValidPart(second)){
                    continue;
                }
                for(int k=1; i+j+k<n && k<4; k++){
                    string third = s.substr(i+j, k);
                    string fourth = s.substr(i+j+k);
                    if(!isValidPart(third) || !isValidPart(fourth)){
                        continue;
                    }
                    res.push_back(first+ '.' + second+'.'+third+'.'+fourth);

                }
                
            }
        }
        return res;
    }
};
