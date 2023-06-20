import java.io.*;
import java.util.*;
import java.math.*;
/**
 * NewYearAndHurry
 */
public class MusicalPuzzle {
    static FastScanner sc = new FastScanner();
    public static void main(String[] args) {
        int t=sc.nextInt();
        while(t>0){
            t--;
            solve();
        }


    }
    static void solve(){
        int n=sc.nextInt();
        String s=sc.next();
        HashSet<String> hs=new HashSet<>();
        for(int i=1;i<n;i++){
            String x=s.substring(i-1, i+1);
            hs.add(x);
        }
        System.out.println(hs.size());
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
