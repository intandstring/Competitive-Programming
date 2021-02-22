package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int number;
        int sum;

        number = scanner.nextInt();
        while (number != 0){
            while (number > 10) {
                sum = 0;
                while (number > 0) {
                    sum += (number % 10);
                    number /= 10;
                }
                number = sum;
            }
            System.out.println(number);
            number = scanner.nextInt();
        }
    }
}
