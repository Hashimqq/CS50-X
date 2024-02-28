import re
from cs50 import get_string

number = get_string("Number: ")

if re.match(r"^(3[47]\d{13})$", number):
    print("AMEX")
elif re.match(r"^(5[1-5]\d{14})$", number):
    print("MASTERCARD")
elif re.match(r"^(4(\d{12}|\d{15}))$", number):
    print("VISA")
else:
    print("INVALID")
