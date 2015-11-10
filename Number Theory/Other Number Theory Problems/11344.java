import java.util.Scanner;
import java.math.BigInteger;
import java.io.File;

public class Main {
    public static String dividend;

    static int lastDigit() {
        return dividend.charAt(dividend.length()-1)-48;
    }

    static int sumOfDigits() {
        int sum = 0;
        for(int i=0; i<dividend.length(); i++)
            sum+=dividend.charAt(i)-48;
        return sum;
    }

    static int stringToInt(int length) {
        if(length<=dividend.length()) {
            String s = dividend.substring(dividend.length()-length,dividend.length());
            return Integer.parseInt(s);
        }
        else
            return Integer.parseInt(dividend);
    }

    static int isDivisiableBy2() {

        return(lastDigit()%2==0)?1:0;
    }
    static int isDivisiableBy3() {

        return (sumOfDigits()%3==0)?1:0;
    }
    static int isDivisiableBy4() {

        return(stringToInt(2)%4==0)?1:0;
    }
    static int isDivisiableBy5() {

        return(lastDigit()%5==0)?1:0;
    }
    static int isDivisiableBy6() {

        return(isDivisiableBy2()+isDivisiableBy3()==2)?1:0;
    }
    static int isDivisiableBy7() {
        int[] nums = {1,3,2,6,4,5};

        StringBuilder sb = new StringBuilder(dividend);
        sb.reverse();
        int sum = 0;
        for(int i=0; i<sb.length(); i++)
            sum+=(sb.charAt(i)-48)*(nums[i%6]);
        return (sum%7==0)?1:0;
    }
    static int isDivisiableBy8() {

        return (stringToInt(3)%8==0)?1:0;
    }
    static int isDivisiableBy9() {

        return (sumOfDigits()%9==0)?1:0;
    }
    static int isDivisiableBy10() {
        return(lastDigit()==0)?1:0;
    }
    static int isDivisiableBy11() {

        int sum = 0;
        for(int i=0; i<dividend.length(); i++)
            if(i%2==0)
                sum += dividend.charAt(i)-48;
            else
                sum -= dividend.charAt(i)-48;
        return (sum%11==0)?1:0;
    }
    static int isDivisiableBy12() {

        return (isDivisiableBy4()+isDivisiableBy3()==2)?1:0;
    }
    static int isDivisible(int number) {
        int  returnNumber=0;
        switch(number) {
        case  1: {
            returnNumber = 1;
            break;
        }
        case  2: {
            returnNumber = isDivisiableBy2();
            break;
        }
        case  3: {
            returnNumber = isDivisiableBy3();
            break;
        }
        case  4: {
            returnNumber = isDivisiableBy4();
            break;
        }
        case  5: {
            returnNumber = isDivisiableBy5();
            break;
        }
        case  6: {
            returnNumber = isDivisiableBy6();
            break;
        }
        case  7: {
            returnNumber = isDivisiableBy7();
            break;
        }
        case  8: {
            returnNumber = isDivisiableBy8();
            break;
        }
        case  9: {
            returnNumber = isDivisiableBy9();
            break;
        }
        case 10: {
            returnNumber = isDivisiableBy10();
            break;
        }
        case 11: {
            returnNumber = isDivisiableBy11();
            break;
        }
        case 12: {
            returnNumber = isDivisiableBy12();
            break;
        }
        }
        return returnNumber;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        if(in.hasNextInt()) {
            int kase = in.nextInt();

            while(kase>0) {
                dividend = in.next();

                int size = in.nextInt();
                int[] numbers = new int[size];
                int i = 0;
                for(; i<size;)
                    numbers[i++] = in.nextInt();
                int sum = 0;
                for(int a:numbers)
                    sum+=isDivisible(a);

                System.out.print(dividend + " - ");
                if(sum==size)
                    System.out.println("Wonderful.");
                else
                    System.out.println("Simple.");
                kase--;
            }
        }
    }
}
