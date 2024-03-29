//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSharedAssetsContainerIncrementalChangeHighlightContainerChange_h
#define PLSharedAssetsContainerIncrementalChangeHighlightContainerChange_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface PLSharedAssetsContainerIncrementalChangeHighlightContainerChange : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *relationshipKey;
@property (retain, nonatomic) NSURL *sourceHighlightURI;
@property (retain, nonatomic) NSURL *destinationHighlightURI;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* PLSharedAssetsContainerIncrementalChangeHighlightContainerChange_h */
