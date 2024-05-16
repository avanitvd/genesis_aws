package com.example.ebsdemo;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class HelloRestController {
   @GetMapping("/")
    public String helloWorld(){
        return "Hello World";
        
    }
   @GetMapping("/hello")
    public String helloIndia(){
        return "Hello World";

    }
}