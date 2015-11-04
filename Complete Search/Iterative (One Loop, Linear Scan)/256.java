import java.util.Scanner;
import java.math.BigInteger;

public class Main {

    static void print(int number,int n) {

        String output = new String();
        if(n==2)
            System.out.println(String.format("%02d",number));
        else if(n==4)
            System.out.println(String.format("%04d",number));
        else if(n==6)
            System.out.println(String.format("%06d",number));
        else if(n==8)
            System.out.println(String.format("%08d",number));

    }

    static void calculate(int n) {
        int firstNumber = 0;
        int lastNumber = (int) Math.pow(10,n)-1;
        int divider = (int) Math.pow(10,n/2);
        for(int number=firstNumber; number<=lastNumber; number++) {
            int x = number/divider;
            int y = number%divider;
            if((x+y)*(x+y)==number)
                print(number,n);
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        while(in.hasNextInt()) {
            int n = in.nextInt();
            calculate(n);
        }
    }
}
