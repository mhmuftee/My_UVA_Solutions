import java.math.BigInteger;
import java.util.Scanner;
import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()) {
            String input = new String(in.next());
            char[] number = input.toCharArray();
            Arrays.sort(number);
            String f = new String(number);

            StringBuilder backward = new StringBuilder(f);

            backward.reverse();
            String forward = backward.toString();
            backward.reverse();

            int index = 0;
            for(int i=0; i<backward.length(); i++)
                if(backward.charAt(i)!='0') {
                    index = i;
                    break;
                }
            if(index!=0) {
                char a = backward.charAt(0);
                backward.setCharAt(0,backward.charAt(index));
                backward.setCharAt(index,a);
            }

            BigInteger a = new BigInteger(forward);
            BigInteger b = new BigInteger(backward.toString());
            BigInteger c;

            c = a.subtract(b);
            System.out.println(a + " - " + b + " = " + c + " = 9 * " + c.divide(BigInteger.valueOf(9)));
        }
    }
}
