package com.company;

import java.util.Scanner;
import java.lang.Math;

public class Main {

    public static void main(String[] args) {
	    int army1;
	    int army2;

        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNextInt()){
            army1 = scanner.nextInt();
            army2 = scanner.nextInt();
            System.out.println(Math.abs(army1 - army2));
        }

    }
}
