class Solution {
public:
    double average(vector<int>& salary) {
        int min_salary = INT_MAX;
        int max_salary = INT_MIN;
        float sum = 0;
        for(auto num: salary) {
            sum += num;
            min_salary = min(num, min_salary);
            max_salary = max(num, max_salary);
        }
        sum -= min_salary;
        sum -= max_salary;
        return sum/(salary.size()-2.0);
    }
};