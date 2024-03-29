//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFCKPhotosPerson_h
#define MKFCKPhotosPerson_h
@import Foundation;

#include "MKFCKPerson.h"
#include "MKFCKHomePerson.h"
#include "MKFCKUser.h"

@class NSUUID;

@interface MKFCKPhotosPerson : MKFCKPerson

@property (copy, @dynamic, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (retain, @dynamic, nonatomic) MKFCKHomePerson *linkedHomePerson;
@property (retain, @dynamic, nonatomic) MKFCKUser *user;

/* class methods */
+ (id)fetchRequest;
+ (id)rootKeyPath;

/* instance methods */
- (id)home;
- (void)setHome:(id)home;
- (BOOL)importIntoLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
- (BOOL)exportFromLocalModel:(id)model updatedProperties:(id)properties context:(id)context;
- (BOOL)validateUser:(id *)user error:(id *)error;
@end

#endif /* MKFCKPhotosPerson_h */
