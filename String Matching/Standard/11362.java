import java.util.Scanner;
import java.util.Arrays;

public class Main{
  public static void main(String[] args){
    Scanner in = new Scanner(System.in);
    int kase = in.nextInt();
    while(kase>0){
      int numberOfPhoneNumbers = in.nextInt();
      String[] phoneNumbers = new String[numberOfPhoneNumbers];
      for(int i=0; i<numberOfPhoneNumbers; i++)
        phoneNumbers[i] = in.next();
      Arrays.sort(phoneNumbers);
      String answer = "YES";
      for(int i=1;i<phoneNumbers.length;i++)
        if(phoneNumbers[i].contains(phoneNumbers[i-1])){
          answer = "NO";
          break;
        }
      System.out.println(answer);
    kase--;
    }
  }
}
