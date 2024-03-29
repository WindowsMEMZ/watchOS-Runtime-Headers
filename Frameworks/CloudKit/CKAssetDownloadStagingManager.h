//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKAssetDownloadStagingManager_h
#define CKAssetDownloadStagingManager_h
@import Foundation;

#include "CKPropertiesDescription-Protocol.h"

@class BOOL *, NSMutableDictionary, NSString, NSURL;

@interface CKAssetDownloadStagingManager : NSObject<CKPropertiesDescription>

@property (retain, nonatomic) NSMutableDictionary *fileHandlesForInflightLastPathComponent;
@property (readonly, nonatomic) NSURL *inflightDownloadDirectory;
@property (readonly, nonatomic) NSURL *finishedDownloadDirectory;
@property (readonly, copy, nonatomic) NSURL *directory;
@property (retain) NSString *fileProtectionType;
@property BOOL keepInflightFilesOpen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDirectory:(id)directory;
- (BOOL)openWithAssetDownloadStagingInfo:(id)info fileDescriptor:(int *)descriptor closeOnDealloc:(BOOL *)dealloc error:(id *)error;
- (BOOL)finishWithAssetDownloadStagingInfo:(id)info fileURL:(id *)url fileHandle:(id *)handle error:(id *)error;
- (void)CKDescribePropertiesUsing:(id)using;
- (id)redactedDescription;
- (id)inflightLastPathComponentWithInfo:(id)info;
- (id)inflightURLWithLastPathComponent:(id)component;
- (id)finishedURLWithInfo:(id)info;
@end

#endif /* CKAssetDownloadStagingManager_h */
