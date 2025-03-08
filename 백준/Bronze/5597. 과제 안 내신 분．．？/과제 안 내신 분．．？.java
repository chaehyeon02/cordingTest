import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		boolean[] tasks = new boolean[30];
		int n;

		for(int i = 0; i < 28; i++) {
			n = in.nextInt();
			tasks[n - 1] = true;
		}

		for(int i = 0; i < 30; i++) {
			if(tasks[i] != true) System.out.println(i + 1);
		}
	}
}