import java.io.*;
import java.util.*;
import java.math.*;
/**
 * NewYearAndHurry
 */
public class AmrandMusic {
    static FastScanner sc = new FastScanner();
    public static void main(String[] args) {
        int n=sc.nextInt();
        int k=sc.nextInt();
        PriorityQueue<int[]> pq=new PriorityQueue<>((a,b)->{
            return a[0]-b[0];
        });
        for(int i=0;i<n;i++){
            int x=sc.nextInt();
            pq.add(new int[]{x,i});
        }
        int sum=0;
        ArrayList<Integer> a=new ArrayList<>();
        while(!pq.isEmpty()&&sum<=k){
            int[] temp=pq.poll();
            sum+=temp[0];
            if(sum<=k)a.add(temp[1]);
        }
        System.out.println(a.size());
        for(int i=0;i<a.size()-1;i++){
            System.out.print((a.get(i)+1)+" ");
        }
        if(a.size()>=1)System.out.print(a.get(a.size()-1)+1);





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
