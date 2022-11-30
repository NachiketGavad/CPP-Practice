SELECT price
   FROM Sales
   WHERE price = 
    (SELECT MIN(price) FROM Sales);
