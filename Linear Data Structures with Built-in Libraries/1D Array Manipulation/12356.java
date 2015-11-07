import java.util.Arrays;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.InputStream;
import java.util.StringTokenizer;
import java.io.PrintWriter;

class FastScanner {

    BufferedReader in;
    StringTokenizer st;

    FastScanner(InputStream reader) {
        in = new BufferedReader(new InputStreamReader(reader));
    }

    String next() {
        if(st==null || !st.hasMoreTokens()) {
            try {
                st = new StringTokenizer(in.readLine());
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
    }

    int nextInt() {
        return Integer.parseInt(next());
    }

    String nextLine() {
        String line = "";
        try {
            line = in.readLine();
        } catch (Exception e) {
            e.printStackTrace();
        }
        return line;
    }
}


public class Main {
    public static void main(String[] args) {

        FastScanner in = new FastScanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        int S,B;
        while(true) {
            S = in.nextInt();
            B = in.nextInt();
            if(S==0 && B==0)
                break;

            int[] left = new int[S+2];
            int[] right = new int[S+2];

            for(int number=1; number<=S; number++) {
                left[number] = number-1;
                right[number] = number+1;
            }

            while(B>0) {
                int m = in.nextInt();
                int n = in.nextInt();
                if(left[m]==0)
                    out.print("* ");
                else
                    out.print(left[m] + " ");
                if(right[n]==S+1)
                    out.println("*");
                else
                    out.println(right[n]);

                left[right[n]] = left[m];
                right[left[m]] = right[n];
                B--;
            }
            out.println("-");
            out.flush();
        }
    }
}
