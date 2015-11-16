import java.io.BufferedReader;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);

        String haikuLine;

        while(true) {
            haikuLine = br.readLine();
            if(haikuLine.equals("e/o/i"))
                break;
            String[] haikus = haikuLine.split("/");
            int[] haikuLength = new int[3];
            int index=0;
            for(String haiku:haikus) {
                String newS = haiku.replaceAll("[a-z &&[^aeiouy]]"," ").trim();
                String[] S = newS.split("\\s+");
                haikuLength[index++] = S.length;
            }

            if(haikuLength[0]==5 && haikuLength[1]==7 && haikuLength[2]==5)
                out.println("Y");
            else if(haikuLength[0]!=5)
                out.println("1");
            else if(haikuLength[1]!=7)
                out.println("2");
            else
                out.println("3");
            out.flush();
        }
    }
}
