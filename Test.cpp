#include "doctest.h"
#include "sources/MagicalContainer.hpp"
using namespace ariel;

TEST_CASE("MAGICAL FUNCTIONS")
{
    CHECK_NOTHROW(MagicalContainer container);
    MagicalContainer container;
    CHECK_NOTHROW(container.addElement(1));
    container.addElement(1);
    container.addElement(17);
    container.addElement(5);
    container.addElement(4);
    container.addElement(2);
    container.addElement(111);
    container.addElement(10);
    CHECK(container.size() == 7);
    container.removeElement(0);
    CHECK(container.size() == 7);
    container.removeElement(1);
    CHECK(container.size() == 6);
    container.removeElement(17);
    container.removeElement(5);
    container.removeElement(4);
    container.removeElement(2);
    container.removeElement(111);
    container.removeElement(10);
    CHECK(container.size() == 0);
}
TEST_CASE("MAGICAL ASCENDING")
{
    MagicalContainer AscContainer1;
    MagicalContainer AscContainer2;
    CHECK_NOTHROW(MagicalContainer::AscendingIterator AscendIter(AscContainer1));
    CHECK_NOTHROW(MagicalContainer::AscendingIterator AscendIter2(AscContainer2));
    MagicalContainer::AscendingIterator AscendIter(AscContainer1);
    MagicalContainer::AscendingIterator AscendIter2(AscContainer2);
    CHECK_NOTHROW(MagicalContainer::AscendingIterator AscendIter3(AscendIter2));
    MagicalContainer::AscendingIterator AscendIter3(AscendIter2);
    CHECK(AscendIter.begin() == AscendIter.end());   // Container Empty.
    CHECK(AscendIter3.begin() == AscendIter3.end()); // Container Empty.
    AscContainer1.addElement(5);
    AscContainer1.addElement(1);
    AscContainer1.addElement(6);
    AscContainer1.addElement(17);
    AscContainer1.addElement(12);

    AscContainer2.addElement(0);
    AscContainer2.addElement(9);
    AscContainer2.addElement(22);
    AscContainer2.addElement(-2);

    CHECK(*AscendIter.begin() == 1);
    CHECK(*AscendIter2.begin() == *AscendIter3.begin()); // SAME because of the constructor.
    CHECK(*AscendIter2.begin() == 0);
    // OPERATORS

    CHECK_THROWS_AS(AscendIter.operator==(AscendIter2), invalid_argument); // different container
    CHECK_NOTHROW(AscendIter.operator!=(AscendIter3));
    CHECK_THROWS_AS(AscendIter.operator>(AscendIter2), invalid_argument); // different container
    CHECK_THROWS_AS(AscendIter.operator<(AscendIter2), invalid_argument);
    CHECK_THROWS(AscendIter2.operator>(AscendIter3));   // 0 = 0;
    CHECK_NOTHROW(AscendIter2.operator==(AscendIter3)); // SAME LOCATION
    SUBCASE("++")
    {
        ++AscendIter;
        CHECK(*AscendIter == 5);
        ++AscendIter2;
        CHECK(AscendIter2 > AscendIter3);
        CHECK(AscendIter3 < AscendIter2);
        ++AscendIter2;
        ++AscendIter2;
        ++AscendIter2;
        CHECK(*AscendIter2 == *AscendIter2.end());
    }
    SUBCASE("CHECK CORRECT ORDER")
    {
        CHECK(*AscendIter == 1);
        ++AscendIter;
        CHECK(*AscendIter == 5);
        ++AscendIter;
        CHECK(*AscendIter == 6);
        ++AscendIter;
        CHECK(*AscendIter == 12);
        ++AscendIter;
        CHECK(*AscendIter == 17);
        CHECK_THROWS(++AscendIter); // OUT OF BOUNDS;
        AscContainer1.removeElement(1);
        CHECK(*AscendIter.begin() == 5);
    }
}

