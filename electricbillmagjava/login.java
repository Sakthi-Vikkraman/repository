import java.util.Scanner;

public class login extends database{
	login(){
		int n,Try;
		String username,password;
		Scanner sc=new Scanner (System.in);
		System.out.println("Enter the username");
		username=sc.nextLine();
		for (int i=0;i<n;i++) {
		if (this.username==username[i]){
			password=sc.nextLine();
			for(int j=0;j<3;j++) {
			if (this.password==password[i]) {
				System.out.println("sucessfully loggedin");
			}
			else {
				System.out.println("wrong password");
				Try++;
			}
			if (Try==3) {
				System.out.println("exced the try warning message whas been sent to the user");
			}
			}
			break;
		}
			
		}
		
	}
}