package contest.con4;

import java.io.*;
import java.util.*;
import java.math.*;

public class Quest {
    static FastScanner sc = new FastScanner();
    public static void main(String[] args) {
        int t=sc.nextInt();
        while(t<0){
            t--;
            int n=sc.nextInt();
            int k=sc.nextInt();
            int[] arr=new int[n];
            int[] next=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            for(int i=0;i<n;i++){
                next[i]=sc.nextInt();
            }
            System.out.println(help(n,k,arr,next));
        }
    }
    public static int help(int n,int k,int arr[],int next[]){
        PriorityQueue<int[]> pq=new PriorityQueue<>((int[] a,int[] b)->{
            return b[0]-a[0];
        });
        int i=0;
        int j=0;
        pq.add(new int[]{arr[i++],0});
        int val=0;
        for(int i1=0;i1<k;i1++){
            int[] temp=pq.poll();
            val+=temp[0];
            if(temp[1]==1)pq.add(temp);
            else{
                pq.add(new int[]{arr[i++],0});
                pq.add(new int[]{next[j++],1});
            }
        }
        return val;
    }




    static class FastScanner {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st=new StringTokenizer("");
		String next() {
			while (!st.hasMoreTokens())
				try {
					st=new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			return st.nextToken();
		}
		
		int nextInt() {
			return Integer.parseInt(next());
		}
		int[] readArray(int n) {
			int[] a=new int[n];
			for (int i=0; i<n; i++) a[i]=nextInt();
			return a;
		}
		long nextLong() {
			return Long.parseLong(next());
		}
		double nextDouble() {
		    return Double.parseDouble(next());
		}
    }
}
