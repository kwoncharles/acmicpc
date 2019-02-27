def GetInput():
    length = int(input());
    seq = [int(x) for x in input().split()]

    return seq[:length]

def GetIndicesOfMaxValues(seq):
    return [i for i,val in enumerate(seq) if val == max(seq)]

def ComputeNumOfAdditionToBePalindrome(seq):
    count = 0
    newSeq = seq

    maxValues = GetIndicesOfMaxValues(newSeq)

    for i in maxValues[::-1]:
        del newSeq[i]

    while (len(newSeq)):
        maxValues = GetIndicesOfMaxValues(newSeq)
        if (len(maxValues)%2 != 0):
            count+=1
        for i in maxValues[::-1]:
            del newSeq[i]

    return count


seq = GetInput()
result = ComputeNumOfAdditionToBePalindrome(seq)
print(result)
