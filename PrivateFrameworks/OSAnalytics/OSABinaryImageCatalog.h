//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 614.60.3.0.0
//
#ifndef OSABinaryImageCatalog_h
#define OSABinaryImageCatalog_h
@import Foundation;

#include "OSABinaryImageSegment.h"

@class NSMutableArray, NSMutableDictionary;

@interface OSABinaryImageCatalog : NSObject {
  /* instance variables */
  OSABinaryImageSegment *_absolute_segment;
  OSABinaryImageSegment *_kernel_cache_segment;
  NSMutableArray *_kernel_segments;
  NSMutableArray *_kernel_text_exec_segments;
  NSMutableArray *_rootedCacheLibs;
  OSABinaryImageSegment *_targeted_cache;
  unsigned long long _targeted_slide;
  NSMutableDictionary *_shared_segments;
  NSMutableArray *_used_segments;
  NSMutableArray *_notes;
}

/* class methods */
+ (BOOL)isApplePath:(id)path orBundle:(id)bundle;

/* instance methods */
- (id)init;
- (void)setKernelImages:(id)images;
- (void)setKernelTextExecImages:(id)images;
- (void)setKernelCache:(unsigned char x[16])cache address:(unsigned long long)address size:(unsigned long long)size;
- (void)setRootedCacheLibs:(struct dyld_uuid_info_64 { unsigned long long x0; unsigned char x1[16] } *)libs count:(unsigned int)count;
- (unsigned long long)markImageAsUsed:(id)used from:(int)from;
- (void)targetSharedCache:(unsigned char x[16])cache withSlide:(unsigned long long)slide atBaseAddress:(unsigned long long)address;
- (BOOL)isAddressInTargetedCache:(unsigned long long)cache;
- (void)appendNotesTo:(id)to;
- (id)searchFrame:(unsigned long long)frame in:(id)in result:(id *)result;
- (id)searchFrame:(unsigned long long)frame in:(id)in regions:(id)regions result:(id *)result;
- (id)reportUsedImages;
- (id)reportUsedImagesFullInfoUsingBlock:(id /* block */)block;
@end

#endif /* OSABinaryImageCatalog_h */
