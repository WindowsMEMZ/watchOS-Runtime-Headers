//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDStructuredDataFoundationReader_h
#define HMDStructuredDataFoundationReader_h
@import Foundation;

#include "HMDTokenBasedStructuredReader.h"

@class NSDictionary, NSEnumerator, NSMutableArray;

@interface HMDStructuredDataFoundationReader : HMDTokenBasedStructuredReader {
  /* instance variables */
  NSEnumerator *_enumerator;
  NSDictionary *_dictionary;
  NSMutableArray *_stack;
}

/* instance methods */
- (void)failWithError:(id)error;
- (struct _HMDStructuredDataToken { long long x0; id x1; })nextTokenAfterToken:(const struct _HMDStructuredDataToken { long long x0; id x1; } *)token;
@end

#endif /* HMDStructuredDataFoundationReader_h */
