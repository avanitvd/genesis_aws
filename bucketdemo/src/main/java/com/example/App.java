package com.example;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.util.List;
import java.util.Scanner;

import com.amazonaws.services.s3.AmazonS3;
import com.amazonaws.services.s3.AmazonS3Client;
import com.amazonaws.services.s3.model.ObjectListing;
import com.amazonaws.services.s3.model.S3Object;
import com.amazonaws.services.s3.model.S3ObjectSummary;

/**
 * Hello world!
 *
 */
public class App 
{

    public static void main( String[] args )
    {
       AmazonS3 s3Client = AmazonS3Client.builder().withRegion("us-east-1").build();
       System.out.println("S3 cliet gets loaded");

       Scanner sc=new Scanner(System.in);
       String downloadPath=sc.nextLine();

       ObjectListing objectListing=s3Client.listObjects("avanidriver-ids");
      List<S3ObjectSummary>objectSummaries =objectListing.getObjectSummaries();

      for (S3ObjectSummary s3ObjectSummary : objectSummaries){
        try{
            S3Object s3Object=s3Client.getObject("avanidriver-ids", s3ObjectSummary.getKey());
            s3Object.getObjectContent().transferTo(new FileOutputStream(downloadPath + "\\"+ s3ObjectSummary.getKey()));

            System.out.println("file is downloaded");
        }
        catch (FileNotFoundException f){
            f.printStackTrace();
        }
        catch(IOException i){
            i.printStackTrace();
        }
      }

    
       
    }
}
