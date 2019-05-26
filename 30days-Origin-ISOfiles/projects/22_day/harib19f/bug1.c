void api_putchar(int c);
void api_end(void);

void HariMain(void)
{
	char a[100];
	a[10] = 'A';		/* ‚±‚ê‚Í‚à‚¿‚ë‚ñ‚¢‚¢ */
	api_putchar(a[10]);
	a[102] = 'B';		/* ‚±‚ê‚Í‚Ü‚¸‚¢‚æ‚Ë */
	api_putchar(a[102]);
	a[123] = 'C';		/* ‚±‚ê‚à‚Ü‚¸‚¢‚æ‚Ë */
	api_putchar(a[123]);
	api_end();
}
