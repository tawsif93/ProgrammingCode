import java.math.BigInteger;
import java.util.Scanner ;

class UVA00713 {
	public static void main(String[] args) {
		int cases;
		String input;

		Scanner stdin = new Scanner(System.in);

		cases = stdin.nextInt();
		for (int i = 0 ; i < cases ; i++ ) 
		{		
			input = stdin.next();
			
			input = new StringBuffer(input).reverse().toString();
			BigInteger a = new BigInteger(input);
			
			input = stdin.next();
			input = new StringBuffer(input).reverse().toString();
			BigInteger b = new BigInteger(input);

			b = b.add(a);

			input = b.toString();
			input = new StringBuffer(input).reverse().toString();

			BigInteger c = new BigInteger(input);

			System.out.println(c);

		}
		stdin.close();
	}	
}
