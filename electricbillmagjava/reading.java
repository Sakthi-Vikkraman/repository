public class reading extends database{
                public int custidr;
		public int wattused;
	public void reading_(){

		
		int t;
		int temp;
		Scanner sc=new Scanner (System.in);
		System.out.println("Enter the Customer ID :");
		custidr = sc.nextInt;
		System.out.println("Enter the reading :");
        wattused= sc.nextInt();
		for(int i=0; i<n; i++)
		{
			if (custidr==custidarr[i])
			{
				t++;
				temp = i;
			}
		}
		if(t==0)
		{
		System.out.println("Wrong Customer ID!");
		reading_();
		}
		else
		{
			wattused = wattarr[temp];
		}
	}
}	