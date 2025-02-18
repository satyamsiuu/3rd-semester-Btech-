import java.util.*;
class students
{
	int m1,m2,m3,studentId;
	
	students(int id,int a,int b,int c)
	{
		studentId = id;
		m1 = a;
		m2 = b;
		m3 = c;
	}
	
	int totalmarks()
	{
		return m1+m2+m3;
	}
	
	double percentage()
	{
		return (m1+m2+m3)/3;
	}
	
	char gradefind()
	{
		double per  = percentage();
		if(per>=85)
			return 'A';
		else if(per>=70)
			return 'B';
		else if(per>=55)
			return 'C';
		else if(per>=40)
			return 'D';
		else 
			return 'F';
	}
}
			
public class p3
{
	static int indexfinder(students st[],int id,int n)
	{
		for(int i=0;i<n;i++)
		{
			if(st[i].studentId==id)
				return i;
		}
		return -1;
	}
	public static void main(String args[])
	{
		int choice,a,b,c,id;
		Random rand = new Random();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of students: ");
		int n = Integer.parseInt(sc.nextLine());
		students st[] = new students[n];
		System.out.println("Enter marks of students:-");
		for(int i=0;i<n;i++)
		{
			System.out.println("Enter marks of 3 subjects for student-"+(i+1));
			a = sc.nextInt();
			b = sc.nextInt();
			c = sc.nextInt();
			id = rand.nextInt(n+100) + 2023924;
			System.out.println("Generated Id for this student is: "+id);
			st[i] = new students(id,a,b,c);
		}
		sc.nextLine();
		do
		{
			System.out.println("\n-------Student Result Menu-------");	
			System.out.println("1- Total marks");
			System.out.println("2- Percentage");
			System.out.println("3- Grade Analysis");
			System.out.println("4- Exit");
			System.out.print("\nEnter your choice: ");
			choice = Integer.parseInt(sc.nextLine());
			
			switch(choice)
			{
				case 1:	
					System.out.print("Enter Id of Student: ");
					id = Integer.parseInt(sc.nextLine());
					a = indexfinder(st,id,n);
					if(a!=-1)
						System.out.println("Total marks: "+st[a].totalmarks());
					else
						System.out.println("Stdudent not found!!");
				break;
				
				case 2:
					System.out.print("Enter Id of Student: ");
					id = Integer.parseInt(sc.nextLine());
					a = indexfinder(st,id,n);
					if(a!=-1)
						System.out.println("Total marks: "+st[a].percentage());
					else
						System.out.println("Stdudent not found!!");
				break;
				
				case 3:
					System.out.print("Enter Id of Student: ");
					id = Integer.parseInt(sc.nextLine());
					a = indexfinder(st,id,n);
					if(a!=-1)
						System.out.println("Grade: "+st[a].gradefind());
					else
						System.out.println("Stdudent not found!!");
				break;
				
				case 4: break;
				
				default: System.out.println("Wrong Choice!!");
			}
			
		}
		while(choice!=4);
	}
	
}
		
