
public class Messing_around {

	public static void main(String[] args) {
		int Var = 1;
		int count = 0;
		int marker = 0;
		System.out.println(Var);
		while(Var == 1)
		{
			System.out.println("TEST");
			count++;
			if(count == 4)
			{
				Var++;
			}
			
		}
		for(int i=0; i<10; i++)
		{
			System.out.println("Count is " + i);
		}
		for (int i = 1; i < 4; i++)
		{
			for (int j=1; j< 4; j ++)
			{
				System.out.print(i+"/"+j+" ");
				if(i==2 && j==2)
				{
					marker = 2;
				}
			}
			System.out.println();
			if (i == 2 && marker == 2);
			{
				System.out.println("X");
				marker = 3;
			}
		}
		
	}

}
