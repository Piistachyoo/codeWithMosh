#ifndef PAIR_H_
#define PAIR_H_

#include <ostream>

template <typename K, typename V> class Pair {
  private:
    K key;
    V value;

  public:
    Pair() = default;
    Pair(K key, V value);

    void setKey(K key);
    K getKey() const;
    void setValue(V value);
    V getValue() const;
};

template <typename K, typename V>
std::ostream &operator<<(std::ostream &stream, const Pair<K, V> &data);

template <typename K, typename V>
Pair<K, V>::Pair(K key, V value) : key(key), value(value) {}

template <typename K, typename V> inline void Pair<K, V>::setKey(K key) {
    this->key = key;
}

template <typename K, typename V> inline K Pair<K, V>::getKey() const {
    return key;
}

template <typename K, typename V> inline void Pair<K, V>::setValue(V value) {
    this->value = value;
}

template <typename K, typename V> inline V Pair<K, V>::getValue() const {
    return value;
}

template <typename K, typename V>
inline std::ostream &operator<<(std::ostream &stream, const Pair<K, V> &data) {
    stream << data.getKey() << " : " << data.getValue();
    return stream;
}

#endif // PAIR_H_
