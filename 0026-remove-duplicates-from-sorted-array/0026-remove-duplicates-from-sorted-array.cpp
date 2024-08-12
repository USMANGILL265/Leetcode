class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> orignal;
        vector<int> :: iterator it;
        for(it =nums.begin(); it!=nums.end();it++){
            int ele=*it;
            if(find(orignal.begin(), orignal.end(), ele)!=orignal.end()){
                nums.erase(it);
                it--;
            }
            else{
                orignal.push_back(*it);
            }
        }
        return nums.size();
    }
};