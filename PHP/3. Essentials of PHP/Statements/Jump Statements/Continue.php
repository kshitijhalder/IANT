<?php
    $newArray = array(100, 101, 61, 1075);

    foreach ($newArray as $value) {
        if (!($value % 2)) {
            // Skip even numbers
            continue;
        }
        $mid = ($value /2) + 1;
        $m = (int) $mid;
        echo "$value has mid value: $m <br>";
    }
    echo"<br>";

    $i = 0;

    while ($i++ < 3) {
        echo "Outer loop $i <br>";
        while (10) {
            echo "Inner loop $i <br>";
            continue 2;
        }
        echo "This is not Displayed <br>";
    }
?>