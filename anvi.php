<?php
    
    // $host = 'localhost';
    // $user = 'root';
    // $dbpass = '';
    // $conn = mysqli_connect($host,$user,$dbpass);
    // $createdb = "CREATE DATABASE testdb";
    // mysqli_query($conn,$createdb);
    // $db = 'testdb';
    // $conn = mysqli_connect($host,$user,$dbpass,$db);
    // $disp = "SELECT * FROM student";
    // $createtb = "CREATE TABLE student(
    //     enroll_no int PRIMARY KEY,
    //     name varchar(255),
    //     age int(2),
    //     course varchar(255)
    // )";

    // mysqli_query($conn,$createtb);
    // $insert = "INSERT INTO `student` VALUES (1,'ABC',18,'XYZ'),(2,'ABC',18,'XYZ'),(3,'ABC',23,'XYZ'),(4,'ABC',18,'XYZ'),(5,'ABC',18,'XYZ'),(6,'ABC',25,'XYZ'),(7,'ABC',18,'XYZ'),(8,'ABC',18,'XYZ'),(9,'ABC',18,'XYZ'),(10,'ABC',27,'XYZ')";
    // mysqli_query($conn,$insert);
    // echo "After insertion:<br>";
    // $dispres = mysqli_query($conn,$disp);
    // while($each = $dispres->fetch_assoc()){
    //     echo $each['enroll_no']." ".$each['name']." ".$each['age']." ".$each['course']."<br>";
    // }
    // $del = "DELETE FROM student WHERE age>22";
    // mysqli_query($conn,$del);
    // echo "After deletion: <br>";
    // $dispres = mysqli_query($conn,$disp);
    // while($each = $dispres->fetch_assoc()){
    //     echo $each['enroll_no']." ".$each['name']." ".$each['age']." ".$each['course']."<br>";
    // }
    // $update = "UPDATE student SET name='XYZ' WHERE enroll_no=1 && enroll_no = 5";
    // mysqli_query($conn,$update);
    // echo "After updation: <br>";
    // $dispres = mysqli_query($conn,$disp);
    // while($each = $dispres->fetch_assoc()){
    //     echo $each['enroll_no']." ".$each['name']." ".$each['age']." ".$each['course']."<br>";
    // }
    $x = '1';
    echo $y = &$x;
    echo $z = "2$y";
?>