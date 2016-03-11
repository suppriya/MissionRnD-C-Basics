/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	int i;
	 int y, y1, d, d1, m, m1;
	 for (i = 0; i < 2; i++)
	 {
		 if ((dob1[i] < 48 || dob1[i] >57) || (dob2[i] < 48 || dob2[i] > 57))
		 {
			 return -1;
		 }
	}

	 for (i = 3; i < 5; i++)
	 {
		 if ((dob1[i] < 48 || dob1[i] >57) || (dob2[i] < 48 || dob2[i] > 57))
		 {
			 return -1;
		 }
	 }
	 for (i = 6; i <= 9; i++)
	 {
		 if ((dob1[i] < 48 || dob1[i] >57) || (dob2[i] < 48 || dob2[i] > 57))
		 {
			 return -1;
		 }
	 }


    y = (dob1[9] - '0') + 10 * (dob1[8] - '0') + 100 * (dob1[7] - '0') + 1000 * (dob1[6] - '0');
	y1 = (dob2[9] - '0') + 10 * (dob2[8] - '0') + 100 * (dob2[7] - '0') + 1000 * (dob2[6] - '0');
	m = (dob1[4] - '0') + 10 * (dob1[3] - '0');
	m1 = (dob2[4] - '0') + 10 * (dob2[3] - '0');
	d = (dob1[1] - '0') + 10 * (dob1[0] - '0');
	d1 = (dob2[1] - '0') + 10 * (dob2[0] - '0');

	if ((y != 0 && y1 != 0) && (m > 0 && m < 13) && (m1 >0 && m1 < 13))
	{
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
		{
			if (m == 2)
			{
				if (d <=0 || d >29)
					return -1;
			}
		}
		else if (m == 2)
		{
			if (d <= 0 || d > 28)
				return -1;
		}
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
		{
			if (d <= 0 || d > 31)
				return -1;
		}
		if (m == 4 || m == 6 || m == 9 || m == 11)
		{
			if (d <= 0 || d > 30)
				return -1;
		}
		if ((y1 % 4 == 0 && y1 % 100 != 0) || y1 % 400 == 0)
		{
			if (m1 == 2)
			{
				if (d1 <=0 || d1 > 29)
					return -1;
			}
		}
		else if (m1 == 2)
		{
			if (d1 <= 0 || d1 > 28)
				return -1;
		}

		if(m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)
		{
			if (d1 <= 0 || d1 > 31)
				return -1;
		}
		if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)
		{
			if (d1 <= 0 || d1 > 30)
				return -1;
		}
	}
	else return -1;
    
	for (i = 6; i <= 9; i++)
	{
		if (dob1[i] == dob2[i])
		{

		}
		else if (dob1[i] < dob2[i])
		{
			return 1;
		}
		else if (dob1[i] > dob2[i])
		{
			return 2;
		}
	}
	for (i = 3; i < 5; i++)

	{

		if (dob1[i] == dob2[i])
		{

		}
		else if (dob1[i] < dob2[i])
		{
			return 1;
		}
		else if (dob1[i] > dob2[i])
		{
			return 2;
		}

	}
	for (i = 0; i < 2; i++)

	{
		if (dob1[i] == dob2[i])
		{

		}
		else if (dob1[i] < dob2[i])
		{
			return 1;
		}
		else if (dob1[i] > dob2[i])
		{
			return 2;
		}
	}

	return 0;
}


