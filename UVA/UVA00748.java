import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.Scanner ;

class UVA00748 
{
	public static void main(String[] args) 
	{
		int exponent;
		String input;

		Scanner stdin = new Scanner(System.in);
	
		while(stdin.hasNext())
		{

			BigDecimal w = new BigDecimal(stdin.next());
			exponent = stdin.nextInt();
			

			w = w.pow(exponent);

			StringBuffer s = new StringBuffer( w.toPlainString());
			int length = s.length();
			length--;
		
			while(true)
			{
				if(s.charAt(length) == '0')
				{
					s= s.deleteCharAt(length);
					length--;
				}
				else break;
			}


			if( w.toBigInteger() == BigInteger.ZERO  )
			{
				s = s.deleteCharAt(0);
				System.out.println(s.toString());

			}
			else
			{
				System.out.println(s.toString());		
			}
		
		}	
		stdin.close();
	}
}