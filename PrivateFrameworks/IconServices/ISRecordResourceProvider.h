//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISRecordResourceProvider_h
#define ISRecordResourceProvider_h
@import Foundation;

#include "ISResourceProvider.h"

@class LSRecord, NSString;

@interface ISRecordResourceProvider : ISResourceProvider

@property (readonly) LSRecord *record;
@property (readonly) NSString *fileExtension;
@property (retain) NSString *templateType;

/* instance methods */
- (id)initWithRecord:(id)record options:(unsigned long long)options;
- (id)initWithRecord:(id)record fileExtension:(id)extension options:(unsigned long long)options;
- (void)resolveResources;
- (id)iconResource;
- (id)resourceNamed:(id)named;
- (id)templateIconResource;
- (id)symbol;
- (BOOL)_isAppleResource;
- (void)setPlatformWithBundle:(id)bundle;
- (id)description;
@end

#endif /* ISRecordResourceProvider_h */
