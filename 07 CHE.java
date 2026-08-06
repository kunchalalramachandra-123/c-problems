package day11;

import java.util.Arrays;

abstract class Transaction {
    int[] statement = {12500,2500,1750,8500,30,9500,3200,5600};

    public void viewStatement()
    {System.out.println(Arrays.toString(statement));}
    public abstract void fraudDetection();
}
public class AbstarctionViaClass extends Transaction{
    public void fraudDetection(){
        Arrays.stream(statement).filter(each->each%500!=0)
        .forEach(System.out::println);
    }
    public static void main(String[] arr){
        AbstarctionViaClass tran = new AbstarctionViaClass();
        tran.viewStatement();
        tran.fraudDetection();
        
    }
}