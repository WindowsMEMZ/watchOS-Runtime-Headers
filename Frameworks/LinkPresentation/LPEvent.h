//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPEvent_h
#define LPEvent_h
@import Foundation;

#include "LPEvent.h"

@class NSArray, NSMutableArray, NSString, NSURL;

@interface LPEvent : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long status;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) unsigned long long specialization;
@property (readonly, weak, nonatomic) LPEvent *parent;
@property (readonly, nonatomic) NSArray *children;

/* instance methods */
- (id)init;
- (id)initWithType:(long long)type subtitle:(id)subtitle;
- (id)childWithType:(long long)type subtitle:(id)subtitle;
- (void)didCompleteWithErrorCode:(long long)code;
- (void)didCompleteWithStatus:(long long)status;
- (BOOL)_childrenAreComplete;
- (BOOL)isComplete;
@end

#endif /* LPEvent_h */
