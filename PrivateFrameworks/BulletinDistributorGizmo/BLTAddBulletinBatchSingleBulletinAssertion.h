//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTAddBulletinBatchSingleBulletinAssertion_h
#define BLTAddBulletinBatchSingleBulletinAssertion_h
@import Foundation;

#include "BLTAddBulletinBatchAssertion.h"

@interface BLTAddBulletinBatchSingleBulletinAssertion : NSObject {
  /* instance variables */
  BLTAddBulletinBatchAssertion *_batchAssertion;
}

@property (nonatomic) BOOL completedRespond;

/* instance methods */
- (id)init;
- (id)initWithBatchAssertion:(id)assertion;
- (void)dealloc;
@end

#endif /* BLTAddBulletinBatchSingleBulletinAssertion_h */
