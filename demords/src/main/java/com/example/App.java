package com.example;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;



/**
 * Hello world!
 *
 */
public class App 
{
    private static final String url= "jdbc:mysql://db-kuberapp.cn6qkoww88oi.ap-northeast-1.rds.amazonaws.com/kuberappavani";
    private static final String user = "admin";
    private static final String password = "password123";

    public static void main( String[] args )
    {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
        }
        catch (ClassNotFoundException e) {
         
            e.printStackTrace();
        }
        Connection conn = null;
        try {
            conn=DriverManager.getConnection(url, user, password);
        
            // readDatabase(conn);

            // method to insert into db
            insertIntoDatabase(conn);
        }
        catch (SQLException e){
            e.printStackTrace();
        }
    }

    public static void readDatabase(Connection conn){
        try{
           Statement statement =conn.createStatement();
          ResultSet resultSet= statement.executeQuery("Select * from ridedetails");
          while (resultSet.next()){
            System.out.println("rideno "+ resultSet.getInt(1));
            System.out.println("d_name "+ resultSet.getString(2));
            System.out.println("c_name "+ resultSet.getString(3));
            System.out.println("p_count "+ resultSet.getInt(4));
          }
        } catch (SQLException e) {
            e.printStackTrace();
        }
            
        }
        //insert code

        // public static void final insertIntoDatabase(Connection conn) throws SQLException
        public static  final void insertIntoDatabase(Connection conn) throws SQLException
        
        {
            PreparedStatement statement =conn.prepareStatement("insert into ridedetails values (?,?,?,?)");
            statement.setInt(1, 006);
            statement.setString(2, "harry");
            statement.setString(3, "moti");
            statement.setInt(4, 5);

            int rowsInserted=statement.executeUpdate();
            System.out.println(rowsInserted);
            readDatabase(conn);
        }
    }

