//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPSectionedCollection_h
#define MusicKit_SoftLinking_MPSectionedCollection_h
@import Foundation;

@class MPSectionedCollection;

@interface MusicKit_SoftLinking_MPSectionedCollection : NSObject

@property (readonly, nonatomic) MPSectionedCollection *_underlyingSectionedCollection;
@property (readonly, nonatomic) id underlyingSectionedCollection;
@property (readonly, nonatomic) long long totalItemCount;
@property (readonly, nonatomic) id /* block */ itemAtIndexPathBlock;
@property (readonly, nonatomic) id /* block */ sectionItemAtIndexPathBlock;

/* instance methods */
- (id)init;
- (id)initWithUnderlyingSectionedCollection:(id)collection;
- (id)allSections;
- (id)allItems;
- (long long)numberOfSections;
- (id)sectionAtIndex:(long long)index;
- (id)itemAtIndexPath:(id)path;
- (void)enumerateItemIdentifiersUsingBlock:(id /* block */)block;
- (void)enumerateSectionIdentifiersUsingBlock:(id /* block */)block;
- (void)enumerateTitledSectionsUsingBlock:(id /* block */)block;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)index usingBlock:(id /* block */)block;
@end

#endif /* MusicKit_SoftLinking_MPSectionedCollection_h */
