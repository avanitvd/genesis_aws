package com.example;

import com.amazonaws.services.sns.AmazonSNS;
import com.amazonaws.services.sns.AmazonSNSClient;
import com.amazonaws.services.sns.model.CreateTopicRequest;
import com.amazonaws.services.sns.model.CreateTopicResult;
import com.amazonaws.services.sns.model.PublishRequest;
import com.amazonaws.services.sns.model.PublishResult;
import com.amazonaws.services.sns.model.SubscribeRequest;
import com.amazonaws.services.sns.model.SubscribeResult;

public class App 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
        AmazonSNS snsclient=AmazonSNSClient.builder().withRegion("ap-northeast-3").build();
        
        //create new topic
        //  CreateTopicResult topicResult=snsclient.createTopic(new CreateTopicRequest("topicexp"));
        //  System.out.println("topic created with ARN"+topicResult.getTopicArn());


       // topic creation method 2
    //      CreateTopicResult result2 =  snsclient.createTopic("discount-offers");
    //     String topicArn = result2.getTopicArn();
    //     System.out.println(topicArn);
    


    //create subscription
//     String email="nagarkarabhishek123@gmail.com";
//    SubscribeResult subscribeResult=snsclient.subscribe(new SubscribeRequest("arn:aws:sns:ap-northeast-3:106129732153:topicexp", "email", email));
//    System.out.println(subscribeResult.getSubscriptionArn());

//publish email
PublishResult publishResult=snsclient.publish(new PublishRequest("arn:aws:sns:ap-northeast-3:106129732153:topicexp", "hello welcome bye", "message"));
System.out.println(publishResult.getMessageId());
//     }
//----------------------------------------------------------//
//-----------------for assignment 2--------------
    
        //  CreateTopicResult result =  snsclient.createTopic("bill-alert");
        // String topicArn = result.getTopicArn();
        // System.out.println(topicArn);

        
   
//     String email="nagarkarabhishek123@gmail.com";
//    SubscribeResult subscribeResult=snsclient.subscribe(new SubscribeRequest("arn:aws:sns:ap-northeast-3:106129732153:bill-alert", "email", email));
//    System.out.println(subscribeResult.getSubscriptionArn());

    String email="ektaimec@gmail.com";
   SubscribeResult subscribeResult=snsclient.subscribe(new SubscribeRequest("arn:aws:sns:ap-northeast-3:106129732153:bill-alert", "email", email));
   System.out.println(subscribeResult.getSubscriptionArn());
}
}
