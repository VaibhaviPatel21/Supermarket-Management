//Write a Program to sort a given sentence. Sorting should be done for individual word. ( Ignore Case, Without using in-built string sorting functions. And, use minimal in-built functions.) i.e. Today is Tuesday -> adoTy is adesTuy

import java.util.Arrays;
import java.util.Scanner;
  
public class sort 
{
    
    public static String sortString(String name)
    {
        
        char tempArray[] = name.toCharArray();
          
        
        Arrays.sort(tempArray);
          
        
        return new String(tempArray);
    }
      
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("enter the string: ");
        String name = in.nextLine();
        String outputString = sortString(name);
          
        System.out.println("Input String : " + name);
        System.out.println("Output String : " + outputString);
    }
}