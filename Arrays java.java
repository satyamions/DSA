import java.util.*;


public class Main
{
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		
		//int[] arr = new int[3];
		//arr[0] = 23;
		//arr[1] = 45;
		//arr[2] = 300;
		//
		//System.out.println(arr[2]);
		//
		//for (int i = 0;i<arr.length;i++){
		//    arr[i] = in.nextInt();
		//} 
		//
		//for(int i = 0;i<arr.length;i++){
		//    System.out.println(arr[i]);
		//}
		//
		//for(int num : arr){
		//    System.out.print(num + " ");
		//}
		
		//Printing array
		//String[] str = new String[4];
		//for(int i = 0; i<str.length; i++){
		//    str[i] = in.next();
		//}
		//
		//System.out.println(Arrays.toString(str));
		
		//2D Arrays
		int[][][] arr = { { { 1, 2 }, { 3, 4 } },
                        { { 5, 6 }, { 7, 8 } } };
  
        for (int i = 0; i < 2; i++) {
  
            for (int j = 0; j < 2; j++) {
  
                for (int k = 0; k < 2; k++) {
  
                    System.out.print(arr[i][j][k] + " ");
                }
  
                System.out.println();
            }
            System.out.println();
        }
        
        //Program to swap number in an array.
        int arrgg[] = {1,2,3,4,5};
        int temp = arrgg[1];
        arrgg[1] = arrgg[3];
        arrgg[3] = temp;
        
        System.out.println( Arrays.toString(arrgg));
        
        //Maximum item in an array.
        int arrpp[] = {1,34,56,3};
        int max_val = arrpp[0];
        for(int i=0; i<arrpp.length; i++){
            if(arrpp[i] > max_val){
                max_val = arrpp[i];
            }
        }
        System.out.println(max_val);
        
        
        //Reverse an array.
        int arrmm[] = {1,2,3,4,5}; 
        int start = 0;
        int end = arrmm.length-1;
        
        while(start < end){
            int temp1 = arrmm[start];
            arrmm[start] = arrmm[end];
            arrmm[end] = temp1;
            start++;
            end--;
        }
        
        System.out.println(Arrays.toString(arrmm));
    }
}