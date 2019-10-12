import java.util.Scanner;

public class DiagonalDifference {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        scanner.nextLine();
        int diag1Sum = 0;
        int diag2Sum = 0;
        for(int i = 0; i < n; i++) {
            String[] row = scanner
                        .nextLine()
                        .split(" ");
            for(int j = 0; j < n; j++) {
                if(i == j) {
                    diag1Sum += Integer.parseInt(row[j]);
                    diag2Sum += Integer.parseInt(row[n-1-j]);
                }
            }
        }
        
        System.out.println(Math.abs(diag1Sum-diag2Sum));
        scanner.close();
    }
}