import re


def remove_comments(input_file, output_file):
    with open(input_file, "r") as f:
        content = f.read()

    # Remove single-line comments
    content = re.sub(r"//.*?\n", "", content)

    # Remove multi-line comments
    content = re.sub(r"/\*.*?\*/", "", content, flags=re.DOTALL)

    with open(output_file, "w") as f:
        f.write(content)


# Usage
input_file = "main.cpp"
output_file = "airplane.cpp"
remove_comments(input_file, output_file)
print("Comments removed and saved to '{}'.".format(output_file))
