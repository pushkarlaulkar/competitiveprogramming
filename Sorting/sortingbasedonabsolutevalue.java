import java.util.*;
public class sortmethisway{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int neg = 0, pos = 0, i, j, k, pi, ni, n = in.nextInt(); long a[] = new long[n];
		for(i = 0; i < n; i++){
			a[i] = in.nextInt();
			if(a[i] < 0)	neg++;
				else	pos++;
		}
		long na[] = new long[neg], pa[] = new long[pos];
		for(i = j = k = 0; i < n; i++){
			if(a[i] < 0){na[j] = a[i]; j++;}
				else{pa[k] = a[i]; k++;}
		}
		Arrays.sort(pa); Arrays.sort(na);
		pi = 0; ni = neg - 1;
		while(pi < pos && ni >= 0){
			if(pa[pi] < Math.abs(na[ni])){System.out.print(pa[pi] + " "); pi++;}
				else if(pa[pi] > Math.abs(na[ni])){System.out.print(na[ni] + " "); ni--;}
		}
		if(ni >= 0){
			for(; ni >= 0; ni--)	System.out.print(na[ni] + " ");		
		}
		if(pi < pos){
			for(; pi < pos; pi++)	System.out.print(pa[pi] + " ");
		}
	}
}


