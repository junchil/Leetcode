/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.
*/

package main

import (
	"fmt"
)

func longestCommonPrefix(strs []string) string {
	if len(strs) == 0 {
		return ""
	}

	res := strs[0]
	for _, str := range strs {
		if len(str) < len(res) {
			res = str
		}
	}

	for i, alph := range res {
		for j := 0; j < len(strs); j++ {
			if strs[j][i] != byte(alph) {
				return strs[j][:i]
			} 
		}
	}
	return res
}

func main()  {
	a := []string{"flowers", "flow", "flight"}
	b := longestCommonPrefix(a)
	fmt.Println(b)

}