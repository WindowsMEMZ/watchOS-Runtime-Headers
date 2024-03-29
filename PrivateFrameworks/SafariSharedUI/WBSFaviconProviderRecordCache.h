//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSFaviconProviderRecordCache_h
#define WBSFaviconProviderRecordCache_h
@import Foundation;

@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject {
  /* instance variables */
  NSMutableDictionary *_iconURLStringToInfoDictionary;
  NSMutableDictionary *_iconUUIDToURLStringDictionary;
}

/* instance methods */
- (id)init;
- (id)iconInfoForURLString:(id)urlstring;
- (void)setDateAdded:(id)added forFaviconURLString:(id)urlstring iconUUID:(id)uuid iconSize:(struct CGSize { double x0; double x1; })size hasGeneratedResolutions:(BOOL)resolutions;
- (id)dateAddedForFaviconURLString:(id)urlstring iconUUID:(id *)uuid size:(struct CGSize { double x0; double x1; } *)size;
- (void)removeAllRecords;
- (void)removeRecordForIconUUIDs:(id)uuids;
@end

#endif /* WBSFaviconProviderRecordCache_h */
