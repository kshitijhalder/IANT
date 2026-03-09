<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
$name = "";
$age = "";
$salary = "";
?>
    <form method="POST" action="">
        <label>Name:</label>
        <input type="text" name="name" value="<?php echo $name; ?>">
        <br>
        <label>Age:</label>
        <input type="number" name="age" value="<?php echo $age; ?>">
        <br>
        <label>Salary:</label>
        <input type="number" name="salary" value="<?php echo $salary; ?>">
        <br>
        <input type="submit" value="Submit">
    </form>
    <?php
        class Employee {
            public $name;
            public $age;
            public $salary;

            function __construct($name, $age, $salary) {
                $this->name = $name;
                $this->age = $age;
                $this->salary = $salary;
            }
            function displayEmployee() {
                echo "<table border='1'>";
                echo "<tr><th>Employee Details</th></tr>";
                echo "<tr><td>Name:</td><td>" . $this->name . "</td></tr>";
                echo "<tr><td>Age:</td><td>" . $this->age . "</td></tr>";
                echo "<tr><td>Salary:</td><td>" . "₹" . $this->salary . "</td></tr>";
                echo "</table>";
            }
        }
        

        if(isset($_POST['name'], $_POST['age'], $_POST['salary'])) {
            $name = $_POST['name'];
            $age = $_POST['age'];
            $salary = $_POST['salary'];
            $emp = new Employee($name, $age, $salary);
            $emp->displayEmployee();
        }
    ?>
</body>
</html>