//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUILocationEditItemModel_h
#define EKUILocationEditItemModel_h
@import Foundation;

#include "EKUILocationRowModel.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface EKUILocationEditItemModel : NSObject

@property (retain, nonatomic) NSMutableArray *rowModels;
@property (retain, nonatomic) NSMutableDictionary *conferenceRoomInfos;
@property (readonly, nonatomic) BOOL hasVirtualConference;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (readonly, nonatomic) BOOL displaysPlaceholder;
@property (readonly, nonatomic) NSString *placeholderCellText;
@property (readonly, nonatomic) EKUILocationRowModel *virtualConferenceRowModel;
@property (readonly, nonatomic) EKUILocationRowModel *mapLocationRowModel;

/* instance methods */
- (id)init;
- (void)reset;
- (void)rebuild:(id)rebuild;
- (void)_updateConferenceDataOnEvent:(id)event forNewLocation:(id)location;
- (void)_removeConferenceAttendeeOnEvent:(id)event forRowModel:(id)model;
- (void)_deleteVirtualConferenceOnEvent:(id)event forRowModel:(id)model;
- (void)_updateLocationsOnEvent:(id)event;
- (void)removeRowModel:(id)model event:(id)event;
- (void)removeRowModelAtIndex:(unsigned long long)index event:(id)event;
- (long long)indexOfPredictedLocation;
- (id)_rowModelForCell:(id)cell;
- (void)updateRowModel:(id)model withMapLocation:(id)location event:(id)event;
- (void)updateRowModel:(id)model withVirtualConference:(id)conference event:(id)event;
- (void)updateRowModel:(id)model withConferenceRoom:(id)room editItem:(id)item;
- (void)reorderRowModels;
- (void)updateAvailabilityInformation:(id)information;
- (id)_conferenceRoomNameForLocation:(id)location;
- (id)_participantForConferenceRoomName:(id)name event:(id)event;
- (void)refreshConferenceRoomCell:(id)cell event:(id)event;
- (BOOL)shouldDisplayRowModelWithConferenceCell:(id)cell event:(id)event;
- (void)removeConferenceRoomAttendeeIfNeeded:(id)needed event:(id)event;
- (BOOL)rowModelRepresentsConferenceRoom:(id)room onEvent:(id)event;
@end

#endif /* EKUILocationEditItemModel_h */
