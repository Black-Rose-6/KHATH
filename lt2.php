<!DOCTYPE html>
<html lang="en">
<head>
    <title>Question-2 Lab Test SQL</title>
</head>
<body>
    <form name="submitform" method="POST">
        Employee Name: <input type="text" name="emplname" id="">
        Employee Salary: <input type="text" name="emplsalary" id="">
        Employee Number: <input type="number" name="emplno" id="">
        <input type="submit" value="Submit" name="insert">
    </form>
    <form action="" method="GET">
        <input type="submit" value="Find" name="find">
    </form>
    <form method="GET">
        <input type="submit" value="Delete" name = "delete">
    </form>
</body>
</html>
<?php

    $host = "localhost";
    $user = "root";
    $pass = "";
    $db = "Employee";
    $conn = mysqli_connect($host,$user,$pass,$db);
    if(isset($_POST['insert'])){
        $empname= $_POST['emplname'];
        $empsal= $_POST['emplsalary'];
        $empno= $_POST['emplno'];
        $insert = "INSERT INTO Employee(empname,empsal,empno) VALUES('$empname',$empsal,'$empno')";
        $insertres = mysqli_query($conn,$insert);
        if($insertres){
            echo "Insertion of Employee ".$empname." is successfull"."<br>";
        }
    }
    if(isset($_GET['find'])){
        $find = "SELECT p.emp_no, p.increment_percentage FROM promotion p , employee e WHERE e.empsal>30000 AND e.empid=p.emp_no";
        $findres = mysqli_query($conn,$find);
        while($each = $findres->fetch_assoc()){
            echo "Emp-No ->".$each['emp_no']."<br>";
            echo "Increment Percentage -> ".$each['increment_percentage']."<br";
        }
    }
    if(isset($_GET['delete'])){

        $delete = "DELETE FROM Employee WHERE empid = 105";
        $deleteres = mysqli_query($conn,$delete);
        if($deleteres){
            echo "<br>"."Delete Successfull";
        }
    }
    mysqli_close($conn);
?>