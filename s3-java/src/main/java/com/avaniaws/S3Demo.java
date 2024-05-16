package com.avaniaws;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

import com.amazonaws.AmazonServiceException;
import com.amazonaws.services.s3.AmazonS3;
import com.amazonaws.services.s3.AmazonS3Client;
import com.amazonaws.services.s3.model.S3Object;
import com.amazonaws.services.s3.model.S3ObjectInputStream;

public class S3Demo {
    public static void main(String[] args) {
        AmazonS3 s3 = AmazonS3Client.builder().withRegion("ap-northeast-3").build(); // yeh region se kara
        // AmazonS3 s3 = (AmazonS3Client) AmazonS3Client.builder().withCredentials(new ProfileCredentialsProvider()).build();   yeh credentials se kara bas

        // uploading 3 txt files in avani-reports
        // Scanner sc = new Scanner(System.in);
        // String msg = "";

        // System.out.println("Msg");
        // msg = sc.nextLine();
        // s3.putObject("avani-reports", "jan.txt", msg);
        // System.out.println("Msg");

        // msg = sc.nextLine();
        // s3.putObject("avani-reports", "feb.txt", msg);
        // System.out.println("Msg");

        // msg = sc.nextLine();
        // s3.putObject("avani-reports", "march.txt", msg);

        System.out.println("new code starts here");

        //code 1 for dowloading the file
        
        // try {
        //     S3Object o = s3.getObject("avani-reports", "march.txt");
        //     S3ObjectInputStream s3is = o.getObjectContent();
        //     FileOutputStream fos = new FileOutputStream(new File("march.txt"));
        //     byte[] read_buf = new byte[1024];
        //     int read_len = 0;
        //     while ((read_len = s3is.read(read_buf)) > 0) {
        //         fos.write(read_buf, 0, read_len);
        //     }
        //     s3is.close();
        //     fos.close();
        // } catch (AmazonServiceException e) {
        //     System.err.println(e.getErrorMessage());
        //     System.exit(1);
        // } catch (FileNotFoundException e) {
        //     System.err.println(e.getMessage());
        //     System.exit(1);
        // } catch (IOException e) {
        //     System.err.println(e.getMessage());
        //     System.exit(1);
        // }
        // System.out.println("Done!");

         String contents=s3.getObjectAsString("avani-reports","jan.txt"); 
         try {
             FileWriter out=new FileWriter(new File("C:/files/jan.txt"));
         } catch (IOException e) {
             // TODO Auto-generated catch block
             e.printStackTrace();
         }


    // try {
    //     FileWriter out=new FileWriter(new File("C:/files/jan.txt"));
    // } catch (IOException e) {
    //     // TODO Auto-generated catch block
    //     e.printStackTrace();
    // }
    // }
    }
}

