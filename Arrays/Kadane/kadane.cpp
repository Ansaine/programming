long long kadane(vector,<int> arr){
        	
        int n = arr.size();
        long long max_sum = INT_MIN, curr_sum = 0;
        
        for(int i =0; i<n; i++){
            
            curr_sum+= arr[i];
            max_sum = max(max_sum,curr_sum);
            if(curr_sum<0)
                curr_sum = 0;
        }
        
        return max_sum;        
    }