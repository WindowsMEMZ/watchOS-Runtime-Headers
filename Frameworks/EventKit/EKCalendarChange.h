//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1870.2.1.0.0
//
#ifndef EKCalendarChange_h
#define EKCalendarChange_h
@import Foundation;

#include "EKObjectChange.h"

@class NSString;

@interface EKCalendarChange : EKObjectChange

@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) BOOL colorChanged;
@property (readonly, nonatomic) BOOL orderChanged;
@property (readonly, nonatomic) NSString *calendarIdentifier;

/* class methods */
+ (int)entityType;

/* instance methods */
- (id)initWithChangeProperties:(id)properties;
@end

#endif /* EKCalendarChange_h */
