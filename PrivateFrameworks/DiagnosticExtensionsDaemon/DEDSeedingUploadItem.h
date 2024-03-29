//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDSeedingUploadItem_h
#define DEDSeedingUploadItem_h
@import Foundation;

#include "DEDAttachmentItem.h"

@class NSString, NSURLSessionUploadTask;

@interface DEDSeedingUploadItem : DEDAttachmentItem

@property (retain) NSString *extensionID;
@property (retain) NSString *filePromiseUUID;
@property long long bytesUploaded;
@property long long totalBytesExpectedToSend;
@property BOOL completed;
@property (retain) NSURLSessionUploadTask *uploadTask;

/* class methods */
+ (id)itemAtPath:(id)path enclosedFilename:(id)filename extensionID:(id)id;

/* instance methods */
- (id)promiseFilename;
- (id)publicDescription;
- (id)description;
@end

#endif /* DEDSeedingUploadItem_h */
