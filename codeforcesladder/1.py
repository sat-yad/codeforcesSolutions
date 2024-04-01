import csv

# Specify the input and output file paths
input_file_path = 'Wiki-Vote.txt'
output_csv_path = 'output.csv'

# Open the input text file in read mode
with open(input_file_path, 'r') as input_file:
    # Read lines from the input file
    lines = input_file.readlines()

    # Split each line into fields (assuming fields are separated by spaces)
    data = [line.strip().split() for line in lines]

    # Open the output CSV file in write mode
    with open(output_csv_path, 'w', newline='') as output_csv:
        # Create a CSV writer
        csv_writer = csv.writer(output_csv)

        # Write the data to the CSV file
        csv_writer.writerows(data)

print(f'Conversion from {input_file_path} to {output_csv_path} completed.')
