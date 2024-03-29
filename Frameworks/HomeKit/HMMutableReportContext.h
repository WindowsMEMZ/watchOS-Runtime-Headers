//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMMutableReportContext_h
#define HMMutableReportContext_h
@import Foundation;

#include "HMReportContext.h"

@class NSData, NSString;

@interface HMMutableReportContext : HMReportContext

@property (retain, @dynamic, nonatomic) NSString *reportDomain;
@property (retain, @dynamic, nonatomic) NSData *requestInfo;
@property (@dynamic, nonatomic) double reportTimeout;

/* class methods */
+ (id)reportContextWithDomain:(id)domain requestInfo:(id)info timeout:(double)timeout;
+ (id)reportContextWithDomain:(id)domain requestInfo:(id)info;

/* instance methods */
- (id)initWithReportDomain:(id)domain requestInfo:(id)info timeout:(double)timeout;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMMutableReportContext_h */
