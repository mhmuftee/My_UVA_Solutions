import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int kase = in.nextInt();
        while(kase>0) {
            BigInteger N = in.nextBigInteger();
            int B = in.nextInt();
            BigInteger sumOfChocolates = BigInteger.ZERO;

            for(int i=0; i<B; i++) {
                int n = in.nextInt();
                int answer = 1;
                BigInteger chocolates = BigInteger.ONE;
                for(int j=0; j<n; j++)
                    chocolates = chocolates.multiply(in.nextBigInteger());
                sumOfChocolates = sumOfChocolates.add(chocolates);
            }
            BigInteger result[]=sumOfChocolates.divideAndRemainder(N);
            System.out.println(result[1]);
            kase--;
        }
    }
}
