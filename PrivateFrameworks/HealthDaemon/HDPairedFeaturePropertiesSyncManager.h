//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDPairedFeaturePropertiesSyncManager_h
#define HDPairedFeaturePropertiesSyncManager_h
@import Foundation;

#include "HDAllowedCountriesDataSource-Protocol.h"
#include "HDAllowedCountriesDataSourceObserver-Protocol.h"
#include "HDFeaturePropertiesWriting-Protocol.h"
#include "HDLocalCountrySetAvailabilityProvider.h"
#include "HDPairedFeatureAttributesProviding-Protocol.h"
#include "HDRegionAvailabilityProvidingDelegate-Protocol.h"

@class HKCountrySet, HKFeatureAttributes, HKPairedFeatureAttributes, NSString;

@interface HDPairedFeaturePropertiesSyncManager : NSObject<HDRegionAvailabilityProvidingDelegate, HDPairedFeatureAttributesProviding, HDAllowedCountriesDataSource> {
  /* instance variables */
  HKFeatureAttributes *_localFeatureAttributes;
  HDLocalCountrySetAvailabilityProvider *_localCountrySetAvailabilityProvider;
  id /* block */ _activeRemoteReadSourceProvider;
  id /* block */ _remoteReadSourceForDeviceProvider;
  NSObject<HDFeaturePropertiesWriting> *_localWriteSource;
  int _nanoPreferencesSyncChangeNotificationToken;
}

@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property (weak, nonatomic) NSObject<HDAllowedCountriesDataSourceObserver> *delegate;

/* instance methods */
- (id)initWithFeatureIdentifier:(id)identifier localFeatureAttributes:(id)attributes localCountrySetAvailabilityProvider:(id)provider;
- (id)initWithFeatureIdentifier:(id)identifier localFeatureAttributes:(id)attributes localCountrySetAvailabilityProvider:(id)provider activeRemoteReadSourceProvider:(id /* block */)provider remoteReadSourceForDeviceProvider:(id /* block */)provider localWriteSource:(id)source;
- (void)dealloc;
- (void)synchronizeLocalProperties;
- (id)pairedFeatureAttributesForPairedDevice:(id)device;
- (id)remoteCountrySetForDevice:(id)device;
- (void)reloadLocalCountrySetWithCompletion:(id /* block */)completion;
- (void)regionAvailabilityProvidingDidUpdate:(id)update;
@end

#endif /* HDPairedFeaturePropertiesSyncManager_h */
