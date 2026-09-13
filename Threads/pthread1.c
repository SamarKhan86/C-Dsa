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
  pthread_create(&t1, NULL, &routine, NULL);
  pthread_create(&t2, NULL, &routine, NULL);

  pthread_join(t1, NULL);
  pthread_join(t2, NULL); //tells main() to wait for t1 to complete

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
