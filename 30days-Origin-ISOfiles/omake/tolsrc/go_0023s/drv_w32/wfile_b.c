/* for w32 */

int GOLD_write_b(const UCHAR *name, int len, const UCHAR *p0)
/* バイナリモードでファイルに出力 */
{
	HANDLE h;
	int ll = 0;
	if (name)
		h = CreateFileA((char *) name, GENERIC_WRITE, 0, NULL,
			CREATE_ALWAYS, FILE_ATTRIBUTE_ARCHIVE, 0);
	else
		h = GetStdHandle(STD_OUTPUT_HANDLE);
	if (h == INVALID_HANDLE_VALUE)
		goto err;
	if (len)
		WriteFile(h, p0, len, &ll, NULL);
	if (name)
		CloseHandle(h);
	if (ll != len)
		goto err;
	return 0;
err:
	return 1;
}

