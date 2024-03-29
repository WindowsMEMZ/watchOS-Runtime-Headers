//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCSharedListeningPlaybackIntentTracklistToken_h
#define MPCSharedListeningPlaybackIntentTracklistToken_h
@import Foundation;

#include "MPCPlaybackEngineEventPayloadValueJSONConvertible-Protocol.h"
#include "MPCPlaybackSharedListeningProperties.h"
#include "NSSecureCoding-Protocol.h"

@class ICLiveLinkIdentity, NSString;

@interface MPCSharedListeningPlaybackIntentTracklistToken : NSObject<MPCPlaybackEngineEventPayloadValueJSONConvertible, NSSecureCoding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) MPCPlaybackSharedListeningProperties *sharedListeningProperties;
@property (copy, nonatomic) ICLiveLinkIdentity *identity;

/* class methods */
+ (id)payloadValueFromJSONValue:(id)jsonvalue;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)mpc_jsonValue;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* MPCSharedListeningPlaybackIntentTracklistToken_h */
