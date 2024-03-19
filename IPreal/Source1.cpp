#include "Header.h"

int plusplus(int start, int end, int out1, int out2, int out3, int comm1, int comm2, int includnt)
{
	if (includnt == 0)
	{
		if (start > end)
		{
			return 0;
		}
	}
	if (includnt == 1)
	{
		if (start > end || start == out1)
		{
			return 0;
		}
	}
	if (includnt == 2)
	{
		if (start > end || start == out1 || start == out2)
		{
			return 0;
		}
	}
	if (includnt == 3)
	{
		if (start > end || start == out1 || start == out2 || start == out3)
		{
			return 0;
		}
	}
	if (start == end)
	{
		return 1;
	}
	else
	{
		return plusplus(start + comm1, end, out1, out2, out3, comm1, comm2, includnt) + plusplus(start + comm2, end, out1, out2, out3, comm1, comm2, includnt);
	}
}

int plusmult(int start, int end, int out1, int out2, int out3, int comm1, int comm2, int includnt)
{
	if (includnt == 0)
	{
		if (start > end)
		{
			return 0;
		}
	}
	if (includnt == 1)
	{
		if (start > end || start == out1)
		{
			return 0;
		}
	}
	if (includnt == 2)
	{
		if (start > end || start == out1 || start == out2)
		{
			return 0;
		}
	}
	if (includnt == 3)
	{
		if (start > end || start == out1 || start == out2 || start == out3)
		{
			return 0;
		}
	}
	if (start == end)
	{
		return 1;
	}
	else
	{
		return plusmult(start + comm1, end, out1, out2, out3, comm1, comm2, includnt) + plusmult(start * comm2, end, out1, out2, out3, comm1, comm2, includnt);
	}
}

int multmult(int start, int end, int out1, int out2, int out3, int comm1, int comm2, int includnt)
{
	if (includnt == 0)
	{
		if (start > end)
		{
			return 0;
		}
	}
	if (includnt == 1)
	{
		if (start > end || start == out1)
		{
			return 0;
		}
	}
	if (includnt == 2)
	{
		if (start > end || start == out1 || start == out2)
		{
			return 0;
		}
	}
	if (includnt == 3)
	{
		if (start > end || start == out1 || start == out2 || start == out3)
		{
			return 0;
		}
	}
	if (start == end)
	{
		return 1;
	}
	else
	{
		return multmult(start * comm1, end, out1, out2, out3, comm1, comm2, includnt) + multmult(start * comm2, end, out1, out2, out3, comm1, comm2, includnt);
	}
}

int plusplusplus(int start, int end, int out1, int out2, int out3, int comm1, int comm2, int comm3, int includnt)
{
	if (includnt == 0)
	{
		if (start > end)
		{
			return 0;
		}
	}
	if (includnt == 1)
	{
		if (start > end || start == out1)
		{
			return 0;
		}
	}
	if (includnt == 2)
	{
		if (start > end || start == out1 || start == out2)
		{
			return 0;
		}
	}
	if (includnt == 3)
	{
		if (start > end || start == out1 || start == out2 || start == out3)
		{
			return 0;
		}
	}
	if (start == end)
	{
		return 1;
	}
	else
	{
		return plusplusplus(start + comm1, end, out1, out2, out3, comm1, comm2, comm3, includnt) + plusplusplus(start + comm2, end, out1, out2, out3, comm1, comm2, comm3, includnt) + plusplusplus(start + comm3, end, out1, out2, out3, comm1, comm2, comm3, includnt);
	}
}

int plusplusmult(int start, int end, int out1, int out2, int out3, int comm1, int comm2, int comm3, int includnt)
{
	if (includnt == 0)
	{
		if (start > end)
		{
			return 0;
		}
	}
	if (includnt == 1)
	{
		if (start > end || start == out1)
		{
			return 0;
		}
	}
	if (includnt == 2)
	{
		if (start > end || start == out1 || start == out2)
		{
			return 0;
		}
	}
	if (includnt == 3)
	{
		if (start > end || start == out1 || start == out2 || start == out3)
		{
			return 0;
		}
	}
	if (start == end)
	{
		return 1;
	}
	else
	{
		return plusplusmult(start + comm1, end, out1, out2, out3, comm1, comm2, comm3, includnt) + plusplusmult(start + comm2, end, out1, out2, out3, comm1, comm2, comm3, includnt) + plusplusmult(start * comm3, end, out1, out2, out3, comm1, comm2, comm3, includnt);
	}
}

int plusmultmult(int start, int end, int out1, int out2, int out3, int comm1, int comm2, int comm3, int includnt)
{
	if (includnt == 0)
	{
		if (start > end)
		{
			return 0;
		}
	}
	if (includnt == 1)
	{
		if (start > end || start == out1)
		{
			return 0;
		}
	}
	if (includnt == 2)
	{
		if (start > end || start == out1 || start == out2)
		{
			return 0;
		}
	}
	if (includnt == 3)
	{
		if (start > end || start == out1 || start == out2 || start == out3)
		{
			return 0;
		}
	}
	if (start == end)
	{
		return 1;
	}
	else
	{
		return plusmultmult(start + comm1, end, out1, out2, out3, comm1, comm2, comm3, includnt) + plusmultmult(start * comm2, end, out1, out2, out3, comm1, comm2, comm3, includnt) + plusmultmult(start * comm3, end, out1, out2, out3, comm1, comm2, comm3, includnt);
	}
}

int multmultmult(int start, int end, int out1, int out2, int out3, int comm1, int comm2, int comm3, int includnt)
{
	if (includnt == 0)
	{
		if (start > end)
		{
			return 0;
		}
	}
	if (includnt == 1)
	{
		if (start > end || start == out1)
		{
			return 0;
		}
	}
	if (includnt == 2)
	{
		if (start > end || start == out1 || start == out2)
		{
			return 0;
		}
	}
	if (includnt == 3)
	{
		if (start > end || start == out1 || start == out2 || start == out3)
		{
			return 0;
		}
	}
	if (start == end)
	{
		return 1;
	}
	else
	{
		return multmultmult(start * comm1, end, out1, out2, out3, comm1, comm2, comm3, includnt) + multmultmult(start * comm2, end, out1, out2, out3, comm1, comm2, comm3, includnt) + multmultmult(start * comm3, end, out1, out2, out3, comm1, comm2, comm3, includnt);
	}
}