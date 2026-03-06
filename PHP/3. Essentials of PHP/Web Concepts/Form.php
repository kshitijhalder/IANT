<!DOCTYPE html>
<html lang="en">

<head>
    <title>HTML Forms</title>
</head>
<body bgcolor="yellow" text="red">
    <form name="f1" method="POST" action="" enctype="multipart/form-data"> 
        <fieldset>
            <legend>
                Personal Details
            </legend>
        
        <br><br>
        <table cellpadding="5" cellspacing="5">
            <tr>
                <td> <font face = "Arial Black" size = "5">ROLL NUMBER:</font></td>
                <td> <input type="text" name="rno" value=""/></td>
            </tr>
            <tr>
                <td> <font face = "Arial Black" size = "5">NAME:</font></td>
                <td> <input type="text" name="txtname" value=""/></td>
            </tr>
            <tr>
                <td> <font face = "Arial Black" size = "5">GENDER:</font></td>
                <td> <input type="radio" name="gender" value="Male"/>Male
                    <input type="radio" name="gender" value="Female"/>Female</td>
            </tr>
            <tr>
                <td> <font face = "Arial Black" size = "5">IMAGE</font></td>
                <td> <input type="file" name="img"/></td>
            </tr>
            <tr>
                <td ROWSPAN = 4><font face = "Arial Black" size = "5">HOBBIES:</td>
                <td> <input type="checkbox" name="hobby[]" value="Cricket"/>Cricket </td>
                <td> <input type="checkbox" name="hobby[]" value="Football"/>Football </td>
            </tr>
            <tr>
                <td> <input type="checkbox" name="hobby[]" value="Golf"/>Golf </td>
                <td> <input type="checkbox" name="hobby[]" value="Tennis"/>Tennis </td>
            </tr>
            <tr>
                <td> <input type="checkbox" name="hobby[]" value="Volleyball"/>Volleyball </td>
                <td> <input type="checkbox" name="hobby[]" value="Swimming"/>Swimming </td>
            </tr>
            <tr>
                <td> <input type="checkbox" name="hobby[]" value="Cycling"/>Cycling </td>
            </tr>
            <tr>
                <td> <font face = "Arial Black" size = "5">BLOOD GROUP:</font></td>
                <td> <select name="pull" size="1">
                        <option value="A+">A+</option>
                        <option value="A-">A-</option>
                        <option value="B+">B+</option>
                        <option value="B-">B-</option>
                        <option value="AB+">AB+</option>
                        <option value="AB-">AB-</option>
                        <option value="O+">O+</option>
                        <option value="O-">O-</option>
                    </select>
                </td>
            </tr>
            <tr>
                <td> <font face = "Arial Black" size = "5">ADDRESS:</font></td>
                <td> <textarea name="address" rows="4" cols="50"></textarea></td>
            </tr>
            <tr>
                <td> <font face = "Arial Black" size = "5">EDUCATION:</font></td>
                <td> <select name="list[]" size="3" multiple>
                        <option value="bca">B.C.A.</option>
                        <option value="bba">B.B.A.</option>
                        <option value="bcom">B.Com.</option>
                        <option value="btech">B.Tech.</option>
                        <option value="m.tech">M.Tech.</option>
                        <option value="m.com">M.Com.</option>
                        <option value="m.b.a.">M.B.A.</option>
                    </select>
                </td>
            </tr>
            <tr>
                <td> <input type="submit" name="submit" value="SUBMIT FORM"/> </td>
                <td> <input type="reset" name="reset" value="RESET FORM"/> </td>
        </fieldset>
    </form>
<?php if(isset($_POST['submit'])) { ?>
    <?php
        $r = $_POST['rno'] ?? '';
        echo "ROLL NO = $r<br><br>";
        $n = $_POST['txtname'] ?? '';
        echo "NAME = $n<br><br>";
        $g = $_POST['gender'] ?? '';
        echo "GENDER = $g<br><br>";
        $f = $_FILES['img']['name'] ?? '';
        echo "IMAGE = $f<br><br>";
?>
        <?php if($f != '') { echo "<img src='uploads/$f' width='200' height='200'>"; } ?>
        <br><br>
    <?php
        $h = $_POST['hobby'] ?? [];
        echo "HOBBIES:<br>";
        foreach ($h as $element) {
            echo "$element<br>";
        }   
        echo "<br><br>";
        $b = $_POST['pull'] ?? '';
        echo "BLOOD GROUP = $b<br><br>";
        $a = $_POST['address'] ?? '';
        echo "ADDRESS = $a<br><br>";
        $e = $_POST['list'] ?? [];
        echo "EDUCATION:<br>";
        foreach ($e as $element) {
            echo "$element<br>";
        }
    ?>
<?php } ?>
</body>

</html>