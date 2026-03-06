<?php
    $w = $var1 = 10;    $x = $var2 = 5;
    $y = $var3 = 20;    $z = $var4 = 15;

    $a = ++$var1;       $b = $var2++;
    $c = --$var3;       $d = $var4--;

    echo "Initial value of variables_1 is : $w <br>
          Initial value of variables_2 is : $x <br>
          Initial value of variables_3 is : $y <br>
          Initial value of variables_4 is : $z <br><br>
    ";
    echo "Pre-incrementing variables_1 is : $a <br>
          Post-incrementing variables_2 is : $b <br>
          variable_2 after the post-increment is : $var2 <br>
          Pre-incrementing variables_3 is : $c <br>
          Post-incrementing variables_4 is : $d <br>
          variable_4 after the post-increment is : $var4 <br><br>
    ";
?>