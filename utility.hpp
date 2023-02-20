/* *************** 
*                 *
*   ft::utility   *
*                 *
 *************** */

#ifndef UTILITY_HPP
# define UTILITY_HPP

namespace ft { // namespace ft

    /* >>>>>>>>>>>>>>>>>>>>>>>>  pair  <<<<<<<<<<<<<<<<<<<<< */
    /* 
    ** Pair of values
    ** This class couples together a pair of values, which may be of different types (T1 and T2).
    ** The individual values can be accessed through its public members first and second.
    ** Pairs are a particular case of tuple.
    ** (see https://cplusplus.com/reference/utility/pair/?kw=pair)
    */

    template <typename T1, typename T2>
    struct pair
    {
        /* Member types */
        typedef T1 first_type;  // Type of member 'first'
        typedef T2 second_type; // Type of member 'second'

        /* Member variables */
        first_type  first;  // The first value in the 'pair'
        second_type second; // The second value in the 'pair'

    /* Member functions */

        /* Constructor */
        /* default */
        pair() : first(), second() {}
        /* copy */
        template <typename U, typename V>
        pair(const pair<U, V> &pr) : first(pr.first), second(pr.second) {}
        /* initialization */
        pair(const first_type &a, const second_type &b) : first(a), second(b) {}

        /* Assign contents */
        pair    &operator=(const pair &pr)
        {
            this->first = pr.first;
            this->second = pr.second;
            return (*this);
        }
    }; // pair

    /* Non-member function overloads */
    /* relational operators */
    template <typename T1, typename T2>
    inline bool operator==(const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
    { return (lhs.first == rhs.first && lhs.second == rhs.second); }

    template <typename T1, typename T2>
    inline bool operator!=(const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
    { return (!(lhs == rhs)); }

    template <typename T1, typename T2>
    inline bool operator<(const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
    { return (lhs.first < rhs.first || (!(rhs.first < lhs.first) && lhs.second < rhs.second)); }

    template <typename T1, typename T2>
    inline bool operator>(const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
    { return (rhs < lhs); }

    template <typename T1, typename T2>
    inline bool operator>=(const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
    { return (!(lhs < rhs)); }

    template <typename T1, typename T2>
    inline bool operator<=(const pair<T1, T2> &lhs, const pair<T1, T2> &rhs)
    { return (!(rhs < lhs)); }

    /* Convenience Function */
    /* The make_pair() function template enables you to create a value pair
    ** without writing the types explicitly.
    **(p.65 https://www.mica.edu.vn/perso/Vu-Hai/EE3490/Ref/The%20C++Standard%20Library%20-%202nd%20Edition.pdf) */
    template <typename T1,typename T2>
    inline pair<T1,T2> make_pair(T1 x, T2 y)
    {
      return (pair<T1,T2>(x,y));
    }
}   // namespace ft

#endif // UTILITY_HPP
