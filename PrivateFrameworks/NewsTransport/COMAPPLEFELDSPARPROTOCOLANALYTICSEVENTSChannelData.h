//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData_h
#define COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 isBundleChannel; } _has;
}

@property (nonatomic) BOOL hasIsBundleChannel;
@property (nonatomic) BOOL isBundleChannel;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData_h */
