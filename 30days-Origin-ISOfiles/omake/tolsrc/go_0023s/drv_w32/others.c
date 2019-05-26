/* for w32 */

//	void GOLD_exit(int s);		/* 終了する */
int GOLD_getsize(const UCHAR *name); /* ファイルサイズ取得 */
int GOLD_read(const UCHAR *name, int len, UCHAR *b0);
	/* ファイル読み込み、バイナリモード、
		サイズを呼び出し側で直前にファイルチェックしていて、
		ファイルサイズぴったりを要求してくる */

int GOLD_getsize(const UCHAR *name)
{
	HANDLE h;
	int len = -1;
	h = CreateFileA((char *) name, GENERIC_READ, FILE_SHARE_READ,
		NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if (h == INVALID_HANDLE_VALUE)
		goto err;
	len = GetFileSize(h, NULL);
	CloseHandle(h);
err:
	return len;
}

int GOLD_read(const UCHAR *name, int len, UCHAR *b0)
{
	HANDLE h;
	int i;
	h = CreateFileA((char *) name, GENERIC_READ, FILE_SHARE_READ,
		NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, 0);
	if (h == INVALID_HANDLE_VALUE)
		goto err;
	ReadFile(h, b0, len, &i, NULL);
	CloseHandle(h);
	if (len != i)
		goto err;
	return 0;
err:
	return 1;
}
