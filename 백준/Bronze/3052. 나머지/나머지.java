import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n, result = 0;
		int[] cnts = new int[42];
		Arrays.fill(cnts, 0);

		for(int i = 0; i < 10; i++) {
			n = in.nextInt();
			cnts[n % 42]++;
		}

		for(int i = 0; i < 42; i++) {
			if(cnts[i] > 0) result++;
		}
		System.out.print(result);
	}
}