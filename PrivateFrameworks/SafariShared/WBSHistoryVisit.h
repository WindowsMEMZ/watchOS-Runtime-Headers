//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSHistoryVisit_h
#define WBSHistoryVisit_h
@import Foundation;

#include "WBSHistoryItem.h"
#include "WBSHistoryVisit.h"

@class NSString;

@interface WBSHistoryVisit : NSObject

@property (nonatomic) long long databaseID;
@property (nonatomic) long long redirectSourceDatabaseID;
@property (nonatomic) long long redirectDestinationDatabaseID;
@property (weak, nonatomic) WBSHistoryItem *item;
@property (nonatomic) long long origin;
@property (readonly, nonatomic) double visitTime;
@property (copy) NSString *title;
@property (nonatomic) int score;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) BOOL loadSuccessful;
@property (readonly, nonatomic) BOOL httpNonGet;
@property (readonly, nonatomic) BOOL synthesized;
@property (retain, nonatomic) WBSHistoryVisit *redirectSource;
@property (retain, nonatomic) WBSHistoryVisit *redirectDestination;
@property (readonly, nonatomic) WBSHistoryVisit *endOfRedirectChain;
@property (nonatomic) BOOL didUserInteractWithPage;
@property (readonly, nonatomic) unsigned long long redirectSourceChainLength;

/* class methods */
+ (int)scoreForWeightedVisitCount:(float)count;
+ (float)weightedVisitCountFromScore:(int)score;
+ (id)synthesizedVisitWithHistoryItem:(id)item visitTime:(double)time;

/* instance methods */
- (id)initWithHistoryItem:(id)item streamedVisit:(const struct _HistoryStreamedVisit { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; double x3; char x4; char x5; char x6; int x7; long long x8; long long x9; long long x10; long long x11; long long x12; char * x13; } *)visit;
- (id)initWithHistoryItem:(id)item visitTime:(double)time loadWasSuccesful:(BOOL)succesful wasHTTPNonGet:(BOOL)get origin:(long long)origin attributes:(unsigned long long)attributes;
- (id)initWithHistoryItem:(id)item visitTime:(double)time;
- (id)initWithHistoryItem:(id)item sqliteRow:(id)row baseColumnIndex:(unsigned long long)index;
- (id)initWithHistoryItem:(id)item serviceVisit:(id)visit;
- (BOOL)hasAttributes:(unsigned long long)attributes;
- (void)recomputeScore;
- (double)_weight;
- (BOOL)loadWasSuccessful;
- (BOOL)wasHTTPNonGet;
- (BOOL)isSynthesized;
@end

#endif /* WBSHistoryVisit_h */
