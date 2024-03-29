//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXVoicemail_h
#define CXVoicemail_h
@import Foundation;

#include "CXCopying-Protocol.h"
#include "CXHandle.h"
#include "NSSecureCoding-Protocol.h"

@class NSDate, NSString, NSURL, NSUUID;

@interface CXVoicemail : NSObject<NSSecureCoding, CXCopying>

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) CXHandle *sender;
@property (copy, nonatomic) NSDate *dateReceived;
@property (copy, nonatomic) NSURL *audioFileURL;
@property (nonatomic) BOOL played;
@property (nonatomic) BOOL trashed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithUUID:(id)uuid;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToVoicemail:(id)voicemail;
- (id)sanitizedCopy;
- (id)sanitizedCopyWithZone:(struct _NSZone *)zone;
- (void)updateSanitizedCopy:(id)copy withZone:(struct _NSZone *)zone;
- (void)updateCopy:(id)copy withZone:(struct _NSZone *)zone;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isPlayed;
- (BOOL)isTrashed;
@end

#endif /* CXVoicemail_h */
