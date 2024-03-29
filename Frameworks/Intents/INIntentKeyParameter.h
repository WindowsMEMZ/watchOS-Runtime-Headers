//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INIntentKeyParameter_h
#define INIntentKeyParameter_h
@import Foundation;

#include "INCodableAttribute.h"
#include "INImage.h"

@interface INIntentKeyParameter : NSObject

@property (readonly, nonatomic) INCodableAttribute *codableAttribute;
@property (readonly, nonatomic) id value;
@property (readonly, nonatomic) INImage *image;

/* instance methods */
- (id)initWithCodableAttribute:(id)attribute value:(id)value image:(id)image;
@end

#endif /* INIntentKeyParameter_h */
