nums = input("Enter the array elements separated by spaces: ").split()
nums = [int(num) for num in nums]

reversed_nums = list(reversed(nums))
if nums == reversed_nums:
    print("True,The array is a palindrome.")
else:
    print("False,The array is not a palindrome.")
