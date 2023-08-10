    char shift(char a, int n){
        int i = a - 'a';
        i = (i+n)%26;
        
        //negative case
        if(i<0)
            i = i+26;
        
        return 'a' + i;
    }