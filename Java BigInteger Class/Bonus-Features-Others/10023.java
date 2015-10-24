import java.math.BigDecimal;
import java.util.Scanner;
import java.math.BigInteger;

class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Boolean newLine = false;
        int kase = in.nextInt();
        while(kase>0) {
            if(newLine)
                System.out.println();
            String number = in.next();
            BigDecimal N = new BigDecimal(number);
            BigInteger M = new BigInteger(number);
            int length = number.length();
            length /= 2;
            BigDecimal root = BigDecimal.valueOf(10);
            root = root.pow(length);
            for(;;) {
                BigDecimal fx0 = (root.multiply(root)).subtract(N);
                BigDecimal fx1 = root.multiply(BigDecimal.valueOf(2));
                fx0 = fx0.divide(fx1,10,BigDecimal.ROUND_HALF_UP);
                BigDecimal next = root.subtract(fx0);
                BigInteger num = root.toBigInteger();
                if(M.equals(num.multiply(num)))
                    break;
                if(root.equals(next))
                    break;
                root = next;
            }
            kase--;
            newLine = true;
            System.out.println(root.toBigInteger());
        }
    }
}
