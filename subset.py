def check(arr,target,n):
    if target==0:
        return True
    if n==0:
        return False
    if arr[n-1]>target:
        return check(arr,target,n-1)
    dp=[set() for x in range(target+1)]
    dp[0].add(())
    for num in arr:
        for i in range(target,num-1,-1):
            for subset in dp[i-num]:
                dp[i].add(subset+(num,))
    return list(dp[target])
    return check(arr,target-arr[n-1],n-1) or check(arr,target,n-1)
arr=[6,8,9,5,4,3,26,2]
target=28
ans=check(arr,target,len(arr))
#print(ans)
'''if ans==True:
    print('Found')
else:
    print('not found')'''
for subset in ans:
    print(subset,"=28")

