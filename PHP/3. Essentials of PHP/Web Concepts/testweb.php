<?php
if ($_POST["redirecting_location"]) {
    $redirection = $_POST["redirecting_location"];
    header("Location:  $redirection");
    exit;
}
?>