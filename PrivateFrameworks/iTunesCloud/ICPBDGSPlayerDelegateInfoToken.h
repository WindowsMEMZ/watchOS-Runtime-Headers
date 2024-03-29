//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICPBDGSPlayerDelegateInfoToken_h
#define ICPBDGSPlayerDelegateInfoToken_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable<NSCopying> {
  /* instance variables */
  double _expirationTimeInterval;
  unsigned long long _sessionID;
  NSString *_storefrontIdentifier;
  NSData *_token;
  struct { unsigned int x :1 expirationTimeInterval; unsigned int x :1 sessionID; } _has;
}

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* ICPBDGSPlayerDelegateInfoToken_h */
