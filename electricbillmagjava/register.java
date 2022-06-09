import java.util.Scanner;

public class register {
	Scanner sc=new Scanner(System.in);
	int found=0;
	register(){
		System.out.println("enter your username");
		String username=sc.nextLine();
		for (int i=0;i<n;i++) {
			if(username==username[i]) {
				found=1;
			}
		}
		n++;
		if (found!=1) {
			System.out.println("Enter your password");
			password[n]=sc.nextLine();
			username[n]=username;
			
		}
	}
	
}