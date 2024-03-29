//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INPBShareFileIntentResponse_Protocol_h
#define _INPBShareFileIntentResponse_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_INPBShareFileIntentResponse-Protocol.h"

@class NSArray, NSString;

@protocol _INPBShareFileIntentResponse <NSObject>

@property (nonatomic) BOOL confirm;
@property (nonatomic) BOOL hasConfirm;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (nonatomic) int shareMode;
@property (nonatomic) BOOL hasShareMode;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasSuccess;

/* class methods */
+ (Class)recipientsType;
/* instance methods */
- (void)clearRecipients;
- (void)addRecipients:(id)recipients;
- (id)recipientsAtIndex:(unsigned long long)index;
- (id)shareModeAsString:(int)string;
- (int)StringAsShareMode:(id)mode;
@end

#endif /* _INPBShareFileIntentResponse_Protocol_h */
