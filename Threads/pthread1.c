#include <stdio.h>
#include <pthread.h>  //gives POSIX thread API

void *routine(void *args) {
  printf("Testing the thread\n");
  sleep(3);
  printf("Hello!\n");
  return NULL;
}

int main() {
  pthread_t t1, t2; 
  int i, j, k, l;
  i = pthread_create(&t1, NULL, &routine, NULL);
  j = pthread_create(&t2, NULL, &routine, NULL);

  k = pthread_join(t1, NULL);
  l = pthread_join(t2, NULL); //tells main() to wait for t1 to complete

  printf("%d %d %d %d\n",i, j, k, l);
  printf("Main function\n");
  return 0;

}

/*             Process
                |
        ┌───────┴───────┐
        ↓               ↓
   Main thread      New thread
      main()          routine()
                        |
                        ↓
              "Testing the thread"
*/
