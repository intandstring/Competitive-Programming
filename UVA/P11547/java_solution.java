package com.company;

import java.util.Scanner;
import java.lang.Math;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int testCases;
        int num;
        testCases = scanner.nextInt();
        while (testCases != 0) {
            num = scanner.nextInt();
            num = (((((num * 567) / 9 ) + 7492 ) * 235 ) / 47 ) - 498;
            System.out.println((Math.abs(num) / 10) % 10);
            testCases--;
        }

    }
}
