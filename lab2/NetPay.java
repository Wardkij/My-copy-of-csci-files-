



import java.lang.String;
import java.util.Scanner; //Scanner class user for input

public class NetPay {

	public static void main(String[] args) 
	{
		
		double hoursPerWeek = 0;
		double grossPay = 0;
		double netPay = 0;
		double deduc = 0;
		double fed = 0; //(Federal Tax taken)
		double state = 0;// (state stax taken)
		double socSec = 0; //(Social Security tax taken)
		double medicare = 0; // (Medicare tax taken)
		// Tax Rates
		double FEDERAL_TAX_PERCENT = 10;
		double STATE_TAX_PERCENT = 4.5;
		double SS_PERCENT = 6.2; // social security tax
		double MEDICARE_PERCENT = 1.45;
		double PAY_PER_HOUR = 7.25;
		
		// Asking for data and validating its what we expected
		while (hoursPerWeek <= 0)
		{
			System.out.print("Please Enter Hours worked: ");
			Scanner input = new Scanner(System.in);
			hoursPerWeek = input.nextDouble(); 
			if (hoursPerWeek <=0)
			{
				System.out.println("INVALID, please retype hours worked");
			}
		}
		
		
		//Calculations
		grossPay = (hoursPerWeek * PAY_PER_HOUR);
		
		fed = grossPay * (FEDERAL_TAX_PERCENT/100);
		state = grossPay * (STATE_TAX_PERCENT/100);
		socSec = grossPay * (SS_PERCENT/100);
		medicare = grossPay * (MEDICARE_PERCENT/100);
		
		deduc = fed + state + socSec + medicare;
		
		netPay = grossPay - deduc;
		//Output
		System.out.println();
		System.out.println( "Hours per Week: \t" + hoursPerWeek);
		System.out.println("Gross Pay: \t\t" + grossPay);
		System.out.println("Net Pay: \t \t" + netPay);
		System.out.println();
		System.out.println("Deductions");
		System.out.println("Federal: \t\t" + fed);
		System.out.println("State: \t\t\t" + state);
		System.out.println("Social Security: \t" + socSec);
		System.out.println("Medicare: \t\t" + medicare);
		
		
		
		
		
		
		

	}

}
