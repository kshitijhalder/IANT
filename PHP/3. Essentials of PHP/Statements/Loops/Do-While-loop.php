<?php
    $i = 0;
    $n = 0;
    echo ("i n <br>");

    do {
        $i+=2;
        $n++;
        echo ("$i $n <br>");
    } while ($i < 20);
    
    echo ("<br> Loop stopped at i : $i and n : $n <br>");
?>