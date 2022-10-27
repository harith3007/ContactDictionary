SRCDIR = ../src
BINDIR = ../bin
OBJDIR = ../obj
INCDIR = ../include
CFLAGS = gcc -c -g -I${INCDIR}
all: main.o options.o admin.o admin_menu.o clear.o user_reg.o pass_reset.o user_login.o user_menu.o addcon.o delpersonal.o delbusiness.o updatepersonal.o updatebusiness.o display.o listpersonal.o listbusiness.o validate.o
main.o:
	${CFLAGS} ${SRCDIR}/main.c -o ${OBJDIR}/main.o
options.o:
	${CFLAGS} ${SRCDIR}/options.c -o ${OBJDIR}/options.o
clear.o:
	${CFLAGS} ${SRCDIR}/clear.c -o ${OBJDIR}/clear.o
admin.o:
	${CFLAGS} ${SRCDIR}/admin.c -o ${OBJDIR}/admin.o
admin_menu.o:
	${CFLAGS} ${SRCDIR}/admin_menu.c -o ${OBJDIR}/admin_menu.o
user_reg.o:
	${CFLAGS} ${SRCDIR}/user_reg.c -o ${OBJDIR}/user_reg.o
pass_reset.o:
	${CFLAGS} ${SRCDIR}/passreset.c -o ${OBJDIR}/pass_reset.o
user_login.o:
	${CFLAGS} ${SRCDIR}/user_login.c -o ${OBJDIR}/user_login.o
user_menu.o:
	${CFLAGS} ${SRCDIR}/user_menu.c -o ${OBJDIR}/user_menu.o
addcon.o:
	${CFLAGS} ${SRCDIR}/addcontact.c -o ${OBJDIR}/addcon.o
delpersonal.o:
	${CFLAGS} ${SRCDIR}/delpersonal.c -o ${OBJDIR}/delpersonal.o
delbusiness.o:
	${CFLAGS} ${SRCDIR}/delbusiness.c -o ${OBJDIR}/delbusiness.o
updatepersonal.o:
	${CFLAGS} ${SRCDIR}/updatepersonal.c -o ${OBJDIR}/updatepersonal.o
updatebusiness.o:
	${CFLAGS} ${SRCDIR}/updatebusiness.c -o ${OBJDIR}/updatebusiness.o
display.o:
	${CFLAGS} ${SRCDIR}/display.c -o ${OBJDIR}/display.o
listpersonal.o:
	${CFLAGS} ${SRCDIR}/listpersonal.c -o ${OBJDIR}/listpersonal.o
listbusiness.o:
	${CFLAGS} ${SRCDIR}/listbusiness.c -o ${OBJDIR}/listbusiness.o
validate.o:
	${CFLAGS} ${SRCDIR}/validations.c -o ${OBJDIR}/validate.o
finalexe:
	gcc ${OBJDIR}/main.o ${OBJDIR}/options.o ${OBJDIR}/clear.o ${OBJDIR}/admin.o ${OBJDIR}/admin_menu.o ${OBJDIR}/user_login.o ${OBJDIR}/user_reg.o ${OBJDIR}/user_menu.o ${OBJDIR}/addcon.o ${OBJDIR}/display.o  ${OBJDIR}/delpersonal.o ${OBJDIR}/delbusiness.o ${OBJDIR}/updatepersonal.o ${OBJDIR}/updatebusiness.o ${OBJDIR}/listpersonal.o ${OBJDIR}/listbusiness.o ${OBJDIR}/pass_reset.o ${OBJDIR}/validate.o -o ${BINDIR}/contact.exe
