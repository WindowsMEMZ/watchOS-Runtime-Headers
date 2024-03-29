//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDNamedColorRenditionSpec_h
#define TDNamedColorRenditionSpec_h
@import Foundation;

#include "TDRenditionSpec.h"

@class NSString;

@interface TDNamedColorRenditionSpec : TDRenditionSpec

@property (@dynamic, nonatomic) long long colorSpaceID;
@property (@dynamic, nonatomic) double alpha;
@property (@dynamic, nonatomic) double red;
@property (@dynamic, nonatomic) double green;
@property (@dynamic, nonatomic) double blue;
@property (retain, @dynamic, nonatomic) NSString *systemColorName;

/* instance methods */
- (void)setColorPropertiesFromCGColor:(struct CGColor *)cgcolor;
- (id)createCSIRepresentationWithCompression:(BOOL)compression colorSpaceID:(unsigned long long)id document:(id)document;
@end

#endif /* TDNamedColorRenditionSpec_h */
