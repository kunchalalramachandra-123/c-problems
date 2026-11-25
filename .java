
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int R = sc.nextInt();

        if (R == 2)
            System.out.println(5);
        else
            System.out.println(8 - R);
    }
}
