//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAppSwitcherItem_h
#define CSLAppSwitcherItem_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface CSLAppSwitcherItem : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long sessionType;
@property (readonly, copy, nonatomic) NSString *auxillaryTitle;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier sessionType:(unsigned long long)type;
- (id)_titleForSessionType:(unsigned long long)type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLAppSwitcherItem_h */
