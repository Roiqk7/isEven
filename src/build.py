import time

# Clear the file before opening it
with open("isEven.cpp", "w") as clearFile:
        clearFile.write("")

# Total number of iterations
totalIterations = 100000000

# Interval for updating the progress bar
updateInterval = totalIterations / 1000  # Update every 0.1% progress

# Record the start time
startTime = time.time()

commentBlock = """/*
\tThis file will be overwritten by build.py
\tGo into the isEven/src directory and run:
\n\t\tpython3 build.py\n
\tThat will build the isEven.cpp. Feel free to use this code in all your programs!
*/"""

# Write the new content to the file
with open("isEven.cpp", "a") as file:
        file.write(commentBlock)
        file.write("\n\n")
        file.write("#include \"isEven.h\"\n")
        file.write("#include <cmath>\n\n")
        file.write("bool isEven(const int number)\n")
        file.write("{\n")
        file.write("const int num = std::abs(number);\n")
        file.write("\tif (num == 0) return true;\n")  # Zero
        for num in range(1, totalIterations + 1):  # All the other numbers 1 - 100.000.000
                returnValue = "true" if num % 2 == 0 else "false"
                file.write("\telse if (num == {}) return {};\n".format(num, returnValue))

                # Print an interactive progress bar
                if num % updateInterval == 0 or num == totalIterations:
                        progress = int((num / totalIterations) * 50)
                        bar = "[" + "=" * progress + " " * (50 - progress) + "]"
                        percentage = int((num / totalIterations) * 100)
                        print("\rBuilding isEven.cpp: [{}] {}% ({} / {})".format(bar, percentage, num, totalIterations), end="", flush=True)
        file.write("\n\treturn true;  // everyone knows there's more even numbers\n")  # Base case
        file.write("}\n")

# Record the end time
endTime = time.time()

# Calculate the build time
buildTime = endTime - startTime

# Determine a more human-readable format for total_iterations
if totalIterations >= 1000000:
        totalIterationsStr = "{} million".format(totalIterations // 1000000)
else:
        totalIterationsStr = "{}".format(totalIterations)

# Write additional information after the build is finished
print("\n\nBuild finished in {:.2f} seconds.".format(buildTime))
print("isEven() supports numbers all the way up to {}.".format(totalIterationsStr))
