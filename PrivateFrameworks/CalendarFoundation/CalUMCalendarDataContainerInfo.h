//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalUMCalendarDataContainerInfo_h
#define CalUMCalendarDataContainerInfo_h
@import Foundation;

#include "CalCalendarDataContainerInfo-Protocol.h"

@class NSString, NSURL;

@interface CalUMCalendarDataContainerInfo : NSObject<CalCalendarDataContainerInfo>

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSString *personaID;
@property (readonly, nonatomic) NSURL *containerURL;
@property (readonly, nonatomic) BOOL usesDataSeparatedContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_calendarGroupContainer;

/* instance methods */
- (id)initWithAccountID:(id)id;
- (id)initWithPersonaID:(id)id;
@end

#endif /* CalUMCalendarDataContainerInfo_h */
