//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPBeaconPayloadCacheSearchResult_h
#define SPBeaconPayloadCacheSearchResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SPSearchResultMarker.h"

@class NSArray, NSError;

@interface SPBeaconPayloadCacheSearchResult : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSArray *fileURLs;
@property (retain, nonatomic) SPSearchResultMarker *searchResultMarker;
@property (copy, nonatomic) NSError *error;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFileURLs:(id)urls searchResultMarker:(id)marker error:(id)error;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SPBeaconPayloadCacheSearchResult_h */
