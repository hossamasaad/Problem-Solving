/*
 * Hossam
 */
 
class EllysXors {
public:
    long long getXor(long long L, long long R){
    long long ans = L;
    for (long long i = L+1; i <= R ; i++) {
        ans =  ans ^ i;
    }
    return ans;
}
};
