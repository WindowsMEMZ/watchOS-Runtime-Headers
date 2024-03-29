//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMSessionConfiguration_h
#define SMSessionConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SMHandle.h"
#include "SMSessionDestination.h"
#include "SMSessionTime.h"

@class NSDate, NSUUID;

@interface SMSessionConfiguration : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) SMHandle *handle;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, nonatomic) SMSessionTime *time;
@property (readonly, nonatomic) SMSessionDestination *destination;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *userResponseSafeDate;
@property (nonatomic) BOOL sessionSupportsHandoff;

/* class methods */
+ (id)sessionTypeToString:(unsigned long long)string;
+ (BOOL)configurationIsValid:(id)valid;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initTimeBoundSessionConfigurationWithHandle:(id)handle sessionID:(id)id time:(id)time sessionSupportsHandoff:(BOOL)handoff;
- (id)initTimeBoundSessionConfigurationWithHandle:(id)handle sessionID:(id)id time:(id)time sessionStartDate:(id)date sessionSupportsHandoff:(BOOL)handoff;
- (id)initDestinationBoundSessionConfigurationWithHandle:(id)handle sessionID:(id)id destination:(id)destination sessionStartDate:(id)date userResponseSafeDate:(id)date sessionSupportsHandoff:(BOOL)handoff;
- (id)initRoundTripSessionConfigurationWithHandle:(id)handle sessionID:(id)id destination:(id)destination sessionStartDate:(id)date userResponseSafeDate:(id)date sessionSupportsHandoff:(BOOL)handoff;
- (id)initWithHandle:(id)handle sessionID:(id)id sessionStartDate:(id)date sessionType:(unsigned long long)type time:(id)time destination:(id)destination userResponseSafeDate:(id)date sessionSupportsHandoff:(BOOL)handoff;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isSameSession:(id)session;
- (id)initWithDictionary:(id)dictionary;
- (id)outputToDictionary;
- (id)description;
@end

#endif /* SMSessionConfiguration_h */
