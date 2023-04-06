import java.util.Scanner;

public class Main1
{
    public static void main(String[] args)
    {
    Scanner in = new Scanner(System.in);
    System.out.print("Enter a string: ");
    String str = in.nextLine();
    System.out.print("Enter the shift number: ");
    int length = str.length();

    int k = Integer.parseInt(in.nextLine());

    k = k % 26;

    System.out.println(Who_Is_Next (str, length, k));

    in.close();
    }

    private static String Who_Is_Next (String str, int length, int shift)
    {
    StringBuilder strBuilder = new StringBuilder();
    char c;
    for (int i = 0; i < length; i++)
    {
        c = str.charAt(i);
        if (Character.isLetter(c))
        {
        c = (char) (str.charAt(i) + shift);

     
        if ((Character.isLowerCase(str.charAt(i)) && c > 'z')
            || (Character.isUpperCase(str.charAt(i)) && c > 'Z'))

            c = (char) (str.charAt(i) - (26 - shift));
        }
        strBuilder.append(c);
    }
    return strBuilder.toString();
    }
}