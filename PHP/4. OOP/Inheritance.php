<?php
    // Base class
    class Author {
        public $name;
        public $birthYear;
    }

    // Inheritance class
    class RudyardKipling extends Author {
        public $poem;

        function setPoem($variable) {
            $this->poem = $variable;
        }

        function getPoem() {
            echo $this->poem . "<br>";
        }
    }
        // Printing the object
        $author = new Author();
        $author->name = "Rudyard Kipling";
        $author->birthYear = 1865;

        $kipling = new RudyardKipling();
        $kipling->name = "Rudyard Kipling";
        $kipling->birthYear = 1865;
        $kipling->setPoem("The Jungle Book");
        $kipling->getPoem();
?>