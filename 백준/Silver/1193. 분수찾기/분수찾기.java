import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        int line, range = 1;

        for(line = 1; n > range; line++) {
            range += line + 1;
        }

        if(line % 2 == 1)
            System.out.print((range - n + 1) + "/" + (line - range + n));
        else System.out.print((line - range + n) + "/" + (range - n + 1));
    }
}