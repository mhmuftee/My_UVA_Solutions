import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;

public class Main {
	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(System.out);

		String line;

		while ((line = br.readLine()) != null) {
			int numbers = Integer.parseInt(line);
			int[] numbersStorage = new int[numbers];
			for (int I = 0; I < numbers; I++)
				numbersStorage[I] = Integer.parseInt(br.readLine());
			Arrays.sort(numbersStorage);
			int A = (numbersStorage.length % 2 == 0) ? numbersStorage[numbersStorage.length / 2 - 1]
					: numbersStorage[numbersStorage.length / 2];

			int satisfiedNumbersInInput = 0;
			for (Integer number : numbersStorage)
				if (A == number)
					satisfiedNumbersInInput++;
			if(numbersStorage.length%2==0)
				for (Integer number : numbersStorage)
					if (numbersStorage[numbersStorage.length/2] == number && A!=number)
						satisfiedNumbersInInput++;

			int satisfiedNumbers = (numbersStorage.length % 2 == 0)
					? (numbersStorage[numbersStorage.length / 2]) - (numbersStorage[numbersStorage.length / 2 - 1]) + 1
					: 1;

			out.println(A + " " + satisfiedNumbersInInput + " " + satisfiedNumbers);
		}
		br.close();
		out.close();
	}
}

