import java.util.Scanner;

public class announcement{
	Scanner sc=new Scanner(System.in);
	void getannouncement(){
		System.out.println("Enter your username");
		String username=sc.nextLine();
		for (int i =0;i<n;i++) {
			if (username==adminusername[i]){
				System.out.println("Enter your password");
				String password=sc.nextLine();
				if (password==adminpassword[i]) {
					System.out.println("Enter the new announcement");
					announcement[20]= sc.nextLine();
				}
			}
		}
		System.out.println("Enter your password");
	}
	void putannouncement() {
		for (int i=0;i<n;i++) {
		System.out.println(announcement[i]+"/n by:"+adminname[i]);
		}
	}
}