import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n, x;
		int[] numbers = new int[10000];

		n = in.nextInt();
		x = in.nextInt();
		for(int i = 0; i < n; i++) numbers[i] = in.nextInt();
		for(int i = 0; i < n; i++) {
			if(numbers[i] < x) System.out.print(numbers[i] + " ");
		}
	}
}