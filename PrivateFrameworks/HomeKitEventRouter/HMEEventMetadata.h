//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMEEventMetadata_h
#define HMEEventMetadata_h
@import Foundation;

@class NSString;

@interface HMEEventMetadata : NSObject

@property (readonly) unsigned long long rawCombineType;
@property (readonly) unsigned long long rawCachePolicy;
@property (readonly) unsigned long long rawQOS;
@property (readonly, copy) NSString *source;
@property (readonly) unsigned long long cachePolicy;
@property (readonly) unsigned long long combineType;
@property (readonly) double intervalSinceReferenceDate;

/* instance methods */
- (id)initDefaultMetadata;
- (id)initWithSource:(id)source cachePolicy:(unsigned long long)policy combineType:(unsigned long long)type timestamp:(double)timestamp;
- (id)_initWithSource:(id)source rawCachePolicy:(unsigned long long)policy rawCombineType:(unsigned long long)type rawQos:(unsigned long long)qos timestamp:(double)timestamp;
@end

#endif /* HMEEventMetadata_h */
