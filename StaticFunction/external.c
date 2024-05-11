static void func();

void external()
{
    func();
}

static void func()
{
    printf("external.c 파일 내의 func\n");
}
