package com.example;

import java.util.Scanner;

import com.amazonaws.services.sqs.AmazonSQS;
import com.amazonaws.services.sqs.AmazonSQSClient;
import com.amazonaws.services.sqs.model.SendMessageRequest;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
        AmazonSQS sqsClient= AmazonSQSClient.builder().withRegion("ap-northeast-1").build();
    
        Scanner sc=new Scanner(System.in);

        System.out.println("enter the source");
        String source =sc.nextLine();

        System.out.println("enter the destination");
        String destination=sc.nextLine();

        SendMessageRequest sendMessageRequest= new SendMessageRequest().withQueueUrl("https://sqs.ap-northeast-1.amazonaws.com/106129732153/kubercabqueue").withMessageBody("RIDE IS BOOKED FROM "+ source + " to "+destination);

        sqsClient.sendMessage(sendMessageRequest);
        System.out.println("message is sent!!");
        


    }
}
