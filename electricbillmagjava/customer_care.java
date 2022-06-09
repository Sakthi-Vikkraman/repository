import java.util.Scanner;

public class customer_care extends database {
	public String query;
	public int custidq;
	public void u_customer_care(){ 

		int t;
		int temp;
		Scanner sc=new Scanner (System.in);
		System.out.println("Enter the Customer ID :");
		custidq = sc.nextInt;
		System.out.println("Enter your query :");
		query= sc.nextLine();
		for(int i=0; i<n; i++)
		{
			if (custidq==custidarr[i])
			{
				t++;
				temp = i;
			}
		}
		if(t==0)
		{
			System.out.println("Wrong Customer ID!");
			u_customer_care_();
		}
		else
		{
			query = queryarr[temp];
			System.out.println("Thank you, we will get back to you soon!");
		}	
	}
	public void a_customer_care() {
		for (int i=0; i<n; i++)
		{
			System.out.println(custidarr[i] +"  "+ queryarr[i]);
		}
	}
}
