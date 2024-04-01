import pandas as pd

# Replace 'input.csv' with your CSV file's name and location
csv_file_path = 'output.csv'

# Read the CSV file into a pandas DataFrame
df = pd.read_csv(csv_file_path)

# Replace 'output.xlsx' with the desired Excel file name and location
excel_file_path = 'output1.xlsx'

# Write the DataFrame to an Excel file
df.to_excel(excel_file_path, index=False)

print(f'Conversion from CSV to Excel completed. Excel file saved at: {excel_file_path}')
