import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        printDecreasing(10);
    }

    public static void printDecreasing(int n){
        if(n == 0){
            return;
        }
        
        System.out.print(n);
        System.out.println(" ");
        
        printDecreasing(n-1);
    }

}
