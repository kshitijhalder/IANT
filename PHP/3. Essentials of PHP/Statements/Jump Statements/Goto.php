<?php
    $var = 1;
    a:

    // Label of goto statement
    echo "$var in goto loop <br>";
    if (++$var <= 5) :
        goto a;
    // Creating a loop using goto and its label
    else :
        echo " Out of loop <br>";
    endif;
?>