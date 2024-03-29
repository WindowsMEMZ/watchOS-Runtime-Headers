//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INObjectSection_h
#define INObjectSection_h
@import Foundation;

#include "INImage.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface INObjectSection : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSString *_identifier;
}

@property (readonly, copy, nonatomic) NSString *_identifier;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) INImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *items;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier title:(id)title subtitle:(id)subtitle image:(id)image items:(id)items;
- (id)initWithTitle:(id)title items:(id)items;
- (id)initWithTitle:(id)title subtitle:(id)subtitle image:(id)image items:(id)items;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* INObjectSection_h */
