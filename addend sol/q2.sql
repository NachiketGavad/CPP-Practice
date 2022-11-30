SELECT Productkey,Product, Standard_cost, Category, Model
FROM Product
WHERE model_name LIKE 'M%'
OR model_name LIKE 'N%'
OR model_name LIKE 'O%'
OR model_name LIKE 'P%'
OR model_name LIKE 'Q%'
OR model_name LIKE 'R%'
OR model_name LIKE 'S%'
OR model_name LIKE 'T%'
OR model_name LIKE 'U%'
OR model_name LIKE 'V%'
OR model_name LIKE 'W%'
OR model_name LIKE 'X%'
OR model_name LIKE 'Y%'
OR model_name LIKE 'Z%'
ORDER BY model_name ;
