<?php
    $marks = array(
        array("David", array ("DBMS" => 70, "DAA" => 80, "OS" => 85)),
        array("John", array ("DBMS" => 80, "DAA" => 90, "OS" => 85)),
        array("Mark", array ("DBMS" => 90, "DAA" => 85, "OS" => 75)),
        array("Peter", array ("DBMS" => 85, "DAA" => 75, "OS" => 55)),
        array("Paul", array ("DBMS" => 75, "DAA" => 75, "OS" => 45))
    );

    # Accessing the array:
    echo "Marks of David in Database Management System: ";
    echo $marks[0][1]["DBMS"] . "<br>";
    echo "Marks of John in Design and Analysis: ";
    echo $marks[1][1]["DAA"] . "<br>";
    echo "Marks of Mark in Operating System: ";
    echo $marks[2][1]["OS"] . "<br>";
?>