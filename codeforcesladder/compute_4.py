 # Importing Required Libraries
import pandas as pd
from mlxtend.frequent_patterns import apriori
from mlxtend.frequent_patterns import fpgrowth
from mlxtend.frequent_patterns import association_rules

# Reading CSV File
df = pd.read_csv("games_sales_dataset.csv")

# Apriori Algorithm
frequent_itemsets_apriori = apriori(df.astype('bool'), min_support=0.4)
rules_apriori = association_rules(frequent_itemsets_apriori, metric="confidence", min_threshold=0.45)

# F-P Growth Algorithm
frequent_itemsets_fpgrowth = fpgrowth(df.astype('bool'), min_support=0.4)
rules_fpgrowth = association_rules(frequent_itemsets_fpgrowth, metric="confidence", min_threshold=0.45)

# Printing Results
print("Results using Apriori Algorithm")
print(frequent_itemsets_apriori)
print(rules_apriori)

print("Results using F-P Growth Algorithm")
print(frequent_itemsets_fpgrowth)
print(rules_fpgrowth)
