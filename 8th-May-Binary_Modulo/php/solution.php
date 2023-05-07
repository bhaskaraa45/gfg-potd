/*
This Code is written by Bhaskar
*/

class Solution {
    public function modulo($s, $m) {
        $k = 0;

        // Convert the binary string to an integer
        for ($i = 0; $i < strlen($s); $i++) {
            $k = (($k << 1) % $m + ($s[$i] - '0') % $m) % $m;
        }

        return $k;
    }
}

