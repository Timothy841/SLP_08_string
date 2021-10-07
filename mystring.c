#include <stdio.h>

int mystrlen(char *s){
	int sum = 0;
	while(*(s++)){
	sum++;
	}
	return sum;
}

char * mystrcpy(char *dest, char *source){
	int i = 0;
	while (*source!=0){
		i++;
		dest++;
		source++;
	}
	while (i){
		*dest = *source;
		dest--;
		source--;
		i--;
	}
	*dest = *source;
	return dest;
}

char * mystrncpy(char *dest, char *source, int n){
	int i = 0;
	int len = mystrlen(source);
	while (i!=n){
		if (i>len){
			*(dest++) = 0;
		}
		else{
			*(dest++) = *(source++);
		}
		i++;
	}
	return dest-n;
}

char * mystrcat(char *dest, char *source){
	int dest_len = mystrlen(dest);
	int source_len = mystrlen(source);
	int copy = source_len;
	dest+=dest_len;
	while (source_len){
		*dest = *source;
		dest++;
		source++;
		source_len--;
	}
	*dest = 0;
	return dest-=(dest_len+copy);
}

int mystrcmp(char *s1, char *s2){
	while(*s1 == *s2){
		if (*s1){
			s1++;
			s2++;
		}
		else{
			return 0;
		}
	}
	if (*s1 > *s2){
		return 1;
	}
	return -1;
}

char * mystrchr(char *s, char c){
	int i = mystrlen(s);
	while (*s!=c){
		s++;
		i--;
		if (i==0 && c!=0){
			return 0;
		}
	}
	return s;
}
