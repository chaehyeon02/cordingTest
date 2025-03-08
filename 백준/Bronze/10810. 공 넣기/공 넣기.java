import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n, m;
		n = in.nextInt();
		m = in.nextInt();
		int[] nums = new int[n];
		int[] inputs = new int[3];

		for(int i = 0; i < m; i++) {
			for(int j = 0; j < 3; j++) inputs[j] = in.nextInt();
			for(int j = inputs[0] - 1; j < inputs[1]; j++) nums[j] = inputs[2];
		}

		for(int i = 0; i < n; i++) System.out.print(nums[i] + " ");
	}
}