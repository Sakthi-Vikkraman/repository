import java.util.Scanner;

public class feedback extends database{
	Scanner sc=new scanner (System.in);
	feedback(){
		String feedback,adminname;
		System.out.println("enter the admin name ");
		adminname =sc.nextLine();
		for (int i=0;i<n;i++) {
		if (adminname==admin[i]){
			System.out.println("enter the feed back");
			feedback[i][0]=sc.nextLine();
		}
		}
	}	
}