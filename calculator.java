import java.util.Scanner;

public class calculator {
    static public void main(String[] args){
        Scanner scan = new Scanner(System.in);
        char ope;
        double total = 0;

        System.out.print("     Calculator\n");
        System.out.print("---------------------\n");
        System.out.print("+ = Addition\n");
        System.out.print("- = Subtraction\n");
        System.out.print("* = Multiplication\n");
        System.out.print("/ = Division\n");
        System.out.print("---------------------\n");

        System.out.print("Enter your number1: ");
        double num1 = scan.nextDouble();
        System.out.print("Enter your number2: ");
        double num2 = scan.nextDouble();

        do{
        System.out.print("Enter your Operator: ");
        ope = scan.next().charAt(0);
        switch (ope) {
            case '+':
                total = num1 + num2;
                break;
            case '-':
                total = num1 - num2;
                break;
            case '*':
                total = num1 * num2;
                break;
            case '/':
                total = num1 / num2;
                break;
            default:
                System.out.print("Invalid choice\n");
        }
        if (total == (int) total){
            System.out.print("Answer for " + (int) num1 + " " + ope + " " + (int) num2 + " is " + (int) total);
        }
        else {
            System.out.print("Answer for " + num1 + " " + ope + " " + num2 + " is " + total);
        }
        }while (ope != '+' && ope != '-' && ope != '*' && ope != '/');
    }
}

