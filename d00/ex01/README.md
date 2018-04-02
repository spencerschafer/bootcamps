# Things to remember

- Define SIZE was used to allow lower numbers to be used for testing.

- Note 1, line 117: Address of contact object  was passsed to allow 
modification to the fields so that when the promptForm function closes, the
values remain. Before the values were being passed in but only remained
for the lifetime of the function.

- Note 2, line 124: Checks to see whether or not a contact has been added
before allowing a user to search for a contact.

- Note 3, line 127: Option has been made -1 so that if it is not passed into the
function on line 30, then the test fails the if-statement on line 162 printing
an error message.

- Note 4, line 145: While loop that passes in each contact to be printed for
the user when the SEARCH command is used.

- Note 5, line 160: Checks whether the length of the input has a length of 1
as the phonebook only goes up to 8. Therefore only 1 digit is needed to
represent 8. Additionally, if the length of the string is only 1, it then checks
that the character entered is a digit. If it is a digit, the character is then
converted into an integer which is then used in the if-statement on line 168.
Also, the option has 1 removed from it because in the printShortContact function
1 is added to the index to allow the user to use natural numbers (i.e. starting
from 1). Since 1 has been added to the index, 1 needs to be subtracted from the
'option' variable to correspond to the correct contact in the array.
(i.e. contact 1 will be contact[0] in the array as 1 has been added to the 
index).

- Note 6, line 165: This if-statement has been optimised to only search the 
contacts that have been added. (i.e. if array has only 3 contacts, only search
from 1 - 3 contacts, and not 1- 8. Note that 1 - 3 will be 0 - 2 in the array).

# Test Cases

- In main menu: Only accepts relevant input i.e 'SEARCH' or 'S'.
- In main menu: Limit programme to adding more than 8 contacts.
- In main menu: ADD 8 contacts, then try ADD another, then check SEARCH menu.
- In main menu: SEARCH when no contacts have been added.
- In ADD menu: Test that relevant fields can accept spaces in their submissions.
- In SEARCH menu: Numbers > 2147483647 and words are not accepted.
