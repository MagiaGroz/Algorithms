bool used[10010];
int cnt = 0;
for (int i = 1; i <= n; i++) {
	if (!used[i]) {
		dfs(i);
		cnt++;
	}
}
