//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOComposedRouteAdvisoryItemDetail_h
#define GEOComposedRouteAdvisoryItemDetail_h
@import Foundation;

#include "GEOComposedString.h"
#include "GEOServerFormattedString-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray;

@interface GEOComposedRouteAdvisoryItemDetail : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *title;
@property (readonly, nonatomic) GEOComposedString *titleString;
@property (readonly, nonatomic) NSArray *details;
@property (readonly, nonatomic) NSArray *detailStrings;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRestrictionDetails:(id)details;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* GEOComposedRouteAdvisoryItemDetail_h */
