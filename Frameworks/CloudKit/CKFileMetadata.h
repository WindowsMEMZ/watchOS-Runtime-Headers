//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKFileMetadata_h
#define CKFileMetadata_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSNumber;

@interface CKFileMetadata : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSNumber *deviceID;
@property (readonly, copy, nonatomic) NSNumber *fileID;
@property (readonly, copy, nonatomic) NSNumber *generationID;
@property (readonly, copy, nonatomic) NSNumber *modTimeInSeconds;
@property (readonly, copy, nonatomic) NSNumber *fileSize;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDeviceID:(id)id fileID:(id)id generationID:(id)id modTimeInSeconds:(id)seconds fileSize:(id)size;
- (id)initWithFileSize:(id)size;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CKFileMetadata_h */
