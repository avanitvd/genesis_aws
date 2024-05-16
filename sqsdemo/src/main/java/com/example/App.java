package com.example;

import java.util.List;

import com.amazonaws.services.sqs.AmazonSQS;
import com.amazonaws.services.sqs.AmazonSQSClient;
import com.amazonaws.services.sqs.model.CreateQueueResult;
import com.amazonaws.services.sqs.model.DeleteMessageRequest;
import com.amazonaws.services.sqs.model.DeleteMessageResult;
import com.amazonaws.services.sqs.model.ListQueuesResult;
import com.amazonaws.services.sqs.model.Message;
import com.amazonaws.services.sqs.model.ReceiveMessageRequest;
import com.amazonaws.services.sqs.model.ReceiveMessageResult;
import com.amazonaws.services.sqs.model.SendMessageRequest;
import com.amazonaws.services.sqs.model.SendMessageResult;

public class App {
    public static void main(String[] args) {
        System.out.println("Hello World!");
        AmazonSQS sqsClient = AmazonSQSClient.builder().withRegion("ap-northeast-1").build();

        // listing all queues ka code

        ListQueuesResult queuesResult = sqsClient.listQueues();
        List<String> queues=queuesResult.getQueueUrls();

        for(String queue:queues){
        System.out.println("queue url" + queue);
        }

        // creating new queue

        // CreateQueueResult queueResult= sqsClient.createQueue("avaniqueue");
        // System.out.println("queue created with url : "+queueResult.getQueueUrl());

        
        // send message in queue ka code

        SendMessageRequest messageRequest = new SendMessageRequest("https://sqs.ap-northeast-1.amazonaws.com/106129732153/avaniqueue", "hii i hope this works!!");
        SendMessageResult messageResult = sqsClient.sendMessage(messageRequest);
        System.out.println("message ka result hai : " + messageResult.getMessageId());


        // receive message ka code

        // ReceiveMessageRequest receiveMessageRequest = new ReceiveMessageRequest(
        //         "https://sqs.ap-northeast-1.amazonaws.com/106129732153/avaniqueue");
        // ReceiveMessageResult receiveMessageResult = sqsClient.receiveMessage(receiveMessageRequest);
        // List<Message> messages = receiveMessageResult.getMessages();
        // for (Message message : messages) {
        //     System.out.println("Message Body: " + message.getBody());
        // }


        // delete message ka code

        // ReceiveMessageRequest receiveMessageRequest = new ReceiveMessageRequest(
        //         "https://sqs.ap-northeast-1.amazonaws.com/106129732153/avaniqueue");
        // ReceiveMessageResult receiveMessageResult = sqsClient.receiveMessage(receiveMessageRequest);
        // List<Message> messages = receiveMessageResult.getMessages();
        // for (Message message : messages) {
        //     System.out.println("Message Body: " + message.getBody());
        //     String rctHandle = message.getReceiptHandle();
        //     DeleteMessageRequest deleteMessageRequest = new DeleteMessageRequest("https://sqs.ap-northeast-1.amazonaws.com/106129732153/avaniqueue",rctHandle);
        //     sqsClient.deleteMessage(deleteMessageRequest);
        //     DeleteMessageResult deleteMessageResult = sqsClient.deleteMessage(deleteMessageRequest);
         
        sqsClient.deleteQueue("avaniqueue");
        
    }
        
    }

