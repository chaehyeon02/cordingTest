import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n, max = 0, id = -1;
		int[] numbers = new int[9];
		for(int i = 0; i < 9; i++) {
			n = in.nextInt();
			if(n > max) {
				max = n;
				id = i;
			}
		}

		System.out.println(max);
		System.out.println(id + 1);
	}
}