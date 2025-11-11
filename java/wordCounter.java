import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
      
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a sentence");
        String sentence = scanner.nextLine();

        String[] words = sentence.trim().split("\\s+");
        System.out.printf("This sentence has %d words!", words.length);

    }
}
