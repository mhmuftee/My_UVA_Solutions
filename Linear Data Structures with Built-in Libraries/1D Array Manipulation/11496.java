import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main11496 {
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(System.out);
		String line;
		while((line = br.readLine())!=null){
			int numbers = Integer.parseInt(line);
			if(numbers==0)
				break;
			int[] numberStorage = new int[numbers+5];
			String[] tokens = br.readLine().split("\\s+");
			int picks = 0;
			for(int I=0;I<numbers;I++)
				numberStorage[I] = Integer.parseInt(tokens[I]);
			for(int I=0;I<numbers;I++){
				int a = numberStorage[I];
				int b = numberStorage[(I+1)%numbers];
				int c = numberStorage[(I+2)%numbers];
				if((b>a && b>c) || (b<a && b<c))
					picks++;
			}
			out.println(picks);
		}
		br.close();
		out.close();
	}
}

