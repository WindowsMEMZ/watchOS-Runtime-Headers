//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPRemotePlaybackQueue_h
#define MPRemotePlaybackQueue_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class ICUserIdentity, NSDictionary, NSNumber, NSString;

@interface MPRemotePlaybackQueue : NSObject<NSSecureCoding> {
  /* instance variables */
  struct _MRSystemAppPlaybackQueue * _mediaRemotePlaybackQueue;
}

@property (readonly, nonatomic) struct _MRSystemAppPlaybackQueue * _mediaRemotePlaybackQueue;
@property (copy, nonatomic) NSDictionary *mediaRemoteOptions;
@property (copy, nonatomic) NSString *siriRecommendationIdentifier;
@property (nonatomic) BOOL requestingImmediatePlayback;
@property (nonatomic) long long replaceIntent;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) NSNumber *privateListeningOverride;
@property (readonly, copy, nonatomic) NSString *siriReferenceIdentifier;
@property (readonly, copy, nonatomic) NSString *siriAssetInfo;
@property (readonly, copy, nonatomic) NSString *queueGroupingID;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSDictionary *siriWHAMetricsInfo;

/* class methods */
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)queue;
+ (id)queueWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)queue options:(id)options;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue *)queue options:(id)options;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isRequestingImmediatePlayback;
- (BOOL)verifyWithError:(id *)error;
@end

#endif /* MPRemotePlaybackQueue_h */
