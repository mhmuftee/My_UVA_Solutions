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
            String output = factorial.toString();
            int sum = 0;
            for(int i=0; i<output.length(); i++)
                sum += output.charAt(i)-48;
            System.out.println(sum);
        }
    }
}
