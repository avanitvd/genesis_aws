package com.example;

import java.util.HashMap;
import java.util.Map;

import com.amazonaws.services.dynamodbv2.AmazonDynamoDB;
import com.amazonaws.services.dynamodbv2.AmazonDynamoDBClient;
import com.amazonaws.services.dynamodbv2.document.Attribute;
import com.amazonaws.services.dynamodbv2.model.AttributeValue;
import com.amazonaws.services.dynamodbv2.model.ListTablesResult;
import com.amazonaws.services.dynamodbv2.model.PutItemRequest;
import com.amazonaws.services.dynamodbv2.model.ScanRequest;
import com.amazonaws.services.dynamodbv2.model.ScanResult;

public class App 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
        AmazonDynamoDB client = AmazonDynamoDBClient.builder().withRegion("ap-northeast-3").build();

        ListTablesResult result =client.listTables();
        System.out.println(""+result.getTableNames().size());

        // for(String table : result.getTableNames()){
        //     System.out.println(""+table);

        //     ScanResult scanResult = client.scan(new ScanRequest(table));

        //     for(Map<String,AttributeValue > item : scanResult.getItems() )
        //     for(String key : item.keySet()){
        //         System.out.println(key +" = "+ item.get(key) );
        //        }} 
        //this code is for displaying the items in code

               
 
 
        Map<String, AttributeValue> mapObj = new HashMap<>();
        mapObj.put("contactId", new AttributeValue().withN("102"));
        mapObj.put("lastname", new AttributeValue("Rathore"));
        client.putItem(new PutItemRequest("mytable", mapObj));
        //this code is for putting the content through code
       
        }
    }

