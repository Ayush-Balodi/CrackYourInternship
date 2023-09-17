class Solution {

    /**
     * @param Integer[] $nums
     * @return Boolean
     */
    function increasingTriplet($nums) {
        $n=sizeof($nums);
        echo $n;
        
        $c1=PHP_INT_MAX;
        $c2=PHP_INT_MAX;
        
        for( $i=0; $i<$n ; $i++ ){
            if($nums[$i] <= $c1){
                $c1 = $nums[$i];
            }
            else if( $nums[$i] <= $c2 ){
                $c2 = $nums[$i];
            }
            else{
                return true;
            }
        }
        return false;
    }
}