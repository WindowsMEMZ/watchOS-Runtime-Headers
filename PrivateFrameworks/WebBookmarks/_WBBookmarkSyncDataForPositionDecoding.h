//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WBBookmarkSyncDataForPositionDecoding_h
#define _WBBookmarkSyncDataForPositionDecoding_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class WBSCRDTPosition;

@interface _WBBookmarkSyncDataForPositionDecoding : NSObject<NSSecureCoding>

@property (readonly, nonatomic) WBSCRDTPosition *position;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _WBBookmarkSyncDataForPositionDecoding_h */
