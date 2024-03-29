//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFAccessoryLikeObject_h
#define HFAccessoryLikeObject_h
@import Foundation;

#include "HFAccessoryRepresentable-Protocol.h"
#include "HFAccessoryType.h"
#include "HFFavoritable-Protocol.h"
#include "HFHomeKitObject-Protocol.h"
#include "HFServiceNameComponents.h"
#include "HFServiceNameComponentsProviding-Protocol.h"
#include "HFShowInHomeDashboard-Protocol.h"

@class HMRoom, NSSet, NSString;
@protocol HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol, HFHomeKitObject><HFAccessoryRepresentable;

@interface HFAccessoryLikeObject : NSObject<HFFavoritable, HFShowInHomeDashboard, HFServiceNameComponentsProviding, HFAccessoryRepresentable>

@property (readonly, weak, nonatomic) NSObject<HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol> *dataSource;
@property (readonly, weak, nonatomic) NSObject<HFHomeKitObject><HFAccessoryRepresentable> *homeKitObject;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) NSSet *profiles;
@property (readonly, nonatomic) NSSet *accessories;
@property (readonly, nonatomic) HMRoom *room;
@property (readonly, nonatomic) HFAccessoryType *accessoryType;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly, nonatomic) BOOL hf_effectiveIsFavorite;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hf_showInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_hasSetShowInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_effectiveShowInHomeDashboard;
@property (readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *hf_homeKitObject;
@property (readonly, nonatomic) Class hf_itemClass;
@property (readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property (readonly, nonatomic) HMRoom *hf_safeRoom;
@property (readonly, nonatomic) BOOL hf_canSpanMultipleRooms;
@property (readonly, nonatomic) BOOL hf_isIdentifiable;
@property (readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property (readonly, nonatomic) NSSet *hf_containedServices;
@property (readonly, nonatomic) NSSet *hf_containedProfiles;
@property (readonly, nonatomic) NSSet *hf_associatedAccessories;
@property (readonly, nonatomic) BOOL hf_supportsHomeStatus;
@property (readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_isForcedVisibleInHomeStatus;
@property (readonly, nonatomic) NSString *hf_tileSize;

/* class methods */
+ (id)objectMap;
+ (id)_accessoryLikeObjectForObject:(id)object;
+ (void)_invalidateObjectMap;
+ (id)accessoryLikeObjectsForAccessoryRepresentable:(id)representable;

/* instance methods */
- (id)initWithHomeKitObject:(id)object;
- (Class)itemClass;
- (BOOL)hf_isInRoom:(id)room;
- (id)hf_representableAccessoryLikeObject;
- (id)hf_parentRoom;
- (id)hf_moveToRoom:(id)room;
- (id)hf_updateIsFavorite:(BOOL)favorite;
- (id)hf_updateIsVisibleInHomeStatus:(BOOL)status;
- (id)hf_updateShowInHomeDashboard:(BOOL)dashboard;
- (id)hf_setTileSize:(id)size;
@end

#endif /* HFAccessoryLikeObject_h */
