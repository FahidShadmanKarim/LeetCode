class Solution {
public:

bool valid( string s ){
         
    stack < char > stk;

    for( int i = 0 ; s[i] ; i++ ){
              
        if( s[i] == '(')stk.push(s[i]);
              
            else if( s[i] == ')'){
            if( stk.size() )stk.pop();
            else stk.push('a');
           }
         }

    if( stk.size() == 0 )return true;
    else return false;
}

vector < string > vs;
void generate_brackets( string t , int a , int b ){

         if( a == 0 && b == 0 ) {

             if( valid(t) == true ){
                vs.push_back(t);

             }
             else{
                return;
             }
         }
         if( a > 0 ){

              t.push_back('(');
              generate_brackets(t , a - 1 , b  );

              t.pop_back();

         }
          if( b > 0  ){
              t.push_back(')');
              generate_brackets(t , a  , b - 1 );
              t.pop_back();

           }
}


    vector<string> generateParenthesis(int n) {

          generate_brackets("",n,n);

        return vs;
        
    }
};