package com.avaniaws;

import java.util.List;
import java.util.Scanner;

import com.amazonaws.AmazonServiceException;
import com.amazonaws.auth.profile.ProfileCredentialsProvider;
import com.amazonaws.services.s3.AmazonS3;
import com.amazonaws.services.s3.AmazonS3Client;
import com.amazonaws.services.s3.model.Bucket;
import com.amazonaws.services.sqs.AmazonSQS;
import com.amazonaws.services.sqs.AmazonSQSClient;
import com.amazonaws.services.sqs.model.Message;



public class App 
{
    public static void main( String[] args )
    {
        // AmazonS3 s3 = (AmazonS3Client) AmazonS3Client.builder().
        // withCredentials(new ProfileCredentialsProvider()).build();

        // s3.listBuckets().forEach(b -> System.out.println(b.getName()));

        // List<Bucket> bucketList = s3.listBuckets();
        //yeh list batayega

        // for(Bucket bucket: bucketList){
        //     System.out.println(bucket.getName());
        // }
        //list with for loop

        // Scanner sc=new Scanner(System.in);
        // s3.createBucket("myfileavani2001");//bucket create
        // System.out.println("enter the message: ");
        // String line=sc.nextLine();
        // s3.putObject("myfileavani2001","message.txt",line);//bucket m file
        



// yeh neeche queue ka hai
        AmazonSQS sqs= AmazonSQSClient.builder().withCredentials(new ProfileCredentialsProvider()).withRegion("ap-northeast-3").build();

        String queueUrl="https://sqs.ap-northeast-3.amazonaws.com/106129732153/myqueue2001";
        List<Message> messages=sqs.receiveMessage(queueUrl).getMessages();
        for(Message m:messages){
            System.out.println("Message : "+m.getBody());
            System.out.println("attributes: "+m.getAttributes()    );
            String handle=m.getReceiptHandle();
            sqs.deleteMessage(queueUrl,handle);
        }
    
      

}
}
