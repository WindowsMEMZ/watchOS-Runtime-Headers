//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTEventFieldsUtil_h
#define MTEventFieldsUtil_h
@import Foundation;

@interface MTEventFieldsUtil : NSObject
/* class methods */
+ (id)mapForSectionName:(id)name inFieldsMap:(id)map;
+ (id)applyFieldsMap:(id)map data:(id)data sectionName:(id)name error:(id *)error;
@end

#endif /* MTEventFieldsUtil_h */