TEST_CASE("PRIME MAGICAL FUNCTIONS")
{
    MagicalContainer Primetainer;
    MagicalContainer Primetainer2;
    CHECK_NOTHROW(MagicalContainer::PrimeIterator PrimeIter(Primetainer));
    CHECK_NOTHROW(MagicalContainer::PrimeIterator PrimeIter2(Primetainer2));
    MagicalContainer::PrimeIterator PrimeIter(Primetainer);
    MagicalContainer::PrimeIterator PrimeIter2(Primetainer2);
    CHECK_NOTHROW(MagicalContainer::PrimeIterator PrimeIter3(PrimeIter2));
    MagicalContainer::PrimeIterator PrimeIter3(PrimeIter2);
    CHECK(PrimeIter.begin() == PrimeIter.end());   // Container Empty.
    CHECK(PrimeIter3.begin() == PrimeIter3.end()); // Container Empty.
    Primetainer.addElement(1);
    Primetainer.addElement(5);
    Primetainer.addElement(6);
    Primetainer.addElement(17);
    Primetainer.addElement(12);

    Primetainer2.addElement(0);
    Primetainer2.addElement(9);
    Primetainer2.addElement(7);
    Primetainer2.addElement(2);
    Primetainer2.addElement(3);
    Primetainer2.addElement(5);
    Primetainer2.addElement(22);
    Primetainer2.addElement(-2);

    CHECK(*PrimeIter.begin() == 5);
    CHECK(*PrimeIter2.begin() == *PrimeIter3.begin()); // SAME because of the constructor.
    // OPERATORS

    CHECK_THROWS_AS(PrimeIter.operator==(PrimeIter2), invalid_argument); // different container
    CHECK_NOTHROW(PrimeIter.operator!=(PrimeIter3));
    CHECK_THROWS_AS(PrimeIter.operator>(PrimeIter2), invalid_argument); // different container
    CHECK_THROWS_AS(PrimeIter.operator<(PrimeIter2), invalid_argument);
    CHECK_THROWS(PrimeIter2.operator>(PrimeIter3));   // 0 = 0;
    CHECK_NOTHROW(PrimeIter2.operator==(PrimeIter3)); // SAME LOCATION
    SUBCASE("++")
    {
        ++PrimeIter;
        CHECK(*PrimeIter == 17);
        ++PrimeIter2;
        CHECK(PrimeIter2 > PrimeIter3);
        CHECK(PrimeIter3 < PrimeIter2);
        ++PrimeIter2;
        ++PrimeIter2;
        CHECK(*PrimeIter2 == *PrimeIter2.end());
    }
    SUBCASE("CHECK CORRECT ORDER")
    {
        CHECK(*PrimeIter == 5);
        ++PrimeIter;
        CHECK(*PrimeIter == 17);
        CHECK_THROWS(++PrimeIter); // OUT OF BOUNDS;
        Primetainer.removeElement(1);
        CHECK(*PrimeIter.begin() == 5);
    }
}
TEST_CASE("SIDE CROSS MAGICAL FUNCTIONS")
{
    MagicalContainer Sidetainer;
    MagicalContainer Sidetainer2;
    CHECK_NOTHROW(MagicalContainer::SideCrossIterator SideCrossIter(Sidetainer));
    CHECK_NOTHROW(MagicalContainer::SideCrossIterator SideCrossIter2(Sidetainer2));
    MagicalContainer::SideCrossIterator SideCrossIter(Sidetainer);
    MagicalContainer::SideCrossIterator SideCrossIter2(Sidetainer2);
    CHECK_NOTHROW(MagicalContainer::SideCrossIterator SideCrossIter3(SideCrossIter));
    MagicalContainer::SideCrossIterator SideCrossIter3(SideCrossIter);
    CHECK(SideCrossIter.begin() == SideCrossIter.end());   // Container Empty.
    CHECK(SideCrossIter3.begin() == SideCrossIter3.end()); // Container Empty.
    Sidetainer.addElement(1);
    Sidetainer.addElement(5);
    Sidetainer.addElement(6);
    Sidetainer.addElement(17);
    Sidetainer.addElement(12);

    Sidetainer2.addElement(0);
    Sidetainer2.addElement(9);
    Sidetainer2.addElement(7);
    Sidetainer2.addElement(2);
    Sidetainer2.addElement(3);
    Sidetainer2.addElement(5);
    Sidetainer2.addElement(22);
    Sidetainer2.addElement(-2);
    CHECK(*SideCrossIter.begin() == 1);
    CHECK(*SideCrossIter2.begin() == *SideCrossIter3.begin()); // SAME because of the constructor.
    // OPERATORS

    CHECK_THROWS_AS(SideCrossIter.operator==(SideCrossIter2), invalid_argument); // different container
    CHECK_NOTHROW(SideCrossIter.operator!=(SideCrossIter3));
    CHECK_THROWS_AS(SideCrossIter.operator>(SideCrossIter2), invalid_argument); // different container
    CHECK_THROWS_AS(SideCrossIter.operator<(SideCrossIter2), invalid_argument);
    CHECK_THROWS(SideCrossIter2.operator>(SideCrossIter3));   // 0 = 0;
    CHECK_NOTHROW(SideCrossIter2.operator==(SideCrossIter3)); // SAME LOCATION
    SUBCASE("++")
    {
        ++SideCrossIter;
        CHECK(*SideCrossIter == 12);
        ++SideCrossIter2;
        CHECK(SideCrossIter2 > SideCrossIter3);
        CHECK(SideCrossIter3 < SideCrossIter2);
        ++SideCrossIter2;
        ++SideCrossIter2;
        CHECK(*SideCrossIter2 == 22);
    }
    SUBCASE("CHECK CORRECT ORDER")
    {
        CHECK(*SideCrossIter == 1);
        ++SideCrossIter;
        CHECK(*SideCrossIter == 12);
        ++SideCrossIter;
        CHECK(*SideCrossIter == 5);
        ++SideCrossIter;
        CHECK(*SideCrossIter == 17);
        ++SideCrossIter;
        CHECK(*SideCrossIter == 6);
    }
}