//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOAppStoreAppClip_h
#define GEOAppStoreAppClip_h
@import Foundation;

@class NSString, NSURL;

@interface GEOAppStoreAppClip : NSObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSURL *appClipURL;
@property (retain, nonatomic) NSURL *artworkURL;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) NSString *appShortName;

/* instance methods */
- (id)initWithBundleID:(id)id title:(id)title subtitle:(id)subtitle appShortName:(id)name appClipURL:(id)url artworkURL:(id)url providerName:(id)name;
- (id)description;
@end

#endif /* GEOAppStoreAppClip_h */
