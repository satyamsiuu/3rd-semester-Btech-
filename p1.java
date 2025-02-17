import java.util.*;
public class p1
{
	public static void main(String args[])
	{
		int n1,n2,m1,m2;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter rows and columns of first array: ");
		n1 = sc.nextInt();
		m1 = sc.nextInt();
		int a[][] = new int[n1][m1];
		
		System.out.println("Input elements in the array:-");
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m1;j++)
				a[i][j] = sc.nextInt();
		}
		
		System.out.print("Enter rows and columns of second array: ");
		n2 = sc.nextInt();
		m2 = sc.nextInt();
		int b[][] = new int[n2][m2];
		
		System.out.println("Input elements in the array:-");
		for(int i=0;i<n2;i++)
		{
			for(int j=0;j<m2;j++)
				b[i][j] = sc.nextInt();
		}
		
		if(m1==n2)
		{
			int c[][] = new int[n1][m2];
			
		}
		else
			System.out.println("The array cant be multiplid");

		
		System.out.println("The array is:-");
		for(int i=0;i<n1;i++)
		{
			for(int j=0;j<m1;j++)
				System.out.print(a[i][j]+" ");
			System.out.println();
		}						
	}
}
