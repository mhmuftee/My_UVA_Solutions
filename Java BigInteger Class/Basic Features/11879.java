import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()) {
            BigInteger a = in.nextBigInteger();
            if(a.equals(BigInteger.ZERO)) break;
            BigInteger result[] = a.divideAndRemainder(BigInteger.valueOf(17));
            Integer print = result[1].equals(BigInteger.ZERO)?1:0;
            System.out.println(print);
        }
    }
}

