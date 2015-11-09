import java.util.Scanner;
import java.math.BigInteger;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNextInt()) {
            int number = in.nextInt();
            if(number==0)
                break;
            BigInteger factorial = BigInteger.ONE;
            for(int i=1; i<=number; i++)
                factorial = factorial.multiply(BigInteger.valueOf(i));
            String output = factorial.toString();
            int[] numbers = new int[10];
            Arrays.fill(numbers,0);
            for(int i=0; i<output.length(); i++)
                numbers[output.charAt(i)-48]++;
            System.out.println(number+"! --");
            for(int i=0; i<numbers.length; i++) {
                if(i!=0 && i!=5)
                    System.out.print(" ");
                System.out.print(String.format("   (%d) %4s",i,numbers[i]));
                if((i+1)%5==0)
                    System.out.println();
            }
        }
    }
}
