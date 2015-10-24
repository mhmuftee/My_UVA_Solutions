import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()) {
            BigInteger a = in.nextBigInteger();
            String s = in.next();
            BigInteger b = in.nextBigInteger();
            BigInteger result[] = a.divideAndRemainder(b);
            BigInteger print = s.contains("/")?result[0]:result[1];
            System.out.println(print);
        }
    }
}
