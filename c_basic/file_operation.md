# File

<stdio.h>
<dir.h>
<io.h>

## read & write

FILE *fopen(const char *path, const char *mode);

fp = fopen("c:\\users\\tom\\data.txt","w"); //failed return NULL pointer

fclose(FILE *fp);  //succeed return 0, failed return EOF

r	rb	    	用于读取	文件起点

w	wb		    用于写入 ( 如果文件不存在则创建文件). 删除文件内容并重新写入.	文件起点

a	ab		    用于增量写入 (如果文件不存在则创建文件)	文件末尾

r+	rb+	r+b	用于读写	文件起点

w+	wb+	w+b	用于读写. 删除文件内容并重新写入.	文件起点

a+	ab+	a+b	用于读写 (如果文件存在则增量写入)	文件末尾


fprintf(fp, "example similar like printf(), number:%d",a); //写入文件

fscanf(fp, "example like scanf(), %d", &a); //从文件读出

char *ch;

fputc(ch,fp);

fgetc(fp);

char str[NUM]; 

fputs(str,fp);

fgets(str, n, fp);

fwrite(buffer,size, n, fp);

fread(buffer, size, n, fp);


## search and position

int fseek(FILE *stream, long offset, int fromwhere);  //return 0 succeed!

fromwhere value:

SEEK_SET 0 beginning

SEEK_CUR 1 current position

SEEK_END 2 end


long ftell(FILE *stream);  //return -1 error.

int rewind(FILE *stream); set *stream to the beginning of the file, succeed return 0

## File opearation

int remove(char *filename);   // char *filename="F:\\data.txt" ,succeed return 0; failed -1

int rename(char *oldname, char *newname); //name must have same section, succeed 0, failed -1

int chmod(char *filename, int mode); // succeed 0, failed -1

mode:

S_IWRITE: write only

S_IREAD: read only

S_IREADS_IWRITE: read&write

int mkdir(char *path); //char *path = "f:\\c_programming\\mydir";  succeed 0, failed -1

int rmdir(char *path); //succeed 0, failed -1

int chdir(char *path); //succeed 0, failed -1
