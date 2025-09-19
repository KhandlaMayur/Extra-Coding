class Solution {
  public:
    int BasicDataType(string s) {
        // code here
        if(!isdigit(s[0]) && s[0]!='.'){
            return sizeof(char);
        }
        if(s.find('.')== string::npos){
            return sizeof(int);
        }
        int precision =s.length() -s.find('.')-1;
        return (precision > 5) ? sizeof(double) : sizeof(float);
        // if(precision > 5 ){
        //     retrun sizeof(double);
        // }
        // else{
        //     retrun sizeof(float);
        // }
        
    }
};
