//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMCameraClip_h
#define HMCameraClip_h
@import Foundation;

#include "HMCameraClipEncryptionContext.h"
#include "HMCameraRecordingEvent-Protocol.h"
#include "HMFObject-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface HMCameraClip : NSObject<HMFObject, NSCopying, NSSecureCoding, HMCameraRecordingEvent>

@property (readonly, copy) NSString *streamingAssetVersion;
@property (readonly, copy) HMCameraClipEncryptionContext *encryptionContext;
@property (readonly, copy) NSArray *videoSegments;
@property (readonly, copy) NSUUID *uniqueIdentifier;
@property (readonly, copy) NSDate *startDate;
@property (readonly) double duration;
@property (readonly) BOOL complete;
@property (readonly) BOOL donated;
@property (readonly) long long quality;
@property (readonly) double targetFragmentDuration;
@property (readonly, copy) NSData *encryptionKey;
@property (readonly, copy) NSArray *videoDataSegments;
@property (readonly, copy) NSSet *significantEvents;
@property (readonly, copy) NSDictionary *videoAssetRequiredHTTPHeaders;
@property (readonly) BOOL canAskForUserFeedback;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSDate *dateOfOccurrence;

/* class methods */
+ (id)requiredHTTPHeadersForStreamingAssetVersion:(id)version;
+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;

/* instance methods */
- (id)initWithUniqueIdentifier:(id)identifier startDate:(id)date duration:(double)duration targetFragmentDuration:(double)duration isComplete:(BOOL)complete isDonated:(BOOL)donated quality:(long long)quality streamingAssetVersion:(id)version encryptionContext:(id)context videoSegments:(id)segments significantEvents:(id)events;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isComplete;
- (BOOL)isDonated;
@end

#endif /* HMCameraClip_h */
