import java.util.*;

class Solution {
    public int findCheapestPrice(int n, int[][] flights, int src, int dst, int k) {
        
        // graph 
        ArrayList<ArrayList<int[]>> g = new ArrayList<>();
        for(int i = 0; i<n;i++) g.add(new ArrayList<>());
        for(int[] flight : flights){
            int u = flight[0];
            int v = flight[1];
            int w = flight[2];
            
            g.get(u).add(new int[] {v,w});
        }

        Queue<int[]> que = new LinkedList<>();
        ArrayList<Integer> dis = new ArrayList<>(Collections.nCopies(n+1,Integer.MAX_VALUE));
        dis.set(src, 0);
        que.add(new int[] {0,0,src});


        //bfs
        while(que.size()>0){
            int[] top = que.peek();
            int stops = top[0];
            int dist = top[1];
            int node = top[2];
            que.

            for(int[] x : g.get(node)){
                int neighbour = x[1];
                int neighbourDist = x[0];

                if(stops<=k && (dist+neighbourDist)<=dis.get(neighbour)){
                    dis.set(neighbour,dist + neighbourDist);
                    que.add(new int[] {stops+1, dist+neighbourDist, neighbour});
                }
            }

        }



        return dis.get(dst)==Integer.MAX_VALUE?-1:dis.get(dst);
    }
