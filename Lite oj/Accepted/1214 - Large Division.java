import java.math.BigInteger;
import java.util.Scanner;
class Main {

	public static void main(String[] args) {
		int t;
		Scanner oj = new Scanner(System.in);

		t= oj.nextInt();
		String nom,denom;

		for (int i = 0; i < t; i++) {
			nom = oj.next();
			denom = oj.next();
			BigInteger a = new BigInteger(nom);
			BigInteger b = new BigInteger(denom);

			if( a.remainder(b) == BigInteger.ZERO) System.out.println("Case " + (i+1) + ": divisible" );
			else System.out.println("Case " + (i+1) + ": not divisible" );
		}
		oj.close();
	}

}
