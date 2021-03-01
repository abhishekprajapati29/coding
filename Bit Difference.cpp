#define ull unsigned long long int 

class Solution{
    public:
    string bin(int n) 
    { 
        string s ;
      
       for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            s += '1';
        else
            s+= "0"; 
       }
       return s;
    } 
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int count = 0;
        string s1 = bin(a);
        string s2 = bin(b);
        
        for(int i=0; s1[i]!='\0'; i++ ){
            if(s1[i] != s2[i] )
            {
                count++;
            }
        }
        return count;
        
    }
};
