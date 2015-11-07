import java.util.Scanner;
import java.io.File;
import java.util.Arrays;
import java.io.PrintWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.FileReader;

public class Main {
    public static void main(String[] args) {

        PrintWriter out = new PrintWriter(System.out);

        Scanner in = new Scanner(System.in);

        int[] heights = new int[10010];
        Arrays.fill(heights,0);

        int min=10010,max=0;

        while(in.hasNext()) {
            int start = in.nextInt();
            int height = in.nextInt();
            int end = in.nextInt();
            if(end>max)max=end;
            if(start<min)min=start;
            for(int i=start; i<=end; i++)
                if(height>heights[i])
                    heights[i] = height;
        }

        heights = Arrays.copyOfRange(heights,0,max+2);

        for(int i=min; i<=max+1; i++) {
            if(i!=min && heights[i-1]!=heights[i])
                out.print(" ");
            if(heights[i-1]<heights[i])
                out.print(i + " " + heights[i]);
            else if(heights[i-1]>heights[i])
                out.print(i-1 + " " + heights[i]);
        }
        out.println();
        out.close();

    }
}
