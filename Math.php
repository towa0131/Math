<?php

namespace towa0131\Math;

$a = -1;
$b = -1;

while (true) {
    echo "オプションを選択してください" . PHP_EOL;
    echo "0 : 足し算" . PHP_EOL;
    echo "1 : 引き算" . PHP_EOL;
    echo "2 : 掛け算" . PHP_EOL;
    // echo "3 : 割り算" . PHP_EOL;
    // echo "4 : べき乗" . PHP_EOL;
    echo "9 : プログラムを終了" . PHP_EOL;

    $option = (int)trim(fgets(STDIN));

    if (0 <= $option && $option <= 2) {
        echo "A : ";
        $a = (int)trim(fgets(STDIN));
        echo "B : ";
        $b = (int)trim(fgets(STDIN));
    }

    switch ($option) {
        case 0:
            echo "ans) $a + $b = " . add($a, $b) . PHP_EOL;
            break;
        case 1:
            echo "ans ) $a - $b = " . subtract($a, $b) . PHP_EOL;
            break;
        case 2:
            echo "ans ) $a * $b = " . multiply($a, $b) . PHP_EOL;
            break;
        case 9:
            exit(0);
            break;
        default:
            echo "正しいオプションを入力してください。" . PHP_EOL;
            break;
    }

    echo PHP_EOL;
}

function add(int $a, int $b): int
{
    return $a + $b;
}

function subtract(int $a, int $b): int
{
    return $a - $b;
}

function multiply(int $a, int $b): int
{
    return $a * $b;
}
