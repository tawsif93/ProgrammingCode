import java.math.BigInteger;
import java.util.Scanner;

class LeapYearorNotLeapYear_10070 {
	public static void main(String[] args) {
		Scanner stdin= new Scanner(System.in);
		BigInteger year;
		boolean flag = true ;

		while(stdin.hasNext())
		{
			year = stdin.nextBigInteger();
			boolean leapYear = false;
			boolean ordinaryYear = true;

			if (flag == true) flag = false;
			else System.out.println();

			if(year.mod(BigInteger.valueOf(4))== BigInteger.ZERO  && year.mod(BigInteger.valueOf(100)) != BigInteger.ZERO || year.mod(BigInteger.valueOf(400))== BigInteger.ZERO)
			{
				System.out.println("This is leap year.");
				leapYear = true;
				ordinaryYear = false;
			}

			if(year.mod(BigInteger.valueOf(15))== BigInteger.ZERO)
			{
				System.out.println("This is huluculu festival year.");
				ordinaryYear = false;
			}
			
			if(year.mod(BigInteger.valueOf(55))== BigInteger.ZERO && leapYear== true)
			{
				System.out.println("This is bulukulu festival year.");  
				ordinaryYear = false;
			}
			
			if(ordinaryYear == true)
			{
				System.out.println("This is an ordinary year.");
			}
			
		}
	}
}