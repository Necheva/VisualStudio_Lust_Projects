#include "utmatrix.h"

#include <gtest.h>

TEST(TVector, can_create_vector_with_positive_length)
{
  ASSERT_NO_THROW(TVector<int> v(5));
}

TEST(TVector, cant_create_too_large_vector)
{
  ASSERT_ANY_THROW(TVector<int> v(MAX_VECTOR_SIZE + 1));
}

TEST(TVector, throws_when_create_vector_with_negative_length)
{
  ASSERT_ANY_THROW(TVector<int> v(-5));
}

TEST(TVector, throws_when_create_vector_with_negative_startindex)
{
  ASSERT_ANY_THROW(TVector<int> v(5, -2));
}

TEST(TVector, can_create_copied_vector)
{
  TVector<int> v(10);

  ASSERT_NO_THROW(TVector<int> v1(v));
}

TEST(TVector, copied_vector_is_equal_to_source_one)
{

	TVector<int> a(3);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	TVector<int> b = a;
	EXPECT_EQ(1, b[0]);
	EXPECT_EQ(2, b[1]);
	EXPECT_EQ(3, b[2]);
}

TEST(TVector, copied_vector_has_its_own_memory)
{
	TVector<int> a(3);
	TVector<int> b = a;
	EXPECT_NE(&a, &b);
}

TEST(TVector, can_get_size)
{
  TVector<int> v(4);

  EXPECT_EQ(4, v.GetSize());
}

TEST(TVector, can_get_start_index)
{
  TVector<int> v(4, 2);

  EXPECT_EQ(2, v.GetStartIndex());
}

TEST(TVector, can_set_and_get_element)
{
  TVector<int> v(4);
  v[0] = 4;

  EXPECT_EQ(4, v[0]);
}

TEST(TVector, throws_when_set_element_with_negative_index)
{
	TVector<int> a(3);
	ASSERT_ANY_THROW(a[-1]);
}

TEST(TVector, throws_when_set_element_with_too_large_index)
{
	TVector<int> a(3);
	ASSERT_ANY_THROW(a[4]);
}

TEST(TVector, can_assign_vector_to_itself)
{
	TVector<int> a(3);
	ASSERT_NO_THROW(a = a);
}

TEST(TVector, can_assign_vectors_of_equal_size)
{
	TVector<int> a(3), b(3);
	ASSERT_NO_THROW(a = b);
}

TEST(TVector, assign_operator_change_vector_size)
{
	TVector<int> a(3), b(4);
	a = b;
	EXPECT_EQ(4, a.GetSize());
}

TEST(TVector, can_assign_vectors_of_different_size)
{
	TVector<int> a(3), b(4);
	ASSERT_NO_THROW(a = b);
}

TEST(TVector, compare_equal_vectors_return_true)
{
	TVector<int> a(3), b(3);
	EXPECT_TRUE(a == b);
}

TEST(TVector, compare_vector_with_itself_return_true)
{
	TVector<int> a(3);
	EXPECT_TRUE(a == a);
}

TEST(TVector, vectors_with_different_size_are_not_equal)
{
	TVector<int> a(3), b(4);
	EXPECT_FALSE(a == b);
}

TEST(TVector, can_add_scalar_to_vector)
{
	TVector<int>a(2);
	a[0] = 3;
	a[1] = 2;
	a = a + 1;
	ASSERT_NO_THROW(4, a[0]);
	ASSERT_NO_THROW(3, a[1]);
}

TEST(TVector, can_subtract_scalar_from_vector)
{
	TVector<int>a(2);
	a[0] = 3;
	a[1] = 2;
	a = a - 1;
	ASSERT_NO_THROW(2, a[0]);
	ASSERT_NO_THROW(1, a[1]);
}

TEST(TVector, can_multiply_scalar_by_vector)
{
	TVector<int>a(2);
	a[0] = 1;
	a[1] = 2;
	a = a * 2;
	ASSERT_NO_THROW(2, a[0]);
	ASSERT_NO_THROW(4, a[1]);
}

TEST(TVector, can_add_vectors_with_equal_size)
{
	TVector<int>a(2), b(2), c(2);
	a[0] = 1;
	a[1] = 2;
	b[0] = 2;
	b[1] = 4;
	c = b - a;
	ASSERT_NO_THROW(3, c[0]);
	ASSERT_NO_THROW(6, c[1]);
}

TEST(TVector, cant_add_vectors_with_not_equal_size)
{
	TVector<int>a(3), b(4);
	ASSERT_ANY_THROW(a + b);
}

TEST(TVector, can_subtract_vectors_with_equal_size)
{
	TVector<int>a(2), b(2), c(2);
	a[0] = 1;
	a[1] = 2;
	b[0] = 2;
	b[1] = 4;
	c = b - a;
	ASSERT_NO_THROW(1, c[0]);
	ASSERT_NO_THROW(2, c[1]);
}

TEST(TVector, cant_subtract_vectors_with_not_equal_size)
{
	TVector<int>a(3), b(4);
	ASSERT_ANY_THROW(a-b);
}

TEST(TVector, can_multiply_vectors_with_equal_size)
{
	TVector<int>a(2), b(2);
	int c;
	a[0] = 1;
	a[1] = 2;
	b[0] = 1;
	b[1] = 4;
	c = a*b;
	ASSERT_NO_THROW(9, c);
}

TEST(TVector, cant_multiply_vectors_with_not_equal_size)
{
	TVector<int>a(3), b(4);
	ASSERT_ANY_THROW(a*b);
}

