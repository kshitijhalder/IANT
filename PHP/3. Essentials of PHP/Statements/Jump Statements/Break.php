<?php
    $newArray = array("Amanda", "Alex", "Rachel", "Joy", "Chris", "Brett");

    foreach ($newArray as &$value) {
        if ($value == "stop") {
            break;
        }
        echo "$value <br>";
    }

    echo"<br>";
    #Using the break's optional argument
    $j = 0;
    while (++$j) {
        switch ($j) {
            case 5:
            echo "Present at 5, still in the loop and breaking out of the switch <br>";
            break 1; # break the switch and continue the loop
            case 10:
            echo "Present at 10, breaking out of the loop and switch <br>";
            break 2; # break the loop and continue the switch
            default:
            break; # break the loop and switch
        }
    }
?>