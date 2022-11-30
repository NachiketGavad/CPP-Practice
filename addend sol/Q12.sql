SELECT id,TotalProductCost FROM Sales WHERE id != 
    (SELECT MIN(price) FROM Sales);
