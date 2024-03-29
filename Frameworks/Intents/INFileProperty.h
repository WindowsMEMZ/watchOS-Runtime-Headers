//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INFileProperty_h
#define INFileProperty_h
@import Foundation;

#include "INDateComponentsRange.h"
#include "INFilePropertyExport-Protocol.h"
#include "INPerson.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface INFileProperty : NSObject<INFilePropertyExport, NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *qualifier;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateComponentsRange;
@property (readonly, copy, nonatomic) INPerson *person;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSNumber *quantity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithName:(id)name qualifier:(id)qualifier type:(id)type dateComponentsRange:(id)range person:(id)person value:(id)value quantity:(id)quantity;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)descriptionAtIndent:(unsigned long long)indent;
- (id)_dictionaryRepresentation;
@end

#endif /* INFileProperty_h */
