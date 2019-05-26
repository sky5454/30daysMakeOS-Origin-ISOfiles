/* copyright(C) 2002 H.Kawai (under KL-01). */

unsigned int GO_rand_seed = 1;

int GO_rand(void)
{
	GO_rand_seed = GO_rand_seed * 1103515245 + 12345;
	return (unsigned int) (GO_rand_seed >> 16) & 32767;
}
