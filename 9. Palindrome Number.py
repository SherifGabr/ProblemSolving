y = 12345
x = 11211

length = len(x)
x_str = str(x)

new_x_arr = []

for i in range(len(x)):

    while length != 0:
        new_x_arr[length] = x[-1]
        length = length -1

    c = length - 1