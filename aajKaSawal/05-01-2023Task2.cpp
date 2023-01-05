//question: https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?fbclid=IwAR1BQubhEoUp6FwEja7vFUg-BSC5KmGzOcTwUjNxmhFaNWGyIETu5cNEN0w
int convertFive(int n) {
    if(n == 0)return 0;
    int d = n % 10 ? n % 10 : 5;
    return convertFive(n/10)*10 + d;
}