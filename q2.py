# import networkx as nx
# import matplotlib.pyplot as plt
# import pandas as pd
# import numpy as np

# file = "random_graph.csv"
# df = pd.read_csv(file)

# G = nx.from_pandas_edgelist(df, 'source', 'target', create_using=nx.DiGraph())

# in_degrees = dict(G.in_degree())
# out_degrees = dict(G.out_degree())


# in_degree_values = list(in_degrees.values())
# in_degree_distribution = np.bincount(in_degree_values)

# plt.bar(range(len(in_degree_distribution)), in_degree_distribution, width=1.0, color='orange', alpha=0.7)
# plt.xlabel('In-Degree')
# plt.ylabel('Frequency')
# plt.title('In-Degree Distribution')
# plt.show()

# out_degree_values = list(out_degrees.values())
# out_degree_distribution = np.bincount(out_degree_values)

# plt.bar(range(len(out_degree_distribution)), out_degree_distribution, width=1.0, color='orange', alpha=0.7)
# plt.xlabel('Out-Degree')
# plt.ylabel('Frequency')
# plt.title('Out-Degree Distribution')
# plt.show()
# import networkx as nx
# import matplotlib.pyplot as plt
# import pandas as pd
# import numpy as np

# # Read edges from 'core.edges' file
# edges_file_path = "cora.edges"
# edges_df = pd.read_csv(edges_file_path, sep=',', header=None, names=['source', 'target', 'weight'], dtype=int)

# # Create a directed graph from the edges DataFrame
# G = nx.from_pandas_edgelist(edges_df, 'source', 'target', create_using=nx.DiGraph())

# # Read node labels from 'core.node_labels' file
# node_labels_file_path = "cora.node_labels"
# node_labels_df = pd.read_csv(node_labels_file_path, sep=',', header=None, names=['node', 'label'], dtype=int)

# # Add node labels to the graph
# labels_dict = dict(zip(node_labels_df['node'], node_labels_df['label']))
# nx.set_node_attributes(G, labels_dict, 'label')

# # Compute in-degree and out-degree for each node
# in_degrees = dict(G.in_degree())
# out_degrees = dict(G.out_degree())

# # Plot in-degree distribution
# in_degree_values = list(in_degrees.values())
# in_degree_distribution = np.bincount(in_degree_values)

# plt.bar(range(len(in_degree_distribution)), in_degree_distribution, width=1.0, color='b', alpha=0.7)
# plt.xlabel('In-Degree')
# plt.ylabel('Frequency')
# plt.title('In-Degree Distribution')
# plt.show()

# # Plot out-degree distribution
# out_degree_values = list(out_degrees.values())
# out_degree_distribution = np.bincount(out_degree_values)

# plt.bar(range(len(out_degree_distribution)), out_degree_distribution, width=1.0, color='r', alpha=0.7)
# plt.xlabel('Out-Degree')
# plt.ylabel('Frequency')
# plt.title('Out-Degree Distribution')
# plt.show()


import networkx as nx
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

edges_file_path = "Wiki-vote.txt"
edges_df = pd.read_csv(edges_file_path, sep='\t', comment='#', header=None, names=['source', 'target'], dtype=int)

G = nx.from_pandas_edgelist(edges_df, 'source', 'target', create_using=nx.DiGraph())

in_degrees = dict(G.in_degree())
out_degrees = dict(G.out_degree())

in_degree_values = list(in_degrees.values())
in_degree_distribution = np.bincount(in_degree_values)

plt.bar(range(len(in_degree_distribution)), in_degree_distribution, width=1.0, color='b', alpha=0.7)
plt.xlabel('In-Degree')
plt.ylabel('Frequency')
plt.title('In-Degree Distribution')
plt.show()

out_degree_values = list(out_degrees.values())
out_degree_distribution = np.bincount(out_degree_values)

plt.bar(range(len(out_degree_distribution)), out_degree_distribution, width=1.0, color='r', alpha=0.7)
plt.xlabel('Out-Degree')
plt.ylabel('Frequency')
plt.title('Out-Degree Distribution')
plt.show()




