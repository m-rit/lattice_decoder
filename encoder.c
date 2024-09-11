

func (){

 int i,j , n= 2
 seed = 13
zmin = 10 
zmax = 10
double volZ2 = 1.0, noisevariance , noisedeviation
double snrdb , start_snrdb , end_snrdb
snrstep
seed = 13
prng_id = InitPRNGNT(seed)

/// G alloc matrix
G = AllocMatrix(n,n)
G[0][0] = G[1][1] = 1.0

invG = AllocMatrix(n,n)
inGG[0][0] = invG[1][1] = 1.0

start_snrdb = 5
printf("start SNR in dB ")
end_snrdb = 20

snrstep = 1.0
printf("SNR step in DB ")
numpts = 1000
for (snrdb = start_snrdb; snrdb <= end_snrdb; snrdb += snrstep){
    noisevariance = pow(volZ2, 2.0/n) * exp10(-snrdb/10)
    noisedeviation = sqrt(noisevariance)

    // reset the prng
    point_error_count = 0// how many times decoder makes error
    for (iter = 0 ; iter < numpts; iter++ ){

         // encoding
         for (i =  0; i < n ; i++){
            z[i] = (zmax - zmin)* U + zmin

         }
         // add noise
         y[i] = x[i]  + noisedeviation * prng_id
         // lattice decoding
         for (i = 0. i < n ; i++) decoded_x[i] = rint(y[i]);
         for (i = 0 ; i < n ; i++){
            for (decoded_x = j = 0 ; j < n ; j++){
                dec
            }
            // measure probabilty of error per point
            for (i = 0 ; i < n ; i++){
                if decoded_z[i] != z[i]{
                    point_error_count++
                    break
                }
                if point_error_count >= 100 {
                    break;
                }
            }
         }


    }

}


}