<?php
    # Method 1 to create a array:
    $marks = array("David" => 700, "John" => 800, "Mark" => 900, "Peter" => 850, "Paul" => 750);
    foreach ($marks as $name => $value) {
        echo "Marks of $name out of 1000 is $value <br>";
    }
    echo "<br>";

    # Method 2 to create a array:
    $percentage["David"] = 70;
    $percentage["John"] = 80;
    $percentage["Mark"] = 90;
    $percentage["Peter"] = 85;
    $percentage["Paul"] = 75;
    foreach ($percentage as $name => $value) {
        echo "Percentage of $name is $value <br>";
    }
?>