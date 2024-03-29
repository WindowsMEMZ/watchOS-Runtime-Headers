//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKAssertionWrapper_h
#define NPKAssertionWrapper_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSUUID;

@interface NPKAssertionWrapper : NSObject {
  /* instance variables */
  id /* block */ _assertionInvalidator;
}

@property (readonly, nonatomic) NSObject<NSObject> *assertion;
@property (readonly) NSUUID *wrapperUUID;

/* instance methods */
- (id)initWithAssertion:(id)assertion invalidator:(id /* block */)invalidator;
- (void)dealloc;
- (BOOL)invalidateAssertionExpected:(BOOL)expected;
- (id)description;
@end

#endif /* NPKAssertionWrapper_h */
