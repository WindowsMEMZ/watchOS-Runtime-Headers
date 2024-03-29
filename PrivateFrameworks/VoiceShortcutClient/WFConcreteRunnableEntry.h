//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFConcreteRunnableEntry_h
#define WFConcreteRunnableEntry_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "WFIcon.h"
#include "WFPropertyListObject-Protocol.h"

@class NSString;

@interface WFConcreteRunnableEntry : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) WFIcon *entryIcon;
@property (readonly, nonatomic) WFIcon *accessoryIcon;
@property (readonly, nonatomic) NSObject<WFPropertyListObject> *serializedParameterState;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier name:(id)name entryIcon:(id)icon accessoryIcon:(id)icon serializedParameterState:(id)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFConcreteRunnableEntry_h */
