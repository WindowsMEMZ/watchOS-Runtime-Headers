//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXBrailleMap_h
#define AXBrailleMap_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CIImage, NSMutableDictionary;

@interface AXBrailleMap : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSMutableDictionary *_values;
  CIImage *_presentedImage;
}

@property (nonatomic) struct CGSize { double x0; double x1; } dimensions;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)connectedBrailleMap;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)setHeight:(float)height atPoint:(struct CGPoint { double x0; double x1; })point;
- (void)presentImage:(struct CGImage *)image;
- (id)presentedImage;
- (float)heightAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* AXBrailleMap_h */
