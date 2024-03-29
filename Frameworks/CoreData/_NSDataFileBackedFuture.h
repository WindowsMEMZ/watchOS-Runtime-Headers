//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef _NSDataFileBackedFuture_h
#define _NSDataFileBackedFuture_h
@import Foundation;

#include "NSData.h"
#include "NSSecureCoding-Protocol.h"
#include "_NSFileBackedFuture-Protocol.h"

@class NSData, NSURL, NSUUID;

@interface _NSDataFileBackedFuture : NSData<_NSFileBackedFuture, NSSecureCoding> {
  /* instance variables */
  NSURL *_originalFileURL;
  NSUUID *_uuid;
  NSData *_realData;
  NSData *_bytes;
}

@property (readonly) NSURL *fileURL;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSUUID *UUID;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (Class)classForKeyedUnarchiver;

/* instance methods */
- (id)initWithStoreMetadata:(id)metadata directory:(id)directory originalFileURL:(id)url;
- (id)initWithStoreMetadata:(id)metadata directory:(id)directory;
- (id)description;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void *)_bytesPtrForStore;
- (unsigned long long)_bytesLengthForStore;
- (void)_copyToInterimLocation;
- (void)_moveToPermanentLocation;
- (unsigned long long)length;
- (const void *)bytes;
- (BOOL)_isCloudKitSupportOriginated;
@end

#endif /* _NSDataFileBackedFuture_h */
