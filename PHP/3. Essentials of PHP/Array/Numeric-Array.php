<html>
    <head>
        <title>Numeric Array</title>
    </head>
    <body>
        <?php
            # Method 1 to create a array:
            $num = array(100, 200, 300);
            foreach ($num as $value) {
                echo $value . "<br>";
            }

            # Method 2 to create a array:
            $num[0] = 100;
            $num[1] = 200;
            $num[2] = 300;
            foreach ($num as $value) {
                echo "The value is $value <br>";
            }
        ?>
    </body>
</html>