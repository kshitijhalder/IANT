<?php
    $num = rand (1, 5);
    echo "Randomly generated image: ";

    switch ( $num ) {
        case 1:
            $image = 'https://img.freepik.com/free-vector/random-fun-hand-drawn-doodle-pattern-background_1048-19869.jpg?semt=ais_rp_progressive&w=740&q=80';
            break;
        case 2:
            $image = 'https://img.freepik.com/free-vector/abstract-background-with-hand-drawn-pattern-design_1048-19999.jpg?semt=ais_hybrid&w=740&q=80';
            break;
        case 3:
            $image = 'https://img.freepik.com/premium-photo/colorful-lines-colorful-pattern_1141864-1737.jpg?semt=ais_hybrid&w=740&q=80';
            break;
        case 4:
            $image = 'https://img.freepik.com/premium-photo/abstract-art-line-circle-background-wallpaper-full-hd-film-gray_604658-685.jpg?w=360';
            break;
        case 5:
            $image = 'https://img.freepik.com/free-vector/abstract-background-with-scribbled-doodle-pattern-design_1048-20424.jpg?semt=ais_wordcount_boost&w=740&q=80';
            break;
    }
    echo "<br><br><img src='$image' width='200' height='200'>";
?>