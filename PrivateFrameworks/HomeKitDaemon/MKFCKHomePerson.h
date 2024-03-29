//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFCKHomePerson_h
#define MKFCKHomePerson_h
@import Foundation;

#include "MKFCKPerson.h"
#include "MKFCKHome.h"
#include "MKFCKPhotosPerson.h"

@class NSUUID;

@interface MKFCKHomePerson : MKFCKPerson

@property (copy, @dynamic, nonatomic) NSUUID *linkedSharedPhotosPersonModelID;
@property (retain, @dynamic, nonatomic) MKFCKHome *home;
@property (retain, @dynamic, nonatomic) MKFCKPhotosPerson *linkedPhotosPerson;

/* class methods */
+ (id)fetchRequest;

/* instance methods */
- (BOOL)importIntoLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
- (BOOL)exportFromLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
@end

#endif /* MKFCKHomePerson_h */
