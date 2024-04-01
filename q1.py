import networkx as nx
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

filename = "output.csv"

df = pd.read_csv(filename, skiprows=3)

# Create a graph from the DataFrame
G = nx.from_pandas_edgelist(df, 'source', 'target')


# Visualize the network
plt.figure(figsize=(10, 8))
nx.draw(G, with_labels=False, node_size=10, node_color='skyblue', edge_color='gray', alpha=0.5)
plt.title("Network Visualization (200 nodes)")
plt.show()

# (c) Compute the adjacency matrix
adj_matrix = nx.adjacency_matrix(G).todense()
print("\nAdjacency Matrix:")
print(adj_matrix)

# (d) Compute its average degree < 𝑘 >
average_degree = np.mean(list(dict(G.degree()).values()))
print(f"\nAverage Degree: {average_degree}")

# (e) Plot the ‘scaled degree distribution’, 𝑝𝑘 × 𝑘
degree_distribution = nx.degree_histogram(G)
degrees = range(len(degree_distribution))
scaled_degree_distribution = [count / (len(G.nodes()) * average_degree) for count in degree_distribution]

plt.bar(degrees, scaled_degree_distribution, width=0.8, color='skyblue')
plt.xlabel("Degree")
plt.ylabel("Scaled Degree Distribution")
plt.title("Scaled Degree Distribution")
plt.show()


# Compute network properties
sparseness = nx.density(G)
average_path_length = nx.average_shortest_path_length(G)
diameter = nx.diameter(G)
average_clustering_coefficient = nx.average_clustering(G)

print(f"\nSparseness of the network: {sparseness}")
print(f"Average Path Length: {average_path_length}")
print(f"Diameter: {diameter}")
print(f"Average Clustering Coefficient: {average_clustering_coefficient}")
