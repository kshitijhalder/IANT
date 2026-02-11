function Form () {
    var name = document.f1.name.value;
    var email = document.f1.email.value;
    var password = document.f1.password.value;
    document.writeln("Name: " + name + "<br>");
    document.writeln("Email: " + email + "<br>");
    document.writeln("Password: " + password + "<br>");
    alert("Form Submitted Successfully!");
}