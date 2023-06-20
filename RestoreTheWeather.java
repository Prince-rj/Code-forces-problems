import java.io.*;
import java.util.*;
import java.math.*;
/**
 * NewYearAndHurry
 */
public class RestoreTheWeather {
    static FastScanner sc = new FastScanner();
    public static void main(String[] args) {
        int t=sc.nextInt();
        while(t>0){
            t--;
            solve();
            System.out.println();
        }
    }
    public static void solve(){
        int n=sc.nextInt();
        int k=sc.nextInt();
        int a[]=new int[n];
        for(var i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        int b[]=new int[n];
        for(var i=0;i<n;i++){
            b[i]=sc.nextInt();
        }
        Arrays.sort(b);
        PriorityQueue<int[]> pq=new PriorityQueue<>((x,y)->{
            return x[0]-y[0];
        });
        for(var i=0;i<n;i++){
            pq.add(new int[]{a[i],i});
        }
        int ind=0;
        while(!pq.isEmpty()){
            int[] temp=pq.poll();
            a[temp[1]]=b[ind++];
        }
        for(var i:a)System.out.print(i+" ");
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
