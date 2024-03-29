//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKTileSet_h
#define SKTileSet_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SKTileGroup.h"

@class NSArray, NSMutableArray, NSString;

@interface SKTileSet : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSMutableArray *_definitions;
  NSMutableArray *_groups;
}

@property (readonly, nonatomic) NSArray *tileDefinitions;
@property (retain, nonatomic) NSArray *stamps;
@property (copy, nonatomic) NSArray *tileGroups;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) SKTileGroup *defaultTileGroup;
@property (nonatomic) struct CGSize { double x0; double x1; } defaultTileSize;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)tileSetWithTileGroups:(id)groups;
+ (id)tileSetWithTileGroups:(id)groups tileSetType:(unsigned long long)type;
+ (id)recursivePathsForResourcesOfType:(id)type inDirectory:(id)directory;
+ (id)findTileSetInBundleNamed:(id)named;
+ (id)tileSetNamed:(id)named;
+ (id)tileSetFromURL:(id)url;
+ (void)clearTileSetTableCache;

/* instance methods */
- (void)setGroupParentPointers;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqualToNode:(id)node;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)init;
- (void)observeAllTileDefinitions;
- (void)unobserveAllTileDefinitions;
- (void)dealloc;
- (void)observeTileDefinition:(id)definition;
- (void)removeTileDefinitionObservers:(id)observers;
- (void)commonInit;
- (void)calcDefaultTileSize;
- (id)initWithTileGroups:(id)groups;
- (id)initWithTileGroups:(id)groups tileSetType:(unsigned long long)type;
- (void)lookForMissingDefinitionsInGroups;
- (void)updateTileDefinitionIDsInGroupRules;
- (id)findTileDefinitionForGroup:(id)group withGroupAdjacency:(unsigned long long *)adjacency;
- (id)findTileDefinitionsForGroup:(id)group withGroupAdjacency:(unsigned long long *)adjacency;
- (id)getCenterTileDefinitionForGroup:(id)group withRequiredOutputGroupAdjacency:(unsigned long long *)adjacency;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* SKTileSet_h */
