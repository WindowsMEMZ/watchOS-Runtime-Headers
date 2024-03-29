//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDUserDomainConceptQueryServer_h
#define HDUserDomainConceptQueryServer_h
@import Foundation;

#include "HDQueryServer.h"

@class HKQueryAnchor, NSArray;

@interface HDUserDomainConceptQueryServer : HDQueryServer {
  /* instance variables */
  long long _limit;
  NSArray *_sortDescriptors;
  HKQueryAnchor *_anchor;
}

/* class methods */
+ (Class)queryClass;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (void)_queue_start;
@end

#endif /* HDUserDomainConceptQueryServer_h */
