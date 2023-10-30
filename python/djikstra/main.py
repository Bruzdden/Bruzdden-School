def _graph(graph, start, file):
    costList = [1e7] * len(graph)
    preds = [-1] * len(graph)
    costList[start] = 0
    visited = []
    temp = start
    for _ in range(len(graph)):
        smallestCost = 1e7
        for i in range(len(graph)):
            if i not in visited and costList[temp] < smallestCost:
                temp = i
                smallestCost = costList[temp]
        visited.append(temp)
        for i in range(len(graph)):
            if i not in visited and graph[temp][i] > 0:
                cost = costList[temp] + graph[temp][i]
                if cost < costList[i]:
                    costList[i] = cost
                    preds[i] = temp
    with open(file, "w") as f:
        f.write(str(costList))
        f.write(str(preds))

    print("Hodnoty:", costList)
    print("preds:", preds)


graph = [
    [0, 4, 6, 0, 6],
    [4, 0, 2, 4, 0],
    [6, 2, 0, 0, 1],
    [0, 4, 0, 0, 2],
    [6, 0, 1, 2, 0],
]

_graph(graph, 0, "file.txt")

