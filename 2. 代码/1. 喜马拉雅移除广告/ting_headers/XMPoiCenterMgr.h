//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLBeaconRegion, CLLocation, CLLocationManager, NSDate, NSString;
@protocol XMPOIBeaconDelegate;

@interface XMPoiCenterMgr : NSObject <CLLocationManagerDelegate>
{
    _Bool _isLocationGet;
    CLLocation *_curLoction;
    double _getLocationDuration;
    double _locationUpdateDuration;
    id <XMPOIBeaconDelegate> _ibeconDelegate;
    CLBeaconRegion *_currentBeaconRegion;
    NSDate *_lastUpdateTimeDate;
    NSDate *_lastGetTimeDate;
    CLLocationManager *_locationManager;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSDate *lastGetTimeDate; // @synthesize lastGetTimeDate=_lastGetTimeDate;
@property(retain, nonatomic) NSDate *lastUpdateTimeDate; // @synthesize lastUpdateTimeDate=_lastUpdateTimeDate;
@property(retain, nonatomic) CLBeaconRegion *currentBeaconRegion; // @synthesize currentBeaconRegion=_currentBeaconRegion;
@property(nonatomic) id <XMPOIBeaconDelegate> ibeconDelegate; // @synthesize ibeconDelegate=_ibeconDelegate;
@property(nonatomic) double locationUpdateDuration; // @synthesize locationUpdateDuration=_locationUpdateDuration;
@property(nonatomic) double getLocationDuration; // @synthesize getLocationDuration=_getLocationDuration;
@property(nonatomic) _Bool isLocationGet; // @synthesize isLocationGet=_isLocationGet;
@property(retain, nonatomic) CLLocation *curLoction; // @synthesize curLoction=_curLoction;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)stopMonitoringItem:(id)arg1;
- (void)startMonitoringItem:(id)arg1;
- (id)getCurrentBeaconRegion;
- (id)beaconRegionWithItem:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)didGetLocationServerFailed:(id)arg1;
- (_Bool)startGetUserLocation;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

