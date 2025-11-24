#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;
    result.reserve(people.size());
    for (Human& h : people) {
        h.birthday();
        bool monster = h.isMonster();
        result.push_back(monster ? 'n' : 'y');
    }

    std::reverse(result.begin(), result.end());
    return result;
}