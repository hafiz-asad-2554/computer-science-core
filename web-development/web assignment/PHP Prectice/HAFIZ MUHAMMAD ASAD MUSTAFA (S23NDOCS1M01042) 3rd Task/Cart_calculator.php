<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Shopping Cart Calculator</title>
    <style>
        body { font-family: Arial, sans-serif; padding: 20px; }
        table { width: 80%; border-collapse: collapse; margin-bottom: 20px; }
        th, td { border: 1px solid #ddd; padding: 10px; text-align: left; }
        th { background-color: #f2f2f2; }
        .summary-table td { font-weight: bold; }
        .discount-applied { color: #008000; }
        .original-total { text-decoration: line-through; }
    </style>
</head>
<body>

    <h1>Shopping Cart Summary</h1>

    <?php
        $cart = array(
            array("name" => "Laptop", "price" => 850.00, "quantity" => 1),
            array("name" => "Mouse", "price" => 25.50, "quantity" => 3),
            array("name" => "Keyboard", "price" => 75.00, "quantity" => 2),
            array("name" => "Monitor", "price" => 150.00, "quantity" => 1)
        );

        $grand_total = 0;

        echo "<table>";
        echo "<thead><tr><th>Product Name</th><th>Price (USD)</th><th>Quantity</th><th>Total Cost (USD)</th></tr></thead>";
        echo "<tbody>";

        foreach ($cart as $product) {
            $product_total = $product['price'] * $product['quantity'];
            $grand_total += $product_total;

            echo "<tr>";
            echo "<td>" . htmlspecialchars($product['name']) . "</td>";
            echo "<td>$" . number_format($product['price'], 2) . "</td>";
            echo "<td>" . $product['quantity'] . "</td>";
            echo "<td>$" . number_format($product_total, 2) . "</td>";
            echo "</tr>";
        }

        echo "</tbody>";
        echo "</table>";
        
        echo "<hr>";

        $discount_rate = 0.00;
        $original_total = $grand_total;

        if ($original_total > 200) {
            $discount_rate = 0.15;
            $discount_text = "15% (Purchase over $200)";
        } elseif ($original_total > 100) {
            $discount_rate = 0.10;
            $discount_text = "10% (Purchase over $100)";
        } else {
            $discount_text = "No discount applied";
        }

        $discount_amount = $original_total * $discount_rate;
        $final_price = $original_total - $discount_amount;

        echo "<h2>Order Summary</h2>";
        echo "<table class='summary-table'>";
        echo "<tr><td>Original Cart Total</td><td><span class='original-total'>$" . number_format($original_total, 2) . "</span></td></tr>";
        echo "<tr><td>Discount Applied</td><td>" . htmlspecialchars($discount_text) . "</td></tr>";
        echo "<tr><td>Discount Amount</td><td>-$" . number_format($discount_amount, 2) . "</td></tr>";
        echo "<tr><td>Final Price</td><td><span class='discount-applied'>$" . number_format($final_price, 2) . "</span></td></tr>";
        echo "</table>";
    ?>

</body>
</html>