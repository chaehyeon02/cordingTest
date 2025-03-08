import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
		Scanner in = new Scanner(System.in);

		int n, m;
		n = in.nextInt();
		m = in.nextInt();
		int[] nums = new int[n + 1];

		for(int i = 1; i <= n; i++) nums[i] = i;

		for(int i = 0; i < m; i++) {
			int a = in.nextInt();
			int b = in.nextInt();
			int tmp = nums[b];
			nums[b] = nums[a];
			nums[a] = tmp;
		}

		for(int i = 1; i <= n; i++) System.out.print(nums[i] + " ");
	}
}