//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDExtendedTypeReader_h
#define HMDExtendedTypeReader_h
@import Foundation;

#include "HMDTokenBasedStructuredReader.h"
#include "HMDStructuredReader.h"

@interface HMDExtendedTypeReader : HMDTokenBasedStructuredReader {
  /* instance variables */
  HMDStructuredReader *_reader;
  struct _HMDStructuredDataToken { long long type; id value; } _buffer[4];
  unsigned long long _bufferHead;
  unsigned long long _bufferCount;
}

/* instance methods */
- (id)initWithReader:(id)reader;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)token;
@end

#endif /* HMDExtendedTypeReader_h */
