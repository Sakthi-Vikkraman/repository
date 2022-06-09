import java.util.Scanner;

public class user extends database{
	public void user_(){
	int chc;
	Scanner sc=new Scanner (System.in);
	System.out.println("Enter 1 to pay bill");
        System.out.println("Enter 2 to use customer care")
	System.out.println("Enter 3 to give feedback");
	chc=sc.nextInt();
	if (chc !=1 || chc !=2 || chc !=3 || chc!=4) {
		System.out.println("Enter the given choice alone only!");
		System.out.println("                  ");
	    user_();
	}
	switch (chc) {
	  case 1:		 
			payment();
	  case 2:
		        u_customer_care(); 
	  case 3:
		        feedback();
	  
		  
	}
    }
}

