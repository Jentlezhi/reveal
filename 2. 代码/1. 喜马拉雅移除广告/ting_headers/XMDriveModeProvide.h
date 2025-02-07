//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XMDriveModeProvide : NSObject
{
    _Bool _isCarBluetoothConnected;
    _Bool _isShowAlert;
    CDUnknownBlockType _carBluetoothConnectedBlock;
}

+ (void)SyncPermissionsWithValue:(id)arg1;
+ (void)writeBluetoothDevicePortNameInBlackList;
+ (void)writeBluetoothDevicePortNameInWhiteList;
+ (_Bool)shouldShowDriveModeAlertView;
+ (_Bool)isCalendarConformStandardWithKey:(id)arg1 limitDays:(long long)arg2;
+ (id)connectedBluetoothDevicePortName;
+ (_Bool)isConnectBluetoothDevice;
+ (_Bool)hasShowDriveModeView;
+ (void)showDriveModeViewController;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(nonatomic) _Bool isShowAlert; // @synthesize isShowAlert=_isShowAlert;
@property(nonatomic) _Bool isCarBluetoothConnected; // @synthesize isCarBluetoothConnected=_isCarBluetoothConnected;
@property(copy, nonatomic) CDUnknownBlockType carBluetoothConnectedBlock; // @synthesize carBluetoothConnectedBlock=_carBluetoothConnectedBlock;
- (void).cxx_destruct;
- (void)requestDriveModeRecordCallbackWithValue:(id)arg1;
- (void)requestDriveModeMatchStatusWithNeedToShowAlert:(_Bool)arg1;
- (_Bool)ifIsWithinOneDay;
- (void)checkDriveModeAlertStatus;
- (void)onAudioSessionRouteChanged:(id)arg1;
- (void)addCoreBluetoothObserve;
- (void)showDriveModeAlertView;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

