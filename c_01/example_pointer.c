// Exemple :
void	pointeur(int *pointeurnum);

int main(void) {
	int ecole = 42;

	pointeur(&ecole);

	printf("%d", ecole);
	return (0);
}

void	pointeur(int *pointeurnum) {
	*pointeurnum *= 2;
}