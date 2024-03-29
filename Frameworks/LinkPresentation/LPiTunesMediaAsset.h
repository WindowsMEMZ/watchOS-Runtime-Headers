//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPiTunesMediaAsset_h
#define LPiTunesMediaAsset_h
@import Foundation;

#include "LPFetcher.h"

@class MPStoreLyricsSnippetURLComponents, NSDictionary, NSString, NSURL;

@interface LPiTunesMediaAsset : NSObject {
  /* instance variables */
  long long _type;
  MPStoreLyricsSnippetURLComponents *_lyricComponents;
  NSString *_curatorID;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *colors;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) LPFetcher *fetcher;

/* instance methods */
- (id)initWithImageURL:(id)url colors:(id)colors name:(id)name;
- (id)initWithName:(id)name lyricComponents:(id)components;
- (id)initWithName:(id)name curatorID:(id)id;
- (id)metadata;
@end

#endif /* LPiTunesMediaAsset_h */
