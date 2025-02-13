//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBUserNotificationCenterHandlerDelete-Protocol.h"

@class NSDictionary, NSString, WBNetworkClient;

@interface WBPushNotificationManager : NSObject <WBUserNotificationCenterHandlerDelete>
{
    WBNetworkClient *client;
    NSString *pushActiveVersion;
    _Bool isFromSchemeToApp;
    double toForegroundTime;
    double toBackgroundTime;
    double loginTime;
    NSString *_pushActionScheme;
    NSDictionary *_schemeParam;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSDictionary *schemeParam; // @synthesize schemeParam=_schemeParam;
@property(retain, nonatomic) NSString *pushActionScheme; // @synthesize pushActionScheme=_pushActionScheme;
- (void).cxx_destruct;
- (void)_logWeiboOpenUrl:(id)arg1;
- (double)timeSinceLastBoot;
- (void)_appDidFinishLaunch:(id)arg1;
- (void)_appAccountWillSwitch:(id)arg1;
- (void)_appAccountDidSwitch:(id)arg1;
- (void)openActionSchemeIfExist;
- (void)actionLogWithStatus:(id)arg1 andExtraParams:(id)arg2;
- (void)actionLogWithStatus:(id)arg1;
- (void)pushActive:(id)arg1;
- (void)callPushActiveAddSysNotifyStatus:(id)arg1;
- (id)mockCampaignJsonArr;
- (long long)lastInterceptadDaysFromNow:(id)arg1;
- (void)initClient;
- (void)appStateDidChangeToState:(id)arg1 andExtraParams:(id)arg2;
- (void)appStateDidChangeToState:(id)arg1;
- (void)appOpenWithScheme:(id)arg1;
- (void)appDidEnterBackground:(double)arg1;
- (void)appWillEnterForeground:(double)arg1;
- (_Bool)alertPushNotificationSettings;
- (void)handleNotificationAction:(id)arg1 UserInfo:(id)arg2 Notification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (long long)statusTypeWithCategory:(id)arg1;
- (void)handlePush:(id)arg1 forAction:(id)arg2 isAppActive:(_Bool)arg3 responseInActive:(_Bool)arg4;
- (void)handlePush:(id)arg1 isAppActive:(_Bool)arg2 responseInActive:(_Bool)arg3;
- (void)handleNotificationWithUserInfo:(id)arg1 Notification:(id)arg2 extinfo:(id)arg3;
- (_Bool)isHandleResponseInActiveWithUserInfo:(id)arg1;
- (unsigned long long)presentOptionsWithUserInfo:(id)arg1;
- (id)DataTOjsonString:(id)arg1;
- (unsigned long long)_pushTypeForUserInfo:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

