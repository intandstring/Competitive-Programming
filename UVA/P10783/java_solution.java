package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int testCases;
        int lowerLimit;
        int upperLimit;
        int sum;
        Scanner scanner = new Scanner(System.in);

        testCases = scanner.nextInt();
        for (int i = 1; i <= testCases; i++){
            sum = 0;
            lowerLimit = scanner.nextInt();
            upperLimit = scanner.nextInt();
            for (int j = lowerLimit; j <= upperLimit; j++){
                if (j % 2 != 0){
                    sum += j;
                }
            }
            System.out.println("Case " + i + ": " + sum);
        }
    }
}
