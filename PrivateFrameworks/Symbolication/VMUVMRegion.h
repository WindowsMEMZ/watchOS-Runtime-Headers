//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64561.91.2.0.0
//
#ifndef VMUVMRegion_h
#define VMUVMRegion_h
@import Foundation;

@class NSString;

@interface VMUVMRegion : NSObject {
  /* instance variables */
  struct _VMURange { unsigned long long location; unsigned long long length; } range;
  unsigned int prot;
  unsigned int maxProt;
  NSString *type;
  NSString *path;
  BOOL summarized;
  unsigned char external_pager;
  unsigned char share_mode;
  int purgeable;
  unsigned long long virtual_pages;
  unsigned long long pages_resident;
  unsigned long long pages_shared_now_private;
  unsigned long long pages_swapped_out;
  unsigned long long pages_dirtied;
  unsigned long long ref_count;
  unsigned int user_tag;
  unsigned long long object_id;
  unsigned long long offset;
  unsigned int nesting_depth;
  unsigned int x :1 is_submap;
  unsigned int x :1 is_macho_region;
  unsigned int x :1 is_unused_data_region;
  unsigned int x :1 is_unused_data_page_shared_with_active_content;
  unsigned int x :1 is_wired;
  unsigned int x :27 reserved_flags;
  unsigned long long mallocBlockCount;
  unsigned int mallocTypeFlag;
  unsigned int zone_index;
  unsigned int coalesced_region_count;
  unsigned long long resident_size;
  unsigned long long shared_now_private_size;
  unsigned long long swapped_out_size;
  unsigned long long dirty_size;
  unsigned long long purgable_vol_size;
  unsigned long long purgable_non_vol_size;
  unsigned long long purgable_empty_size;
  unsigned long long reusable_size;
}

/* class methods */
+ (void)initialize;
+ (id)columnHeadersWithOptions:(unsigned long long)options maximumLength:(unsigned long long)length;
+ (id)columnHeadersWithOptions:(unsigned long long)options maximumLength:(unsigned long long)length memorySizeDivisor:(unsigned int)divisor hasFractionalPageSizes:(BOOL)sizes;

/* instance methods */
- (id)init;
- (id)initWithVMRegionData:(struct _VMUVMRegionData { unsigned long long x0; unsigned long long x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; unsigned int x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15; unsigned int x16; unsigned int x17 :1; unsigned int x18 :1; unsigned int x19 :1; unsigned int x20 :1; unsigned int x21 :1; unsigned int x22 :27; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; } *)data encodedVersion:(long long)version simpleSerializer:(id)serializer error:(id *)error;
- (void)setVMRegionDataExtra:(struct _VMUVMRegionDataExtra { unsigned long long x0; unsigned long long x1; } *)extra;
- (void)getVMRegionData:(struct _VMUVMRegionData { unsigned long long x0; unsigned long long x1; unsigned int x2; int x3; int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; int x10; unsigned int x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15; unsigned int x16; unsigned int x17 :1; unsigned int x18 :1; unsigned int x19 :1; unsigned int x20 :1; unsigned int x21 :1; unsigned int x22 :27; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; } *)data withSimpleSerializer:(id)serializer;
- (void)getVMRegionDataExtra:(struct _VMUVMRegionDataExtra { unsigned long long x0; unsigned long long x1; } *)extra;
- (id)descriptionWithOptions:(unsigned long long)options maximumLength:(unsigned long long)length;
- (id)descriptionWithOptions:(unsigned long long)options maximumLength:(unsigned long long)length memorySizeDivisor:(unsigned int)divisor hasFractionalPageSizes:(BOOL)sizes;
- (id)description;
- (struct _VMURange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)address;
- (unsigned long long)length;
- (id)type;
- (id)path;
- (unsigned int)protection;
- (unsigned int)maxProtection;
- (BOOL)isSubmap;
- (BOOL)isWired;
- (unsigned long long)dirtyLength;
- (BOOL)isRootRegion;
- (BOOL)isNullRegion;
- (BOOL)isEqual:(id)equal;
- (BOOL)hasSameInfoAsRegion:(id)region;
- (void)addInfoFromRegion:(id)region;
- (id)breakAtLength:(unsigned long long)length;
@end

#endif /* VMUVMRegion_h */
