function distributeCandies(candyType: number[]): number {
    let n: number = candyType.length;
    let mx: number = Math.floor(n/2);       // given already n is even
    let mp: Map<number,boolean> = new Map();
    let ans: number = 0;
    
    for(let i = 0; i<n; i++){

        if(ans==mx){
            break;
        }

        if(mp.has(candyType[i]))
            continue;
        else{
            ans++;
            mp.set(candyType[i],true);
        }
    }
    return ans;    
};