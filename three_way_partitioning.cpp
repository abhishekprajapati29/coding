class Solution{   
public:
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        int start = 0, end=array.size()-1,low=a, high=b;
        for(int i=0; i<=end;){
            if (array[i]<low){
                swap(array[i++], array[start++]);
            }
            else if(array[i]>high){
                swap(array[i], array[end--]);
            }
            else{
                i++;
            }
        }
    }
};
