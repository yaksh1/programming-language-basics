SELECT product_code,count(product_code) FROM sales.transactions group by product_code;
select* from sales.transactions where product_code='Prod001';