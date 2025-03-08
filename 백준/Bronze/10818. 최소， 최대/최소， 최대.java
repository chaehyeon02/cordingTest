import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n, min = 1000000, max = -1000000;
		n = in.nextInt();
		int[] numbers = new int[1000000];

		for(int i = 0; i < n; i++) numbers[i] = in.nextInt();

		for(int i = 0; i < n; i++) {
			if(numbers[i] < min) min = numbers[i];
			if(numbers[i] > max) max = numbers[i];
		}
		System.out.print(min + " " + max);
	}
}