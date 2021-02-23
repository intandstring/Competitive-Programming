package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        String hello;
        String language;
        int i = 1;

        hello = scanner.nextLine();
        while (!(hello.equals("#"))){
            if (hello.equals("HELLO")){
                language = "ENGLISH";
            } else if (hello.equals("HOLA")) {
                language = "SPANISH";
            } else if (hello.equals("HALLO")) {
                language = "GERMAN";
            } else if (hello.equals("BONJOUR")) {
                language = "FRENCH";
            } else if (hello.equals("CIAO")) {
                language = "ITALIAN";
            } else if (hello.equals("ZDRAVSTVUJTE")) {
                language = "RUSSIAN";
            } else {
                language = "UNKNOWN";
            }
            System.out.println("Case " + i + ": " + language);
            i++;
            hello = scanner.nextLine();
        }

    }
}
