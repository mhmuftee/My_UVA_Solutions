import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.PrintWriter;
 
class Main{
  public static void main(String[] args){
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    PrintWriter out = new PrintWriter(System.out);

    while(true){
      String input = null;
        try{
          input = br.readLine();
        } catch (Exception e) {
           e.printStackTrace();
        }

      if(input==null) break;
      int numbers[] = new int[9];
 
      StringTokenizer st = new StringTokenizer(input);
      int i = 0;
      while(st.hasMoreTokens())
      numbers[i++] = Integer.parseInt(st.nextToken());
 
      int s = 0;
 
      for(int a:numbers)
        s+=a;
      String result="";
      int min=s;
      if(s-numbers[0]-numbers[5]-numbers[7]<min){
        min = s-numbers[0]-numbers[5]-numbers[7];
        result = "BCG";
      }
      if(s-numbers[0]-numbers[4]-numbers[8]<min){
        min = s-numbers[0]-numbers[4]-numbers[8];
        result = "BGC";
      }
      if(s-numbers[2]-numbers[3]-numbers[7]<min){
        min = s-numbers[2]-numbers[3]-numbers[7];
        result = "CBG";
      }
      if(s-numbers[2]-numbers[4]-numbers[6]<min){
        min = s-numbers[2]-numbers[4]-numbers[6];
        result = "CGB";
      }
      if(s-numbers[1]-numbers[3]-numbers[8]<min){
        min = s-numbers[1]-numbers[3]-numbers[8];
        result = "GBC";
      }
      if(s-numbers[1]-numbers[5]-numbers[6]<min){
        min = s-numbers[1]-numbers[5]-numbers[6];
        result = "GCB";
      }
      out.println(result + " " + min);
      out.flush();
    }
  }
}
