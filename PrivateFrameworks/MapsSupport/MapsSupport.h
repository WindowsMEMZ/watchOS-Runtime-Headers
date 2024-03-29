//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSupport_h
#define MapsSupport_h

#import "GCDTimer.h"
#import "MSPBookmarkStorage.h"
#import "MSPCloudKitAccountAccess.h"
#import "MSPCollectionItemReplicaStorage.h"
#import "MSPCollectionItemStorage.h"
#import "MSPCollectionStorage.h"
#import "MSPCompanionSyncedItem.h"
#import "MSPContact.h"
#import "MSPContainer.h"
#import "MSPContainerArrayStateSnapshot.h"
#import "MSPContainerCoalescingToken.h"
#import "MSPContainerPersister.h"
#import "MSPDirectionsSearch.h"
#import "MSPDroppedPin.h"
#import "MSPEditableQuery.h"
#import "MSPEncryptedCloudRecord.h"
#import "MSPFileContainerPersister.h"
#import "MSPGroupSessionStorage.h"
#import "MSPHistoryEntryStorage.h"
#import "MSPLowFuelDetails.h"
#import "MSPMapsDefaultsAccessor.h"
#import "MSPMapsInstallState.h"
#import "MSPMapsPaths.h"
#import "MSPMapsPushDaemonRemoteProxy.h"
#import "MSPMapsPushDaemonRemoteXPCProxy.h"
#import "MSPMutableHistoryEntry.h"
#import "MSPMutableHistoryEntryPlaceDisplay.h"
#import "MSPMutableHistoryEntryRoute.h"
#import "MSPMutableHistoryEntrySearch.h"
#import "MSPMutableHistoryEntryTransitLineItem.h"
#import "MSPNavigationListener.h"
#import "MSPPin.h"
#import "MSPPinStorage.h"
#import "MSPPinnedPlaceContactStorage.h"
#import "MSPPinnedPlaceStorage.h"
#import "MSPPlaceBookmark.h"
#import "MSPPlaceDisplay.h"
#import "MSPQuery.h"
#import "MSPQuerySearch.h"
#import "MSPQuerySource.h"
#import "MSPReceiverETAController.h"
#import "MSPRegionBookmark.h"
#import "MSPRidesharingInformationSource.h"
#import "MSPRidesharingTrip.h"
#import "MSPRouteBookmark.h"
#import "MSPSenderETAController.h"
#import "MSPSenderLiveStrategy.h"
#import "MSPSenderMapsStrategy.h"
#import "MSPSenderMessageStrategy.h"
#import "MSPSenderMinimalStrategy.h"
#import "MSPSenderStrategy.h"
#import "MSPSerializer.h"
#import "MSPSharedTripBlocklist.h"
#import "MSPSharedTripCapabilityLevelFetcher.h"
#import "MSPSharedTripContact.h"
#import "MSPSharedTripContactController.h"
#import "MSPSharedTripFetchedStatus.h"
#import "MSPSharedTripGroupSession.h"
#import "MSPSharedTripNotificationRules.h"
#import "MSPSharedTripPeer.h"
#import "MSPSharedTripReceiverCapabilities.h"
#import "MSPSharedTripRelay.h"
#import "MSPSharedTripServer.h"
#import "MSPSharedTripService.h"
#import "MSPSharedTripSharingIdentity.h"
#import "MSPSharedTripStorageController.h"
#import "MSPSharedTripSubscriptionToken.h"
#import "MSPSharingRestorationStorage.h"
#import "MSPSyncManager.h"
#import "MSPTransitLineBookmark.h"
#import "MSPTransitStorageArtwork.h"
#import "MSPTransitStorageAttribution.h"
#import "MSPTransitStorageIcon.h"
#import "MSPTransitStorageIncident.h"
#import "MSPTransitStorageIncidentEntity.h"
#import "MSPTransitStorageLine.h"
#import "MSPTransitStorageLineItem.h"
#import "MSPTransitStorageShield.h"
#import "MSPTransitStorageSystem.h"
#import "_MSPContainerEdit.h"
#import "_MSPContainerEditAddition.h"
#import "_MSPContainerEditContentUpdate.h"
#import "_MSPContainerEditRemoval.h"
#import "_MSPContainerEditReplacedEntirely.h"
#import "_MSPContainerEditReplacement.h"
#import "_MSPContainerEditsRecorder.h"
#import "_MSPQueryState.h"
#import "_MSPSharedTripSingleCapabilityLevelFetcher.h"
#import "GEOKeyBagProtectedDataDidBecomeAvailableObserver-Protocol.h"
#import "GEONavigationListenerDelegate-Protocol.h"
#import "GEONavigationListenerPrivateDelegate-Protocol.h"
#import "GEOTransitArtworkDataSource-Protocol.h"
#import "GEOTransitAttribution-Protocol.h"
#import "GEOTransitIconDataSource-Protocol.h"
#import "GEOTransitIncident-Protocol.h"
#import "GEOTransitIncidentEntity-Protocol.h"
#import "GEOTransitLine-Protocol.h"
#import "GEOTransitLineItem-Protocol.h"
#import "GEOTransitShieldDataSource-Protocol.h"
#import "GEOTransitSystem-Protocol.h"
#import "IDSBatchIDQueryControllerDelegate-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"
#import "MSPCloudRecord-Protocol.h"
#import "MSPContainerCoalescingToken-Protocol.h"
#import "MSPContainerEdit-Protocol.h"
#import "MSPContainerEditAddition-Protocol.h"
#import "MSPContainerEditContentUpdate-Protocol.h"
#import "MSPContainerEditRemoval-Protocol.h"
#import "MSPContainerEditReplacedEntirely-Protocol.h"
#import "MSPContainerEditReplacement-Protocol.h"
#import "MSPContainerObserver-Protocol.h"
#import "MSPContainerPersisterDelegate-Protocol.h"
#import "MSPContainerStateSnapshot-Protocol.h"
#import "MSPHistoryEntry-Protocol.h"
#import "MSPHistoryEntryPlaceDisplay-Protocol.h"
#import "MSPHistoryEntryRoute-Protocol.h"
#import "MSPHistoryEntrySearch-Protocol.h"
#import "MSPHistoryEntryTransitLineItem-Protocol.h"
#import "MSPIdentifiable-Protocol.h"
#import "MSPImmutableObject-Protocol.h"
#import "MSPMapsInstallStateObserver-Protocol.h"
#import "MSPMapsPushDaemonProxy-Protocol.h"
#import "MSPMapsPushDaemonProxyObserver-Protocol.h"
#import "MSPMutableObject-Protocol.h"
#import "MSPNavigationListenerDelegate-Protocol.h"
#import "MSPQuerySourceObserver-Protocol.h"
#import "MSPReceiverETAControllerDelegate-Protocol.h"
#import "MSPRouteInformationSource-Protocol.h"
#import "MSPSenderETAControllerDelegate-Protocol.h"
#import "MSPSenderMessageStrategyDelegate-Protocol.h"
#import "MSPSharedTripAvailabiltyDelegate-Protocol.h"
#import "MSPSharedTripCapabilityLevelFetcherObserver-Protocol.h"
#import "MSPSharedTripContactControllerDelegate-Protocol.h"
#import "MSPSharedTripGroupSessionDelegate-Protocol.h"
#import "MSPSharedTripRelayDelegate-Protocol.h"
#import "MSPSharedTripServiceReceivingObserver-Protocol.h"
#import "MSPSharedTripServiceSendingObserver-Protocol.h"
#import "MSPSharedTripStorageDelegate-Protocol.h"
#import "MSPSharedTripXPCClient-Protocol.h"
#import "MSPSharedTripXPCServer-Protocol.h"
#import "MSPTransferableToImmutable-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "SYChange-Protocol.h"
#import "SYChangeSerializer-Protocol.h"
#import "SYObject-Protocol.h"
#import "SYServiceDelegate-Protocol.h"
#import "SYSessionDelegate-Protocol.h"
#import "_TtP8MapsSync31MapsSyncStoreControllerDelegate_-Protocol.h"
#import "GEOComposedWaypoint+Logging.h"
#import "NSUUID+MSPAdditions.h"
#import "NSArray+MSPContainerAdditions.h"
#import "GEOSharedNavETAInfo+MSPExtras.h"
#import "GEOSharedNavWaypointInfo+MSPExtras.h"
#import "GEOSharedNavLocationInfo+MSPExtras.h"
#import "IDSAccount+MSPExtras.h"
#import "IDSService+MSPExtras.h"
#import "GEOStorageRouteRequestStorage+MSPRouteInformationSource.h"
#import "NSObject+MapsSharedExtras.h"
#import "NSError+MapsSharedExtras.h"
#import "NSString+MapsSharedExtras.h"
#import "NSTimer+MapsSharedExtras.h"
#import "CNContactStore+MapsSupportExtras.h"
#import "GEOSharedNavState+Testing.h"

#endif /* MapsSupport_h */
