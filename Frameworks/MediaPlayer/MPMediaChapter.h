//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPMediaChapter_h
#define MPMediaChapter_h
@import Foundation;

#include "MPMediaLibraryArtworkDataSource.h"
#include "MPMediaLibraryArtworkRequest.h"

@interface MPMediaChapter : NSObject

@property (retain, nonatomic) id value;
@property (copy, nonatomic) id /* block */ valueLoader;
@property (nonatomic) long long chapterType;
@property (nonatomic) double playbackTime;
@property (nonatomic) double playbackDuration;
@property (nonatomic) unsigned long long indexInChaptersWithSameType;
@property (nonatomic) unsigned long long indexInChaptersWithAnyType;
@property (retain, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest;
@property (weak, nonatomic) MPMediaLibraryArtworkDataSource *artworkDataSource;

/* instance methods */
- (id)artworkCatalog;
- (long long)_sortByChapterIndex:(id)index;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)title;
- (double)duration;
@end

#endif /* MPMediaChapter_h */
