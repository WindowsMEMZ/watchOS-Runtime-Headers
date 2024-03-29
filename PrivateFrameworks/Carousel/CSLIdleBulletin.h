//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLIdleBulletin_h
#define CSLIdleBulletin_h
@import Foundation;

#include "CSLBulletin.h"

@interface CSLIdleBulletin : NSObject

@property (retain, nonatomic) CSLBulletin *bulletin;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;

/* instance methods */
- (id)initWithBulletin:(id)bulletin completion:(id /* block */)completion;
@end

#endif /* CSLIdleBulletin_h */
