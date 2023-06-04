#include "MagicalContainer.hpp"
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
namespace ariel
{
    // MAGICAL CONTAINER
    //
    //
    //
    //
    //
    void MagicalContainer::addElement(int Element)
    {
        // Implementation goes here
    }

    void MagicalContainer::removeElement(int Element)
    {
        // Implementation goes here
    }

    int MagicalContainer::size()
    {
        // Implementation goes here
        return 0;
    }
    // AscendingIterator
    //
    //
    //
    //
    //
    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer &container) : container(container)
    {
        // Constructor Logic
    }

    MagicalContainer::AscendingIterator::AscendingIterator(const AscendingIterator &other) : container(other.container)
    {
        // other initialization code
    }
    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator=(const AscendingIterator &other)
    {
        // Do nothing - we can't reassign the reference member "container"
        return *this;
    }
    bool MagicalContainer::AscendingIterator::operator==(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator!=(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator<(const AscendingIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::AscendingIterator::operator>(const AscendingIterator &other) const
    {
        return false;
    }

    int MagicalContainer::AscendingIterator::operator*()
    {
        return 0; // Returns a dummy value
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::operator++()
    {
        return *this; // Returns *this as a dummy value
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::begin()
    {
        return *this; // Returns *this as a dummy value
    }

    MagicalContainer::AscendingIterator &MagicalContainer::AscendingIterator::end()
    {
        return *this; // Returns *this as a dummy value
    }
    // SideCrossIterator
    //
    //
    //
    //
    //
    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &container) : container(container)
    {
        // other initialization code
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(const SideCrossIterator &other) : container(other.container)
    {
        // other initialization code
    }
    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator=(const SideCrossIterator &other)
    {
        // Do nothing - we can't reassign the reference member "container"
        return *this;
    }
    bool MagicalContainer::SideCrossIterator::operator==(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator!=(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator<(const SideCrossIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::SideCrossIterator::operator>(const SideCrossIterator &other) const
    {
        return false;
    }

    int &MagicalContainer::SideCrossIterator::operator*()
    {
        static int dummy = 0;
        return dummy; // Returns a reference to a dummy variable
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::operator++()
    {
        return *this; // Returns *this as a dummy value
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::begin()
    {
        return *this; // Returns *this as a dummy value
    }

    MagicalContainer::SideCrossIterator &MagicalContainer::SideCrossIterator::end()
    {
        return *this; // Returns *this as a dummy value
    }
    // Prime Iterator
    //
    //
    //
    //
    //
    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer &container) : container(container)
    {
        // other initialization code
    }

    MagicalContainer::PrimeIterator::PrimeIterator(const PrimeIterator &other) : container(other.container)
    {
        // other initialization code
    }
    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator=(const PrimeIterator &other)
    {
        // Do nothing - we can't reassign the reference member "container"
        return *this;
    }
    bool MagicalContainer::PrimeIterator::operator==(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator!=(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator<(const PrimeIterator &other) const
    {
        return false;
    }

    bool MagicalContainer::PrimeIterator::operator>(const PrimeIterator &other) const
    {
        return false;
    }

    int &MagicalContainer::PrimeIterator::operator*()
    {
        static int dummy = 0;
        return dummy; // Returns a reference to a dummy variable
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::operator++()
    {
        return *this; // Returns *this as a dummy value
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::begin()
    {
        return *this; // Returns *this as a dummy value
    }

    MagicalContainer::PrimeIterator &MagicalContainer::PrimeIterator::end()
    {
        return *this; // Returns *this as a dummy value
    }
} // namespace ariel