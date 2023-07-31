<?php
// Multidimensional array to store item information
$items = array(
    array(
        'Item' => 'Item1',
        'Price' => 100,
        'Quantity' => 12
    ),
    array(
        'Item' => 'Item2',
        'Price' => 250,
        'Quantity' => 10
    ),
    array(
        'Item' => 'Item3',
        'Price' => 80,
        'Quantity' => 8
    ),
    array(
        'Item' => 'Item4',
        'Price' => 150,
        'Quantity' => 5
    ),
    array(
        'Item' => 'Item5',
        'Price' => 200,
        'Quantity' => 15
    )
);

// Display the information in tabular format
echo "<table border='1'>";
echo "<tr><th>Item</th><th>Price</th><th>Quantity</th></tr>";
foreach ($items as $item) {
    echo "<tr>";
    echo "<td>" . $item['Item'] . "</td>";
    echo "<td>" . $item['Price'] . "</td>";
    echo "<td>" . $item['Quantity'] . "</td>";
    echo "</tr>";
}
echo "</table>";
?>
