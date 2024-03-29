//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BPSSessionWindowState_h
#define BPSSessionWindowState_h
@import Foundation;

#include "BPSWindowState.h"

@class NSDateInterval;

@interface BPSSessionWindowState : BPSWindowState

@property (retain, nonatomic) NSDateInterval *dateInterval;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDateInterval:(id)interval identifier:(id)identifier aggregate:(id)aggregate completed:(BOOL)completed;
- (id)metadata;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* BPSSessionWindowState_h */
