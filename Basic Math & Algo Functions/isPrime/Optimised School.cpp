// Optimised School Method

    bool isPrime(int n){
        
        if(n ==1 )
            return 0;
            
        else if( n==2 or n==3 )
            return 1;
        
        for(int i =  2 ; i<=pow(n,0.5); i++){
            if(n%i == 0)
                return 0;            
        }
        
        return 1;
        
    }