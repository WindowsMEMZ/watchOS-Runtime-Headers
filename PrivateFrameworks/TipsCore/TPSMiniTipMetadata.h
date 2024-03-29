//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSMiniTipMetadata_h
#define TPSMiniTipMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "TPSDocument.h"
#include "TPSMonitoringEvents.h"

@class NSDictionary, NSError, NSString;

@interface TPSMiniTipMetadata : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) long long customizationID;
@property (readonly, copy, @dynamic, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) TPSDocument *content;
@property (copy, nonatomic) TPSMonitoringEvents *monitoringEvents;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContent:(id)content;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)debugDescription;
@end

#endif /* TPSMiniTipMetadata_h */
