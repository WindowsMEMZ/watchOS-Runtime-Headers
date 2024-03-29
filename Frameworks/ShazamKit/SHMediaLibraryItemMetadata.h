//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHMediaLibraryItemMetadata_h
#define SHMediaLibraryItemMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData;

@interface SHMediaLibraryItemMetadata : NSObject<NSCopying>

@property (readonly, nonatomic) NSData *encodedSystemData;

/* instance methods */
- (id)initWithEncodedSystemData:(id)data;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)validEncodedSystemData:(id)data;
@end

#endif /* SHMediaLibraryItemMetadata_h */
