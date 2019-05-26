@ECHO OFF
ECHO OSASKをディスクにインストールします
ECHO Aドライブにディスクを入れてEnterを押してください
ECHO インストールを中止する場合は、Ctrl+Cを押してください
PAUSE
IMGTOL w -512 A: OSAIMGAT.BIN
ECHO インストールを完了しました