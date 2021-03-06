#include <iostream>

TInt64V TIntVToTInt64V(TIntV Vec) {
  TInt64V NewVec;
  for (int i = 0; i < Vec.Len(); i++) {
    NewVec.Add(int(Vec[i]));
  }
  return NewVec;
}

TIntV TInt64VToTIntV(TInt64V Vec) {
  TIntV NewVec;
  int MaxLen = TInt::Mx;
  if (Vec.Len() < MaxLen) {
    MaxLen = int(Vec.Len());
  } else {
    std::cerr<<"TInt64V to TIntV conversion results in losing some values\n";
  }
  for (int i = 0; i < MaxLen; i++) {
    NewVec.Add(int(Vec[i]));
  }
  return NewVec;
}

TFltPrV TFltPr64VToTFltPrV(TFltPr64V Vec) {
  TFltPrV NewVec;
  int MaxLen = TInt::Mx;
  if (Vec.Len() < MaxLen) {
    MaxLen = int(Vec.Len());
  } else {
    std::cerr<<"TFltPr64V to TFltPrV conversion results in losing some values\n";
  }
  for (int i = 0; i < MaxLen; i++) {
    NewVec.Add(TFltPr((Vec[i].Val1),(Vec[i].Val2)));
  }
  return NewVec;
}

TIntPrV TIntPr64VToTIntPrV(TIntPr64V Vec) {
  TIntPrV NewVec;
  int MaxLen = TInt::Mx;
  if (Vec.Len() < MaxLen) {
    MaxLen = int(Vec.Len());
  } else {
    std::cerr<<"TIntPr64V to TIntPrV conversion results in losing some values\n";
  }
  for (int i = 0; i < MaxLen; i++) {
    NewVec.Add(TIntPr(int(Vec[i].Val1),int(Vec[i].Val2)));
  }
  return NewVec;
}

TIntFltKdV TIntFltKd64VToTIntFltKdV(TIntFltKd64V Vec) {
  TIntFltKdV NewVec;
  int MaxLen = TInt::Mx;
  if (Vec.Len() < MaxLen) {
    MaxLen = int(Vec.Len());
  } else {
    std::cerr<<"TIntFltKd64V to TIntFltKdV conversion results in losing some values\n";
  }
  for (int i = 0; i < MaxLen; i++) {
    NewVec.Add(TIntFltKd(int(Vec[i].Key),Vec[i].Dat));
  }
  return NewVec;
}
