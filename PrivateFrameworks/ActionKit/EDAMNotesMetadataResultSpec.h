//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMNotesMetadataResultSpec_h
#define EDAMNotesMetadataResultSpec_h
@import Foundation;

#include "FATObject.h"

@class NSNumber;

@interface EDAMNotesMetadataResultSpec : FATObject

@property (retain, nonatomic) NSNumber *includeTitle;
@property (retain, nonatomic) NSNumber *includeContentLength;
@property (retain, nonatomic) NSNumber *includeCreated;
@property (retain, nonatomic) NSNumber *includeUpdated;
@property (retain, nonatomic) NSNumber *includeDeleted;
@property (retain, nonatomic) NSNumber *includeUpdateSequenceNum;
@property (retain, nonatomic) NSNumber *includeNotebookGuid;
@property (retain, nonatomic) NSNumber *includeTagGuids;
@property (retain, nonatomic) NSNumber *includeAttributes;
@property (retain, nonatomic) NSNumber *includeLargestResourceMime;
@property (retain, nonatomic) NSNumber *includeLargestResourceSize;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMNotesMetadataResultSpec_h */
