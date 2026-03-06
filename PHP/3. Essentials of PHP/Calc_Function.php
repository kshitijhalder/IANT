<!DOCTYPE html>
<html>
<head>
	<title>PHP Calculator</title>
</head>
<body>

<?php
function add($a, $b) {
	return $a + $b;
}

function subtract($a, $b) {
	return $a - $b;
}

function multiply($a, $b) {
	return $a * $b;
}

function divide($a, $b) {
	return $a / $b;
}

function exponentiate($a, $b) {
    return $a ** $b;
}

function modulus($a, $b) {
    return $a % $b;
}

function squareRoot($a) {
    return sqrt($a);
}

$result = "";

if (isset($_POST['a']) && isset($_POST['b']) && isset($_POST['function'])) {
    $a = $_POST['a'];
    $b = $_POST['b'];
    $function = $_POST['function'];

    switch ($function) {
        case "add":
            $result = add($a, $b);
            break;
        case "subtract":
            $result = subtract($a, $b);
            break;
        case "multiply":
            $result = multiply($a, $b);
            break;
        case "divide":
            $result = divide($a, $b);
            break;
        case "exponentiate":
            $result = exponentiate($a, $b);
            break;
        case "modulus":
            $result = modulus($a, $b);
            break;
        case "squareRoot":
            $result = squareRoot($a);
            break;
        default:
            $result = "Invalid function";
    }
}

?>

<form method="post">
    <label for="a">First number:</label>
    <input type="number" id="a" name="a" value="<?php echo $a; ?>">
    <br>
    <label for="b">Second number:</label>
    <input type="number" id="b" name="b" value="<?php echo $b; ?>">
    <br>
    <label for="function">Function:</label>
    <select id="function" name="function">
        <option value="add">Add</option>
        <option value="subtract">Subtract</option>
        <option value="multiply">Multiply</option>
        <option value="divide">Divide</option>
        <option value="exponentiate">Exponentiate</option>
        <option value="modulus">Modulus</option>
        <option value="squareRoot">Square Root</option>
    </select>
    <br>
    <input type="submit" value="Calculate">
</form>

<?php if ($result !== ""): ?>
    <h2>Result:</h2>
    <p><?php echo $result; ?></p>
<?php endif; ?>

</body>
</html>				