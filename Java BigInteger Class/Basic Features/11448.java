import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int kase=in.nextInt();
        while(kase>0) {
            BigInteger a = in.nextBigInteger();
            BigInteger b = in.nextBigInteger();
            System.out.println(a.subtract(b));
            kase--;
        }
    }
}
