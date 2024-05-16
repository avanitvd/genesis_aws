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
public class App {
    private static final String url = "jdbc:mysql://avanidb.cn6qkoww88oi.ap-northeast-1.rds.amazonaws.com/avaniDb";
    private static final String user = "admin";
    private static final String password = "password123";

    public static void main(String[] args) {
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
        } catch (ClassNotFoundException e) {
         
            e.printStackTrace();
        }
        Connection conn = null;
        try {
            conn = DriverManager.getConnection(url, user, password);
            // method to read records from db
            // readDatabase(conn);

            // method to insert into db
            // insertIntoDatabase(conn);

            //method to update
            updateIntoDatabase(conn);

            //method to delete 
            deleteIntoDatabase(conn);

            
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    public static void readDatabase(Connection conn) {
        try {
            // code to read
            Statement statement = conn.createStatement();
            ResultSet resultSet = statement.executeQuery("Select * from billings");
            while (resultSet.next()) {
                System.out.println("Id:" + resultSet.getInt(1));
                System.out.println("product:" + resultSet.getString(2));
                System.out.println("price:" + resultSet.getInt(3));
            }
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

//code for insert
    public static void insertIntoDatabase(Connection conn) throws SQLException{
        PreparedStatement statement =conn.prepareStatement("insert into billings values (?,?,?)");
        statement.setInt(1, 106);
        statement.setString(2, "bottle");
        statement.setInt(3, 200);
        
       int rowsInserted= statement.executeUpdate();
       System.out.println(rowsInserted);
       readDatabase(conn);
    }

// code for update
    public static void updateIntoDatabase(Connection conn) throws SQLException{
        PreparedStatement statement=conn.prepareStatement("update billings set product=? where Id=?");
        statement.setString(1, "bag");
        statement.setInt(2, 105);

        int rowsUpdated=statement.executeUpdate();
        System.out.println(rowsUpdated);
        readDatabase(conn);
    }

//code to delete
    public static void deleteIntoDatabase(Connection conn) throws SQLException{
       PreparedStatement statement= conn.prepareStatement("delete from billings where Id=?");
       statement.setInt(1, 104);

       int rowDeleted=statement.executeUpdate();
       System.out.println(rowDeleted);
    }
}
