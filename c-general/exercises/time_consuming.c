//A program that strives to use CPU processing.

int main() {
	int i, j, k, l = 0;
	for (i = 0; i < 100000; i++)
		for (j = 0; j < 100000; j++)
			for (k = 0; k < 100000; k++)
				l++;
	return 0;
}
