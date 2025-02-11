import java.util.*;
import java.lang.*;
class Account
{
	String accnt_num;
	double balance;
	String name;
	
	/*Account(String a,double b,String n)
	{
		accnt_num = a;
		balance = b;
		name = n;
	}
	*/
	int finder(String a)
	{
		if(a==accnt_num)
			return 1;
		else
		 	return 0;
	}
	void create(String a,double b,String n);
	{
		accnt_num = a;
		balance = b;
		name = n;
	}
	
	void deposit(double amt)
	{
		balance+=amt;
		System.out.println("Deposited "+ amt + " in the account");
	}
	
	void withdraw(double amt)
	{
		if(amt<=bal)
		{
			bal-=amt;
			System.out.println("Withdrawed "+amt+" from bank account");
		}
		else
			System.out.println("Not enough balance");
	}
	
	void details()
	{
		System.out.println("Account details:-\nName: "+name);
		System.our.println("Account Number: "+accnt_num+"\nBalance: "+balance);
	}
}
public class Bank
{
	public static void main(String args[])
	{
		String a,name;
		double b;
		int ch;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of account holders\n");
		int n =	Integer.parseInt(sc.nextLine());
		Account acc[]= new Account[n];
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter details to make a new account\nAccount no. "+(i+1)+":-");
			System.out.print("Name: ");
			name = sc.nextLine();
			int aa = rand.nextInt(Integer.MAX_VALUE);
			a = Integer.toString(aa);
			System.out.println("Generated Account Number: "+a);
			System.out.print("Balance: ");
			b = Double.parseDouble(sc.nextLine);
			acc[i].create(a,b,name);
			System.out.println("Account created!");
		}
		do
		{
			System.out.println("\nBank Menu:-\n");
			System.out.println("1- Deposit Money");
			System.out.println("2- Withdraw Money");
			System.out.println("3- Account details");
			System.out.print("4- Exit\n\nEnter your choice: ");
			ch = Integer.parseInt(sc.nextLine);
			switch(ch)
			{
				case 1:	int j = 0;
					System.out.print("Enter account number: ");
					String an = sc.nextLine();
					for(int i=0;i<n;i++)
					{
						if(acc[i].finder(an)==1)
						{
							System.out.print("Enter amount to deposit: ");
							double amt = Double.parseDouble(sc.nextLine);
							acc[i].deposit(amt);
							j++;
							break;
						}
					}
					if(j==0)
						System.out.println("Account not found!");
						
				break;
				
				case 2:	int j = 0;
					System.out.print("Enter account number: ");
					String an = sc.nextLine();
					for(int i=0;i<n;i++)
					{
						if(acc[i].finder(an)==1)
						{
							System.out.print("Enter amount to withdraw: ");
							double amt = Double.parseDouble(sc.nextLine);
							acc[i].withdraw(amt);
							j++;
							break;
						}
					}
					if(j==0)
						System.out.println("Account not found!");
						
				break;
						
				case 3: System.out.print("Enter account number: ");
					String an = sc.nextLine();
					for(int i=0;i<n;i++)
					{
						if(acc[i].finder(an)==1)
						{
							acc[i].details(amt);
							j++;
							break;
						}
					}
					if(j==0)
						System.out.println("Account not found!");
						
				break;
				
				case 4: 
					System.out.println("Thank you for using this program");
				break;
				
				default: System.out.println("Wrong Choice!");
			}
		}
		while(ch!=4);
		
	}
}
			
			
			
		
