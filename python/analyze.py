graph = [[0, 1, 0, 1, 0],
         [1, 0, 1, 1, 1],
         [0, 1, 0, 1, 0],
         [1, 1, 1, 0, 0],
         [0, 1, 0, 0, 0],]

def analyze(graph):
    print("Uzlů v grafu je: ", len(graph))
    
    for i in range(len(graph)):
        for j in range(i):
            if graph[i][j] == 1 and graph[j][i] == 1:
                print("Uzly ",i+1," a ",j+1," jsou propojené")
            else:
                print("Uzly ",i+1," a ",j+1," nejsou propojené")


analyze(graph)
