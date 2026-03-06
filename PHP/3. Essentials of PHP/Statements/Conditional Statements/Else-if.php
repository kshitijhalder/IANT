<?php
    $d = 49;
    if (($d % 2) == 0) {
        echo "The number is divisible by 2";
    } elseif (($d % 5) == 0) {
        echo "The number is divisible by 5";
    } elseif (($d % 7) == 0) {
        echo "The number is divisible by 7";
    } else {
        echo "The number is not divisible by 2, 5, or 7";
    }
?>