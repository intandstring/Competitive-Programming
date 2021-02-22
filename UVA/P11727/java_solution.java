package com.company;

import java.util.Scanner;
import java.util.Arrays;

public class Main {

    public static void main(String[] args) {

        int testCases;
        int[] nums = new int[3];
        String ans;
        Scanner scanner = new Scanner(System.in);
        testCases = scanner.nextInt();
        for (int i = 1; i <= testCases; i++) {
            for (int j = 0; j < 3; j++){
                nums[j] = scanner.nextInt();
            }
            Arrays.sort(nums);
            ans = String.format("Case %d: %d", i, nums[1]);
            System.out.println(ans);
        }
    }
}
