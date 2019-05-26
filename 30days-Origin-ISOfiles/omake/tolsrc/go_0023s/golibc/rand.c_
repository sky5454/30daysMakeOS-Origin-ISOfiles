/* copyright(C) 2003 H.Kawai (under KL-01). */

unsigned int rand_seed = 1;

int rand(void)
{
	rand_seed = rand_seed * 1103515245 + 12345;
	return (unsigned int) (rand_seed >> 16) & 32767;
}
