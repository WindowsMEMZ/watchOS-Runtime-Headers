//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICMutableClientInfo_h
#define ICMutableClientInfo_h
@import Foundation;

#include "ICClientInfo.h"

@class NSString;

@interface ICMutableClientInfo : ICClientInfo

@property (copy, @dynamic, nonatomic) NSString *bundleIdentifier;
@property (copy, @dynamic, nonatomic) NSString *processName;
@property (copy, @dynamic, nonatomic) NSString *clientIdentifier;
@property (copy, @dynamic, nonatomic) NSString *clientVersion;
@property (copy, @dynamic, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, @dynamic, nonatomic) NSString *requestingBundleVersion;
@property (copy, @dynamic, nonatomic) NSString *bagProfile;
@property (copy, @dynamic, nonatomic) NSString *bagProfileVersion;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ICMutableClientInfo_h */
