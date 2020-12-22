import os

fn main() {
    mut option := -1
    println("オプションを選択してください")
    println("0 : 足し算")
    println("1 : 引き算")
    println("2 : 掛け算")
    println("3 : 割り算")
    println("9 : プログラムを終了")

    for {
        option = os.input(">> ").int()
        if option == 9 {
            exit(0)
        }

        if 0 <= option && option <= 3 {
            break
        }
        println("正しいオプションを入力してください。")
    }

    a := os.input("A : ").f64()
    b := os.input("B : ").f64()

    match option {
        0 {
            ans := add(a, b)
            println("$a + $b = $ans")
        }
        1 {
            ans := subtract(a, b)
            println("$a - $b = $ans")
        }
        2 {
            ans := multiply(a, b)
            println("$a * $b = $ans")
        }
        3 {
            ans, zero_div := divide(a, b)
            if zero_div {
                println("$a / $b = undefined")
            } else {
                println("$a / $b = $ans")
            }
        }
        else {

        }
    }
}

fn add(a f64, b f64) f64 {
    return a + b
}

fn subtract(a f64, b f64) f64 {
    return a - b
}

fn multiply(a f64, b f64) f64 {
    return a * b
}

fn divide(a f64, b f64) (f64, bool) {
    if b == 0 {
        return 0, true
    }

    return a / b, false
}
