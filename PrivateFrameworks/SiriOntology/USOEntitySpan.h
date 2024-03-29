//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef USOEntitySpan_h
#define USOEntitySpan_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "USOMatchInfo.h"

@class NSMutableArray, NSNumber, NSString;

@interface USOEntitySpan : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *originAppId;
@property (retain, nonatomic) NSNumber *sourceComponent;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) USOMatchInfo *matchInfo;
@property (retain, nonatomic) NSMutableArray *properties;
@property (retain, nonatomic) NSNumber *startIndex;
@property (retain, nonatomic) NSNumber *endIndex;
@property (retain, nonatomic) NSMutableArray *alternatives;
@property (retain, nonatomic) NSString *originEntityId;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithOriginAppId:(id)id sourceComponent:(unsigned int)component label:(id)label matchInfo:(id)info properties:(id)properties startIndex:(unsigned int)index endIndex:(unsigned int)index alternatives:(id)alternatives originEntityId:(id)id;
- (void)addSpanProperty:(id)property;
- (void)addAlternative:(id)alternative;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* USOEntitySpan_h */
