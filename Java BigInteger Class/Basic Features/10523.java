import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String args[]) {
        Scanner in = new Scanner (System.in);
        while(in.hasNext()) {
            int N = in.nextInt();
            BigInteger A = in.nextBigInteger();
            BigInteger B = BigInteger.ONE;
            BigInteger ans = BigInteger.ZERO;
            for(int i=1; i<=N; i++) {
                B = B.multiply(A);
                BigInteger NN = BigInteger.valueOf(i);
                ans = ans.add(B.multiply(NN));
            }

            System.out.println(ans);
        }
    }
}
