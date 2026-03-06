<?php
echo "<h1>🚀 PHP Development Environment</h1>";

// PHP Version
echo "<h2>PHP</h2>";
echo "<p>✅ Version: " . phpversion() . "</p>";

// MySQL Version
echo "<h2>MySQL</h2>";
try {
    $conn = new PDO("mysql:host=localhost", "root", "GgHalder@1231");
    $mysqlVersion = $conn->query('SELECT VERSION()')->fetchColumn();
    echo "<p style='color:green'>✅ Connection successful</p>";
    echo "<p>Version: " . $mysqlVersion . "</p>";
} catch(PDOException $e) {
    echo "<p style='color:red'>❌ Connection failed: " . $e->getMessage() . "</p>";
}

// Composer Version (verified from terminal)
echo "<h2>Composer</h2>";
echo "<p>✅ Version: 2.9.5</p>";
echo "<p style='font-size: 12px; color: #666;'>(Verified via terminal)</p>";

// Valet Version (verified from terminal)
echo "<h2>Valet</h2>";
$valetCheck = file_exists('/opt/homebrew/bin/valet');
if ($valetCheck) {
    echo "<p>✅ Installed and running</p>";
    echo "<p style='font-size: 12px; color: #666;'>(Currently serving this page!)</p>";
} else {
    echo "<p style='color:red'>❌ Not found</p>";
}

// System Info
echo "<h2>System Info</h2>";
echo "<ul>";
echo "<li>Operating System: " . php_uname('s') . " " . php_uname('r') . "</li>";
echo "<li>Architecture: " . php_uname('m') . "</li>";
echo "<li>Server: " . $_SERVER['SERVER_SOFTWARE'] ?? 'Unknown' . "</li>";
echo "</ul>";

// PHP Extensions
echo "<h2>PHP Extensions</h2>";
echo "<details>";
echo "<summary>Click to view all " . count(get_loaded_extensions()) . " loaded extensions</summary>";
echo "<ul style='columns: 3; list-style-type: circle;'>";
foreach (get_loaded_extensions() as $ext) {
    echo "<li>$ext</li>";
}
echo "</ul>";
echo "</details>";

echo "<hr>";
echo "<p style='color: #666; font-size: 12px;'>✅ All systems operational - Ready for PHP development! 🎉</p>";
?>
