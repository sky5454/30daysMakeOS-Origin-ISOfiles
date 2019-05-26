/* copyright(C) 2003 H.Kawai (under KL-01). */

double frexp(double x, int *exp)
{
	int n = 0;
	double s = 1.0;
	if (x < 0.0) {
		x = - x;
		s = -1.0;
	}
	if (x != 0.0) {
		if (x >= 1.0) {
			do {
				n++;
				x *= 0.5;
			} while (x >= 1.0);
		}
		if (x < 0.5) {
			do {
				n--;
				x *= 2.0;
			} while (x < 0.5);
		}
	}
	*exp = n;
	return x * s;
}
