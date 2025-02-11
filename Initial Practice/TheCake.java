import java.io.*;
import java.util.*;
import java.math.*;
/**
 * NewYearAndHurry
 */
public class TheCake{
    static FastScanner sc = new FastScanner();
    public static void main(String[] args) {
        int t=sc.nextInt();
        while(t>0){
            t--;
            solve();
        }

    }
    public static void solve(){
        int n=sc.nextInt();
        int m=sc.nextInt();
        int k=sc.nextInt();
        Boolean dp[][]=new Boolean[n][m];
        boolean h=help(0,0,n,m,k,dp);
        if(h)System.out.println("yes");
        else System.out.println("no");
    }
    static boolean help(int i,int j,int n,int m,int tar,Boolean dp[][]){
        if(tar<0)return false;
        if(i==n-1&&j==m-1){
            if(tar==0)return true;
        }
        if(i==n||j==m)return false;
        if(dp[i][j]!=null)return dp[i][j];
        boolean op1;
        boolean op2;
        //right
        // cost isi;
        op1=help(i,j+1,n,m,tar-i-1,dp);
        //down
        op2=help(i+1,j,n,m,tar-j-1,dp);
        return dp[i][j]=op1||op2;
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
