//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 581.0.0.0.0
//
#ifndef TDMultisizeImageSetRenditionSpec_h
#define TDMultisizeImageSetRenditionSpec_h
@import Foundation;

#include "TDRenditionSpec.h"
#include "TDMultisizeImageSetProduction.h"

@class NSSet;

@interface TDMultisizeImageSetRenditionSpec : TDRenditionSpec

@property (retain, @dynamic, nonatomic) TDMultisizeImageSetProduction *multisizeImageSetProduction;
@property (retain, @dynamic, nonatomic) NSSet *multisizeImageRenditions;

/* instance methods */
- (id)createCSIRepresentationWithCompression:(BOOL)compression colorSpaceID:(unsigned long long)id document:(id)document;
- (BOOL)canBePackedWithDocument:(id)document;
@end

#endif /* TDMultisizeImageSetRenditionSpec_h */
