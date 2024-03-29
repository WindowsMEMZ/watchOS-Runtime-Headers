//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENSessionFindNotesContext_h
#define ENSessionFindNotesContext_h
@import Foundation;

#include "EDAMNoteFilter.h"
#include "EDAMNotesMetadataResultSpec.h"
#include "ENNotebook.h"

@class NSArray, NSMutableArray, NSSet;

@interface ENSessionFindNotesContext : NSObject

@property (retain, nonatomic) ENNotebook *scopeNotebook;
@property (nonatomic) unsigned long long scope;
@property (nonatomic) unsigned long long sortOrder;
@property (retain, nonatomic) EDAMNoteFilter *noteFilter;
@property (retain, nonatomic) EDAMNotesMetadataResultSpec *resultSpec;
@property (nonatomic) unsigned long long maxResults;
@property (nonatomic) BOOL requiresLocalMerge;
@property (nonatomic) BOOL sortAscending;
@property (retain, nonatomic) NSArray *allNotebooks;
@property (retain, nonatomic) NSMutableArray *linkedNotebooksToSearch;
@property (retain, nonatomic) NSMutableArray *findMetadataResults;
@property (retain, nonatomic) NSSet *resultGuidsFromBusiness;
@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) id /* block */ completion;

/* instance methods */
@end

#endif /* ENSessionFindNotesContext_h */
