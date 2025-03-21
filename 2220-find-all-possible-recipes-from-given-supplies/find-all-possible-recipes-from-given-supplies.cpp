class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        //BFS approach
        //here we are cooking recipes and then again adding them to supplies 
        //as some recipes might depend on others

        vector<string> ans; //holds final recipes

        unordered_set<string> st(supplies.begin(), supplies.end()); //holds unique supplies 
        queue<int> que;  //holds recipes under making

        //pushing all recipes indices to queue
        for(int i=0; i<recipes.size(); i++){
            que.push(i);
        }

        int lastSize = -1;

        //if size of available supplies is > lastSize
        while(static_cast<int>(st.size())>lastSize){
            lastSize = st.size();
            int queSize = que.size();

            while(queSize-->0){
                int temp = que.front(); //index of current recipe under cooking
                que.pop(); //take out considering it can be cooked 
                bool canDo = true;  

                //traverse across current recipes ingredients to check it they are avilable
                for(auto& s:ingredients[temp]){
                    if(!st.count(s)){   //if not available
                        canDo = false;
                        break;
                    }
                }
                if(!canDo){
                    que.push(temp); //push into que again as not cooked yet
                }
                else{   //if all ing are available add to ans and available set for future use
                    st.insert(recipes[temp]);
                    ans.push_back(recipes[temp]);
                }
            }
        }

        return ans; //final list of recipes that we can create
    }
};