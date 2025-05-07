class Solution {
    public:
      bool checkKthBit(int n, int k) {
         
         with the help of the leftshift operator
         
         
        if((n&(1<<k)) != 0){
            return true;
        }
        
        return false;
   
      }
  };