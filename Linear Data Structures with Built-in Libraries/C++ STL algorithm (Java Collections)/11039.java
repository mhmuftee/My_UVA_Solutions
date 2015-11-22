import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

enum Color {
	BLUE, RED;
}

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(System.out);

		int kase = Integer.parseInt(br.readLine());

		while (kase > 0) {
			kase--;
			int numberOfFloors = Integer.parseInt(br.readLine());

			ArrayList<Block> blocks = new ArrayList<>(numberOfFloors);

			for (int I = 0; I < numberOfFloors; I++) {
				int temp = Integer.parseInt(br.readLine());
				Color color = Color.BLUE;
				if (temp < 0)
					color = Color.RED;
				Block block = new Block(Math.abs(temp), color);
				blocks.add(block);
			}
			Collections.sort(blocks, new Comparator<Block>() {
				@Override
				public int compare(Block b1, Block b2) {
					if (b1.size < b2.size)
						return 1;
					else if (b1.size > b2.size)
						return -1;
					else
						return 0;
				}
			});
			int avaiableFloors = 1;
			if (blocks.size() == 0)
				avaiableFloors = 0;
			if (blocks.size() > 1)
				for (int i = 1; i < blocks.size(); i++) {
					if (blocks.get(i).color != blocks.get(i - 1).color)
						avaiableFloors++;
				}
			out.println(avaiableFloors);
		}
		out.close();
		br.close();
	}
}

class Block {
	Color color;
	int size;

	Block(int size, Color color) {
		this.color = color;
		this.size = size;
	}

	@Override
	public String toString() {
		return String.format("%d %s", size, color);
	}
}

