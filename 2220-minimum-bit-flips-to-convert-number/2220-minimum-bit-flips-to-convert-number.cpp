class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int count = 0;
        while(start > 0 || goal > 0)
        {
            int temp1 = start%2;
            int temp2 = goal%2;
            
            if(temp1!=temp2)
            {
                count++;
            }
            
            start/=2;
            goal/=2;
            
        }
        return count;
    }
}; 