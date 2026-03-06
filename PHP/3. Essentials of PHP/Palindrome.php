<!DOCTYPE html>
    <html>
        <body>
            <form method="post">
                Enter a string: 
                <input type="text" name="text">
                <input type="submit" value="Check">
            </form>

            <?php
                if (isset($_POST['text'])) {
                    $str = $_POST['text'];
                    $isPalindrome = true;

                    for ($i = 0; $i < strlen($str)/2; $i++) {
                        if ($str[$i] != $str[strlen($str) - $i - 1]) {
                            $isPalindrome = false;
                            break;
                        }
                    }

                    if ($isPalindrome)
                        echo "Palindrome";
                    else
                        echo "Not a palindrome";
                }
            ?>
        </body>
    </html>