import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNextInt()) {
            int number = in.nextInt();
            BigInteger factorial = BigInteger.ONE;
            for(int i=1; i<=number; i++)
                factorial = factorial.multiply(BigInteger.valueOf(i));
            System.out.println(number+"!");
            System.out.println(factorial.toString());
        }
    }
}
