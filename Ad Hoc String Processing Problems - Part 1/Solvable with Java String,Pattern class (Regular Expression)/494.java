import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.io.IOException;

public class Main{
  public static void main(String[] args)throws IOException{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    PrintWriter out = new PrintWriter(System.out);
    String input;
    while((input=br.readLine())!=null){
      String words[] = input.split("[^a-zA-z]+");
      int numberOfWords = 0;
      for(String s:words)
        if(!s.isEmpty())
          numberOfWords++;
      out.println(numberOfWords);
      out.flush();
    }
  }
}
