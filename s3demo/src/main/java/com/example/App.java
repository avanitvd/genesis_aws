package com.example;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.List;

import com.amazonaws.services.s3.AmazonS3;
import com.amazonaws.services.s3.AmazonS3Client;
import com.amazonaws.services.s3.model.Bucket;

/**
 * Hello world!
 *
 */
public class App 
{

    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
        AmazonS3 s3Client = AmazonS3Client.builder().withRegion("ap-northeast-1").build();

        //create bucket 
        // Bucket bucket=s3Client.createBucket("newavanibucket");

        //put file in bucket
        //s3Client.putObject("newavanibucket", "message.txt", new File("D:/AWS/example.txt"));
         
        //list bucket
        // List<Bucket> listBuckets = s3Client.listBuckets();
        // for(Bucket bucket:listBuckets){
        //     System.out.println(bucket.getName());
        // }
       
        //file download
         String contents=s3Client.getObjectAsString("newavanibucket","message.txt"); 
         try {
             FileWriter out=new FileWriter(new File("C:/files/jan.txt"));
             out.write(contents);
             out.close();
         } catch (IOException e) {
             // TODO Auto-generated catch block
             e.printStackTrace();
         }
    }
}



 // ------------------------------------
        // // TO DELETE ALL OBJECTS FROM THE BUCKET AND THEN DELETE THE BUCKET
        // // gets the object listing in s3 bucket
        // ObjectListing objListing =s3Client.listObjects("myan-newbucket");
       
        // // get object summaries ( list of objects )
        // List<S3ObjectSummary> objectSummaries = objListing.getObjectSummaries();
       
        // // iterating through each object in object summaries
        // for (S3ObjectSummary s3ObjectSummary : objectSummaries) {
        //     // display object name (file name of the object)
        //     System.out.println(s3ObjectSummary.getKey());
 
        //     // delete that object
        //     s3Client.deleteObject("myan-newbucket", s3ObjectSummary.getKey());
        // }
       
        // // after deleting all objects the bucket can be deleted
        // s3Client.deleteBucket("myan-newbucket");