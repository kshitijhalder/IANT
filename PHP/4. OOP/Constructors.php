<?php
    // Defining a constructor
    class Books {
        public $title;
        public $author;
        public $year;

        function __construct($title, $author, $year) {
            $this->title = $title;
            $this->author = $author;
            $this->year = $year;
        }

        function displayBooks() {
            echo "<table border='1'>";
            echo "<tr><th>Book Details</th></tr>";
            $this->displayBook();
            echo "</table>";
        }

        function displayBook() {
            echo "<tr><td>";
            echo "Title: " . $this->title . "<br>";
            echo "Author: " . $this->author . "<br>";
            echo "Year: " . $this->year;
            echo "</td></tr>";
        }
    }

        if(isset($_POST['title'], $_POST['author'], $_POST['year'])) {
            $book->displayBooks();
            $title = $_POST['title'];
            $author = $_POST['author'];
            $year = $_POST['year'];
            $book = new Books($title, $author, $year);
        }

        // Creating an object
        $book1 = new Books("The Great Gatsby", "F. Scott Fitzgerald", 1925);
        $book2 = new Books("The Catcher in the Rye", "J.D. Salinger", 1951);
        $book3 = new Books("To Kill a Mockingbird", "Harper Lee", 1960);


        // Calling methods
        $book1->displayBooks();
        $book2->displayBooks(); 
        $book3->displayBooks();
?>