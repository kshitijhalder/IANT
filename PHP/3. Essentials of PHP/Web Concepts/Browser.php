<?php
function identify_the_Browser() {
    $var_agent = $_SERVER['HTTP_USER_AGENT'];
    $browser_name = 'Not known';
    $platform_name = 'Not known';
    $version_number = '';

    # Get the platform
    if (preg_match('/linux/i', $var_agent)) {
        $platform_name = 'linux';
    } elseif (preg_match('/macintosh|mac os x/i', $var_agent)) {
        $platform_name = 'mac';
    } elseif (preg_match('/windows|win32/i', $var_agent)) {
        $platform_name = 'windows';
    }

    # Get the browser
    if (preg_match('/MSIE/i', $var_agent) && !preg_match('/Opera/i', $var_agent)) {
        $browser_name = 'Internet Explorer';
        $short = 'MSIE';
    } elseif (preg_match('/Arc\//i', $var_agent)) {
        $browser_name = 'Arc';
        $short = 'Arc';
    } elseif (preg_match('/Chrome/i', $var_agent) && !preg_match('/Arc\//i', $var_agent)) {
        $browser_name = 'Google Chrome';
        $short = 'Chrome';
    } elseif (preg_match('/Firefox/i', $var_agent)) {
        $browser_name = 'Mozilla Firefox';
        $short = 'Firefox';
    } elseif (preg_match('/Opera/i', $var_agent)) {
        $browser_name = 'Opera';
        $short = 'Opera';
    }

    # Get the version number
    $version = array('Version', $short, 'other');
    $pattern = '#(?<browser>' . join('|', $version) . ')[/ ]+(?<version>[0-9.|a-zA-Z.]*)#';

    if (!preg_match_all($pattern, $var_agent, $matches)) {
        # Just continue since no matching number
    }

    # Checking how many versions we have
    $n = count($matches['browser']);
    if ($n != 1) {
        if (strripos($var_agent, "Version") < strripos($var_agent, $short)) {
            $new_version = $matches['version'][0];
        } else {
            $new_version = $matches['version'][1];
        }
    } else {
        $new_version = $matches['version'][0];
    }

    # Checking if the version is empty
    if ($new_version == null || $new_version == '') {
        $new_version = '?';
    }

    return array(
        'name' => $browser_name,
        'version' => $new_version,
        'platform' => $platform_name
    );
}

# now try it
$browser = identify_the_Browser();
$your_browser = "Your browser : " . $browser['name'] . " " . $browser['version'] . " on " . $browser['platform'];
echo $your_browser;
?>