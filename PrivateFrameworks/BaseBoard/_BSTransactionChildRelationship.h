//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef _BSTransactionChildRelationship_h
#define _BSTransactionChildRelationship_h
@import Foundation;

#include "BSTransaction.h"

@interface _BSTransactionChildRelationship : NSObject {
  /* instance variables */
  BSTransaction *_childTransaction;
  unsigned long long _schedulingPolicy;
}

/* instance methods */
@end

#endif /* _BSTransactionChildRelationship_h */
