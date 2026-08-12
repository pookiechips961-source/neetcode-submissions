#pragma GCC optimize("O3")

#include <bits/stdc++.h>
using namespace std;

static constexpr size_t max_align = alignof(max_align_t);
alignas(max_align) static unsigned char BUFFER[64 * 1024 * 1024];
static size_t pos = 0;

void *operator new(const size_t size) {
    const size_t padding = (max_align - (pos % max_align)) % max_align;
    pos += padding + size;
    return static_cast<void *>(&BUFFER[pos - size]);
}

void *operator new[](const size_t size) { return operator new(size); }
void operator delete(void *) noexcept {}
void operator delete[](void *) noexcept {}
void operator delete(void *, size_t) noexcept {}
void operator delete[](void *, size_t) noexcept {}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}();
class Solution {
   public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int mid = 0;
        int right = nums.size() - 1;
        while (mid <= right) {
            if (nums[mid] == 0) {
                swap(nums[mid], nums[left]);
                mid++;
                left++;
            } else if (nums[mid] == 2) {
                swap(nums[mid], nums[right]);
                right--;
            } else {
                mid++;
            }
        }
    }
};