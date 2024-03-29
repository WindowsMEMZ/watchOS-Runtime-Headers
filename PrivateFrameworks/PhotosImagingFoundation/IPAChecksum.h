//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAChecksum_h
#define IPAChecksum_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface IPAChecksum : NSObject<NSCopying> {
  /* instance variables */
  struct IPAChecksumBytes { unsigned char x[16] data; } _bytes;
}

/* instance methods */
- (id)initWithBytes:(struct IPAChecksumBytes { unsigned char x0[16] })bytes;
- (id)initWithString:(id)string;
- (id)initWithData:(id)data;
- (id)initWithChecksumAsData:(id)data;
- (struct IPAChecksumBytes { unsigned char x0[16] })checksumBytes;
- (id)string;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToBytes:(struct IPAChecksumBytes { unsigned char x0[16] })bytes;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* IPAChecksum_h */
