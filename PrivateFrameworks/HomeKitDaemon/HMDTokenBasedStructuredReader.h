//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDTokenBasedStructuredReader_h
#define HMDTokenBasedStructuredReader_h
@import Foundation;

#include "HMDStructuredReader.h"

@interface HMDTokenBasedStructuredReader : HMDStructuredReader {
  /* instance variables */
  struct _HMDStructuredDataToken { long long type; id value; } _token;
}

/* instance methods */
- (long long)tokenType;
- (id)error;
- (void)failWithError:(id)error;
- (unsigned long long)beginArray;
- (void)endArray;
- (unsigned long long)beginDictionary;
- (id)readDictionaryKey;
- (void)endDictionary;
- (void)readNull;
- (BOOL)readBoolean;
- (id)readString;
- (id)readNumber;
- (id)readData;
- (id)readDate;
- (id)readUUID;
- (struct _HMDStructuredDataToken { long long x0; id x1; })readToken;
- (void)skipToken;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)token;
@end

#endif /* HMDTokenBasedStructuredReader_h */
