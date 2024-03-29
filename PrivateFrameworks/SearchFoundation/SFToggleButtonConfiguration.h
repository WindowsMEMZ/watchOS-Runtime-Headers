//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef SFToggleButtonConfiguration_h
#define SFToggleButtonConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFImage.h"
#include "SFToggleButtonConfiguration-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface SFToggleButtonConfiguration : NSObject<SFToggleButtonConfiguration, NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *untoggledTitle;
@property (copy, nonatomic) NSString *toggledTitle;
@property (retain, nonatomic) SFImage *untoggledImage;
@property (retain, nonatomic) SFImage *toggledImage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithProtobuf:(id)protobuf;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SFToggleButtonConfiguration_h */
