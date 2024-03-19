#pragma once
#include <vector3.h>

//加算
Vector3 Add(const Vector3& v1, const Vector3& v2);

//減算
Vector3 Subtract(const Vector3& v1, const Vector3& v2);

//乗算
Vector3 Multiply(float scalar, const Vector3& v);

//内積
float Dot(const Vector3& v1, const Vector3& v2);

//クロス積
Vector3 Cross(const Vector3& v1, const Vector3& v2);

//長さ(ノルム)
float Length(const Vector3& v);

//正規化
Vector3 Normalize(const Vector3& v);

//数値表示
void VectorScreenPrintf(int x, int y, const Vector3& vector, const char* label);