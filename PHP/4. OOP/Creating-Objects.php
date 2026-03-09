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
        echo "Name: " . $this->name . "<br>";
        echo "Age: " . $this->age . "<br>";
        echo "Salary: " . $this->salary . "<br><br>";
    }
}
    // Creating an object
    $emp1 = new Employee("John", 25, 50000);
    $emp2 = new Employee("Alice", 30, 65000);
    $emp3 = new Employee("Bob", 35, 75000);

    // Accessing properties
    echo $emp1->name . "<br>";
    echo $emp2->age . "<br>";

    // Calling methods
    $emp1->displayEmployee();
    $emp2->displayEmployee();
    $emp3->displayEmployee();
?>