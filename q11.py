import networkx as nx
import numpy as np

# Generating a random graph with 200 nodes
G = nx.erdos_renyi_graph(n=50, p=0.1, seed=42)  # Adjust parameters as needed

# Get the edge list
edge_list = list(G.edges())

# Write the edge list to a file (e.g., CSV)
filename = "random_graph.csv"

with open(filename, 'w') as file:
    file.write("source,target\n")
    for edge in edge_list:
        file.write(f"{edge[0]},{edge[1]}\n")

print(f"Edge list written to {filename}")
