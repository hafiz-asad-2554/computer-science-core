<?php

$display_output = '0';
$current_expression = '';

// Check if the form was submitted 
if ($_SERVER['REQUEST_METHOD'] === 'POST' && isset($_POST['expression'])) {
    $expression_raw = $_POST['expression'];
    
    // Sanitize and replace display symbols with standard operators
    $expression_safe = str_replace(['÷', '×', '−'], ['/', '*', '-'], $expression_raw);

    $error = false;
    $result = 'Error';
    
    // Simple, non-eval based calculation logic for single operations 
    // (This is a safer approach for assignment than using eval() which is risky)
    
    // Regex to match: (Number) (Operator) (Number)
    if (preg_match('/^(-?\d+(\.\d+)?)([+\-*\/%])(\-?\d+(\.\d+)?)$/', $expression_safe, $matches)) {
        $num1 = (float)$matches[1];
        $op = $matches[3];
        $num2 = (float)$matches[4];

        switch ($op) {
            case '+': $result = $num1 + $num2; break;
            case '-': $result = $num1 - $num2; break;
            case '*': $result = $num1 * $num2; break;
            case '/': 
                if ($num2 != 0) {
                    $result = $num1 / $num2;
                } else {
                    $result = 'Error: Div by Zero';
                    $error = true;
                }
                break;
            case '%': 
                // Modulus is typically integer based
                $result = (int)$num1 % (int)$num2; 
                break;
            default: $error = true;
        }
        
        if (!$error) {
            // Store the result back for display and for the hidden input for potential next calculation
            $display_output = (string)$result;
            $current_expression = (string)$result; 
        } else {
            $display_output = $result;
            $current_expression = ''; // Clear expression on error
        }
        
    } else {
        // If the expression is just a number (e.g., '5'), display it
        if (is_numeric($expression_safe)) {
            $display_output = $expression_safe;
            $current_expression = $expression_safe;
        } else {
            // For complex or invalid input (e.g., '1+2+'), display error
            $display_output = 'Syntax Error';
            $current_expression = '';
        }
    }
} else {
    // If not submitted, get the expression from hidden field for non-equal button presses
    // This is primarily for the client-side JS to initialize its state
    $current_expression = ''; // Start fresh if no POST data
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>PHP Server-Side Calculator</title>
  <style>
    body {
      font-family: 'Poppins', sans-serif;
      background: linear-gradient(135deg, #89f7fe, #66a6ff);
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      margin: 0;
    }

    .calculator {
      background: #ffffff5f;
      border: solid, #0072ff;
      border-radius: 25px;
      box-shadow: 0 15px 35px rgba(0, 0, 0, 0.2);
      width: 340px;
      padding: 25px;
      text-align: center;
      transition: 0.3s;
    }

    .calculator:hover {
      transform: translateY(-5px);
      box-shadow: 0 20px 45px rgba(0,0,0,0.25);
    }

    h2 {
      margin-bottom: 15px;
      color: #333;
      font-size: 20px;
    }

    .display {
      background: #f3f3f3;
      padding: 20px;
      border-radius: 15px;
      font-size: 24px;
      font-weight: bold;
      color: #333;
      text-align: right;
      overflow-x: auto;
      box-shadow: inset 0 0 5px rgba(0,0,0,0.1);
    }

    .buttons {
      display: grid;
      grid-template-columns: repeat(4, 1fr);
      gap: 15px;
      margin-top: 20px;
    }

    button {
      background: linear-gradient(135deg, #667eea, #764ba2);
      color: #fff;
      border: none;
      border-radius: 12px;
      padding: 15px 0;
      font-size: 18px;
      font-weight: 600;
      cursor: pointer;
      transition: all 0.3s ease;
      box-shadow: 0 4px 10px rgba(118,75,162,0.3);
    }

    button:hover {
      background: linear-gradient(135deg, #764ba2, #667eea);
      transform: scale(1.05);
    }

    .operator {
      background: linear-gradient(135deg, #f7971e, #ffd200);
      color: #fff;
    }

    .equal {
      background: linear-gradient(135deg, #00c6ff, #0072ff);
      grid-column: span 2;
    }

    .clear {
      background: linear-gradient(135deg, #ff416c, #ff4b2b);
    }

    footer {
      margin-top: 25px;
      color: #777;
      font-size: 13px;
    }
  </style>
</head>
<body>
  <div class="calculator">
    <h2>🧮 Calculator (PHP Powered)</h2>
    <div class="display" id="display"><?php echo htmlspecialchars($display_output); ?></div>

    <form method="POST" action="calculator.php" id="calcForm">
        <input type="hidden" name="expression" id="expression" value="<?php echo htmlspecialchars($current_expression); ?>">

        <div class="buttons">
            <button type="button" class="clear" onclick="clearDisplay()">C</button>
            <button type="button" onclick="deleteLast()">⌫</button>
            <button type="button" class="operator" onclick="Operator('%')">%</button>
            <button type="button" class="operator" onclick="Operator('÷')">÷</button>

            <button type="button" onclick="Number('7')">7</button>
            <button type="button" onclick="Number('8')">8</button>
            <button type="button" onclick="Number('9')">9</button>
            <button type="button" class="operator" onclick="Operator('×')">×</button>

            <button type="button" onclick="Number('4')">4</button>
            <button type="button" onclick="Number('5')">5</button>
            <button type="button" onclick="Number('6')">6</button>
            <button type="button" class="operator" onclick="Operator('−')">−</button>

            <button type="button" onclick="Number('1')">1</button>
            <button type="button" onclick="Number('2')">2</button>
            <button type="button" onclick="Number('3')">3</button>
            <button type="button" class="operator" onclick="Operator('+')">+</button>

            <button type="button" onclick="Number('0')">0</button>
            <button type="button" onclick="Number('.')">.</button>
            <button type="submit" class="equal" onclick="return calculate()">=</button>
        </div>
    </form>
    <footer>Created by Hafiz Muhammad Asad Mustafa 🌟 <hr/> S23NDOCS1M01042 </footer>
  </div>

  <script>
    // 5. Modified JavaScript (Client-Side)
    const display = document.getElementById('display');
    const expressionInput = document.getElementById('expression');
    let currentInput = expressionInput.value || '0';

    function updateDisplay(value) {
      display.textContent = value !== undefined ? value : currentInput;
      expressionInput.value = currentInput;
    }
    
    // Initialize display with PHP-set value
    if (display.textContent !== '0' && display.textContent !== 'Syntax Error' && !/[+\-×÷%−]/.test(display.textContent)) {
        currentInput = display.textContent; // If PHP calculated a result, set it as currentInput
    } else if (display.textContent === '0' || display.textContent === 'Syntax Error' || display.textContent.startsWith('Error:')) {
        currentInput = ''; // Clear input on errors or initial load if result is 0
    } else {
        currentInput = display.textContent;
    }
    
    updateDisplay(display.textContent);


    function Number(num) {
      if (currentInput === '0' && num !== '.') currentInput = '';
      currentInput += num;
      updateDisplay();
    }

    function Operator(op) {
      // Prevent double operators
      if (currentInput === '' || /[+\-×÷%−]$/.test(currentInput)) return;
      currentInput += op;
      updateDisplay();
    }

    function clearDisplay() {
      currentInput = '';
      updateDisplay('0');
    }

    function deleteLast() {
      currentInput = currentInput.slice(0, -1);
      updateDisplay(currentInput || '0');
    }

    function calculate() {
      // This function only ensures the expression is set before submission
      if (currentInput === '' || /[+\-×÷%−]$/.test(currentInput)) {
        updateDisplay('Error');
        return false; // Prevent form submission
      }
      expressionInput.value = currentInput;
      return true; // Allow form submission to PHP
    }
  </script>
</body>
</html>