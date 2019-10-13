import java.util.Scanner;

public class PlusMinus {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        scanner.nextLine();

        int pos = 0;
        int neg = 0;
        int zero = 0;
        for(int i = 0; i < n; i++) {
            int next = scanner.nextInt();
            if(next == 0) zero++;
            else if(next > 0) pos++;
            else neg++;
        }
        scanner.close();

        System.out.printf("%.6f\n", (float) pos/n);
        System.out.printf("%.6f\n", (float) neg/n);
        System.out.printf("%.6f\n", (float) zero/n);
    }
}